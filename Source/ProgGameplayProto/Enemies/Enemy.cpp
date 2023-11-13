// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"

#include "EnemiesHealthBar.h"
#include "Components/CapsuleComponent.h"
#include "ProgGameplayProto/GameUtils.h"
#include "ProgGameplayProto/Health.h"
#include "ProgGameplayProto/ProgGameplayProtoCharacter.h"
#include "ProgGameplayProto/Drops/EnemyDropperComponent.h"

// Sets default values
AEnemy::AEnemy()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UCapsuleComponent>("Collision");
	SetRootComponent(Collision);

	Health = CreateDefaultSubobject<UHealth>("Health");

	Dropper = CreateDefaultSubobject<UEnemyDropperComponent>("Dropper");
	Dropper->SetupAttachment(Collision);

	//barre de vie
	HealthWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT( "HealthBar" ));
	HealthWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();

	Health->OnHealthDie.AddDynamic(this, &AEnemy::Die);

	UEnemiesHealthBar* EnemiesHealthBar = Cast<UEnemiesHealthBar>(HealthWidgetComp->GetUserWidgetObject());
	EnemiesHealthBar->SetOwnerEnemy(this);
}

void AEnemy::MoveTowardPlayer(float DeltaTime)
{
	const AProgGameplayProtoCharacter* player = UGameUtils::GetMainCharacter();

	if (!IsValid(player)) return;

	FVector direction = player->GetActorLocation() - GetActorLocation();
	direction.Z = 0;



	//If does Distance Attack
	float SquareLength = direction.SquaredLength();
	direction.Normalize();


	


	if (SquareLength < MeleeRange * MeleeRange) 
	{  
		//Rotate the enemy towards the player
		float Tangent = atan2(direction.Y, direction.X) / PI * 180;//Tangent
		FRotator Rot = FRotator(0, Tangent, 0);
		SetActorRotation(Rot);

		MeleeAttack = true;

		Attack_BP(UGameUtils::GetMainCharacter());
		//FTimerDelegate TimerDel;
		//TimerDel.BindUFunction(this, FName("TryAttacking"), UGameUtils::GetMainCharacter());
		//GetWorldTimerManager().SetTimer(UnusedHandle, TimerDel, TimeToAttack, false);
		//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEnemy::TryAttacking, TimeToAttack, false);
		return;
	}
	if (CanDoDistanceAttack)
	{
		//ATTACK if close enough and looking in the correct direction (with a tolerance threshold)
		float DotAngle = (1 - FVector::DotProduct(GetActorRotation().Vector(), direction) ) * 180; //InDegree
		float AttackTolerance = DistDegreeAngle * 0.5;
		bool IsInAngle = DotAngle < AttackTolerance && DotAngle > - AttackTolerance;
		
		
		if ((SquareLength < DistRange * DistRange) && IsInAngle) // && IsInAngle
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, TEXT("Distance!"));

			//GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEnemy::LoadAttack, TimeToAttack, false);

			//FTimerDelegate TimerDel;
			//TimerDel.BindUFunction(this, FName("Projectile_BP"), direction);
			//GetWorldTimerManager().SetTimer(UnusedHandle, TimerDel, TimeToAttack, false);

			Projectile_BP(direction);

			DistAttack = true;
			return;
		}
	}
	

#pragma region Mov and Rotation

	FVector movement = direction * MoveSpeed * DeltaTime;

	AddActorWorldOffset(movement);

	//Custom Rotation towards the player
	float Tangent = atan2(direction.Y, direction.X) / PI * 180;//Tangent = Opposite / adjascent == Y / X => Rad to Degree
	
	//copysignf(x,y) x = magnitude && y = sign 

	FRotator Rot = FRotator(0, Tangent,0);	
	FQuat QuatRotation = FQuat(Rot);
	
	//SetActorRotation(Rot);
	//SetActorRotation(FMath::QInterpConstantTo(GetActorRotation().Quaternion(), QuatRotation, DeltaTime, RotationRate));
	SetActorRotation(FMath::QInterpTo(GetActorRotation().Quaternion(), QuatRotation, DeltaTime, RotationRate));
#pragma endregion
}

void AEnemy::TakeDamage(AWeaponProjectile* HitActor)
{
	Health->HitByProjectile(HitActor);
	if (Health->GetCurrentHealth() <= 0) 
	{
		Die();
	}
}

void AEnemy::Die()
{
	Destroy();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (MeleeAttack || DistAttack) { return; }
	MoveTowardPlayer(DeltaTime);
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemy::TryAttacking(AActor* Target)
{
	if (!Target->IsA(AProgGameplayProtoCharacter::StaticClass())) return;

	UHealth* targetHealth = Target->FindComponentByClass<UHealth>();

	if (!IsValid(targetHealth)) return;

	targetHealth->HitByAttack(Damages, this);

	//Attack_BP(Target);

	
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AEnemy::ReleaseMelee, ReleaseMeleeTime, false);
}

void AEnemy::ReleaseMelee()
{	
	MeleeAttack = false;
}
void AEnemy::ReleaseDistance()
{
	DistAttack = false;
	//can melee if player is sitting next to enemies
	if (MeleeAttack) 
	{
		TryAttacking(UGameUtils::GetMainCharacter());
	}
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("Reset!"));
}