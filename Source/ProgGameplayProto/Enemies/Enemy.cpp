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


	float SquareLength = direction.SquaredLength();
	direction.Normalize();
	if (TryAttacking(direction, SquareLength)) 
	{
		return;
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

bool AEnemy::TryAttacking(const FVector& direction, float SquareLength)
{

	if (CanMeleeAttack && SquareLength < MeleeRange * MeleeRange)
	{
		//Rotate the enemy towards the player
		float Tangent = atan2(direction.Y, direction.X) / PI * 180;//Tangent
		FRotator Rot = FRotator(0, Tangent, 0);
		SetActorRotation(Rot);

		MeleeAttack = true;

		Attack_BP(UGameUtils::GetMainCharacter());

		return true;
	}

	//If it does Distance Attack
	if (CanDoDistanceAttack)
	{
		//ATTACK if close enough and looking in the correct direction (with a tolerance threshold aka angle)
		float DotAngle = (1 - FVector::DotProduct(GetActorRotation().Vector(), direction)) * 180; //InDegree
		float AttackTolerance = DistDegreeAngle * 0.5;
		bool IsInAngle = DotAngle < AttackTolerance && DotAngle > -AttackTolerance;


		if ((SquareLength < DistRange * DistRange) && IsInAngle)
		{
			Projectile_BP(direction);

			DistAttack = true;
			return true;
		}
	}
	return false;
}

void AEnemy::TakeDamage(AWeaponProjectile* HitActor)
{
	if (Health->HasShield)
	{		
		if (Health->ShieldHealth <= 0)
		{
			StopProtection();
		}
		return;
	}

	Health->HitByProjectile(HitActor);
	if (Health->GetCurrentHealth() <= 0) 
	{
		Die();
	}
}

void AEnemy::Die()
{	
	if (IsProtecting && ProtectedBean != nullptr && IsValid(ProtectedBean))
	{
		ProtectedBean->StopProtection();
	}
	Destroy();
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (MeleeAttack || DistAttack) { return; }


	HealCounter += DeltaTime;
	ProtectCounter += DeltaTime;	
	SupportFunction();
	if (!IsHealing && !IsProtecting)
	{ 
		MoveTowardPlayer(DeltaTime);
	}	
}

void AEnemy::SupportFunction()
{	
	if (IsHealing && HealCounter >= HealDuration)
	{
		IsHealing = false;
		HealCounter = 0;
		if(ProtectedBean!=nullptr && IsValid(ProtectedBean)) //ensure(ObjectPointer)
		HealVFX(ProtectedBean->GetActorLocation());
	}
	if (IsProtecting && ProtectCounter >= ProtectDuration)
	{
		IsProtecting = false;
		ProtectCounter = 0;
		if(IsValid(ProtectedBean))	ProtectedBean->StopProtecting();
	}
	if (CanHeal && !IsHealing)
	{
		if (HealCounter >= HealDelay + HealDuration)
		{
			TryToFindAllies();
			if (ProtectedBean == nullptr || !IsValid(ProtectedBean) )
			{
				HealCounter -= TryToFindAlliesTime;
			}
			else
			{
				IsHealing = true;
				HealCounter = 0;

				Healing(ProtectedBean);
				StartHealing();
				return;
			}
		}
	}
	if (CanProtect && !IsProtecting)
	{
		if (ProtectCounter >= ProtectDelay + ProtectDuration)
		{
			TryToFindAlliesToProtect();
			if (!IsValid(ProtectedBean))
			{
				HealCounter -= TryToFindAlliesTime;
			}
			else
			{
				IsProtecting = true;
				ProtectCounter = 0;
				//StartProtecting(ProtectedBean->GetActorLocation());				
				ProtectedBean->IsProtected(ProtectDuration, Health->ShieldHealth);
			}
		}
	}
}


void AEnemy::Healing(AEnemy* Target)
{
	if (Target != nullptr) 
	{
		Target->FindComponentByClass<UHealth>()->AddHealth(HealthRestored);
	}
}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemy::DoDamage(AActor* Target)
{
	if (!Target->IsA(AProgGameplayProtoCharacter::StaticClass())) return;

	UHealth* targetHealth = Target->FindComponentByClass<UHealth>();

	if (!IsValid(targetHealth)) return;

	targetHealth->HitByAttack(Damages, this);

	
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
		DoDamage(UGameUtils::GetMainCharacter());
	}
}