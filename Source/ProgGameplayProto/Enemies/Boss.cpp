// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"

#include "BossDamageZone.h"
#include "BossHealthBar.h"
#include "EnemiesHealthBar.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "ProgGameplayProto/EnemySpawnerManager.h"
#include "ProgGameplayProto/GameUtils.h"
#include "ProgGameplayProto/Health.h"
#include "ProgGameplayProto/ProgGameplayProtoCharacter.h"
#include "ProgGameplayProto/Drops/EnemyDropperComponent.h"

// Sets default values
ABoss::ABoss()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Collision = CreateDefaultSubobject<UCapsuleComponent>("Collision");
	SetRootComponent(Collision);

	Health = CreateDefaultSubobject<UHealth>("Health");

	Dropper = CreateDefaultSubobject<UEnemyDropperComponent>("Dropper");
	Dropper->SetupAttachment(Collision);

	PivotPoint = CreateDefaultSubobject<USceneComponent>("PivotPoint");
	PivotPoint->SetupAttachment(Collision);

	//barre de vie
	HealthWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));
	HealthWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

}

void ABoss::Damage(AActor* Target)
{
	if (!Target->IsA(AProgGameplayProtoCharacter::StaticClass())) return;

	UHealth* targetHealth = Target->FindComponentByClass<UHealth>();

	if (!IsValid(targetHealth)) return;

	if (IsDashing)
	{
		targetHealth->HitByAttack(DashDamage, this);
		IsDashing = false;
		IsDoingSomething = false;


		//Decided it would be fun to throw the player around
		FVector Dir = GetActorLocation() - Target->GetActorLocation(); Dir.Normalize();
		FVector Movement = Target->GetComponentByClass<UCharacterMovementComponent>()->GetLastUpdateVelocity(); Movement.Normalize();
		FVector Rnd = FVector(FMath::RandRange(0.0f, 1.0f), FMath::RandRange(0.0f, 1.0f), 0); Rnd.Normalize();

		Dir = FVector::CrossProduct((Movement + Rnd) * 0.5f, Dir);
		Target->GetComponentByClass<UCharacterMovementComponent>()->AddImpulse(Dir * SpinPushOnPlayer);
	}
	if(IsSpinning)
	{
		targetHealth->HitByAttack(SpinDamage, this);

		//Decide it would be fun to throw the player around
		FVector Dir = GetActorLocation() - Target->GetActorLocation(); Dir.Normalize();
		Target->GetComponentByClass<UCharacterMovementComponent>()->AddImpulse(Dir * SpinPushOnPlayer);
	}
}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();

	//Enemy counter
	AEnemySpawnerManager::EnemyCount += 1;

	Health->OnBeforeHealthDie.AddDynamic(this, &ABoss::DieVFX);
	Health->OnHealthDie.AddDynamic(this, &ABoss::Die);


	UBossHealthBar* BossHealthBar = Cast<UBossHealthBar>(HealthWidgetComp->GetUserWidgetObject());
	BossHealthBar->SetOwnerBoss(this);	
}


void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const AProgGameplayProtoCharacter* player = UGameUtils::GetMainCharacter();

	if (!IsValid(player)) return;

	FVector direction = player->GetActorLocation() - GetActorLocation();
	direction.Z = 0;

	//Check which attack to do
	float dist = direction.Length();
	if(!IsSpinning && SpinCooldownCounter >= SpinCooldown && dist <= SpinTriggerDistance && !IsDoingSomething)
	{
		IsSpinning = true;
		IsDoingSomething = true;
		SpinColliderToggle();
		SpinTimer = 0;
		SpinTime = 0;
	}
	else if (!IsInvokingZone && ZoneCooldownCounter >= ZoneCooldown && dist <= ZoneTriggerDistance && !IsDoingSomething)
	{
		IsInvokingZone = true;
		IsDoingSomething = true;
		ZoneSpawned = 0;
		ZoneTimer = 0;
	}
	else if(!IsDashing && DashCooldownCounter >= DashCooldown && !IsDoingSomething)
	{
		IsDashing = true;
		IsDoingSomething = true;
		DashDistanceTimer = 0;
		DashDistanceTarget = dist + DashDistance;
		LastPlayerDir = direction;
		LastPlayerDir.Normalize();

		//Rotate toward player
		float Tangent = atan2(LastPlayerDir.Y, LastPlayerDir.X) / PI * 180;//Tangent = Opposite / adjascent == Y / X => Rad to Degree
		FRotator Rot = FRotator(0, Tangent, 0);
		FQuat QuatRotation = FQuat(Rot);
		SetActorRotation(QuatRotation);
	}
	
	Counters(DeltaTime);

	MoveTowardPlayer(DeltaTime, direction);

}

void ABoss::Counters(float& DeltaTime)
{
	SpinCooldownCounter += DeltaTime;
	ZoneCooldownCounter += DeltaTime;
	DashCooldownCounter += DeltaTime;

	if(IsSpinning)
	{
		SpinTimer += DeltaTime;
		if (SpinTimer >= SpinDuration)
		{
			SpinCooldownCounter = 0;
			IsSpinning = false;
			IsDoingSomething = false;
			SpinColliderToggle();
		}
	}
	else if (IsInvokingZone)
	{
		ZoneTimer += DeltaTime;
		if (ZoneTimer >= SpawnZoneDuration)
		{
			ZoneTimer = 0;
			ZoneSpawned++;
			const AProgGameplayProtoCharacter* player = UGameUtils::GetMainCharacter();

			if (!IsValid(player)) return;
			FVector RndDir = FVector(FMath::RandRange(-ZoneDistance, ZoneDistance), FMath::RandRange(-ZoneDistance, ZoneDistance), 0);

			SpawnDamageZone(player->GetActorLocation() + RndDir);
			if (ZoneSpawned >= NumberOfZone)
			{
				IsInvokingZone = false;
				IsDoingSomething = false;
				ZoneCooldownCounter = 0;
			}	
		}
	}
	else if(IsDashing)
	{
		DashDistanceTimer += DashSpeed * DeltaTime;
		if(DashDistanceTimer >= DashDistanceTarget)
		{
			DashCooldownCounter = 0;
			IsDashing = false;
			IsDoingSomething = false;
		}		
	}
}

void ABoss::MoveTowardPlayer(float& DeltaTime, FVector& direction)
{
	float SquareLength = direction.SquaredLength();
	direction.Normalize();

	FVector movement = direction * MoveSpeed * DeltaTime;
	if(IsSpinning)
	{
		SpinTime += DeltaTime * SpinRotationSpeed;
		float Percent = 1 - (SpinTimer / SpinDuration);
		PivotPoint->SetRelativeLocation(FVector(FMath::Cos(SpinTime), FMath::Sin(SpinTime), 0) * SpinRadius * Percent);
		PivotPoint->AddWorldRotation(FRotator::MakeFromEuler(FVector(0, 0, SpinRotationZ * DeltaTime)));
		movement = direction * SpinSpeed * DeltaTime;
	}
	else if(IsDashing)
	{
		movement = LastPlayerDir * DashSpeed * DeltaTime;
		AddActorWorldOffset(movement);
		return;
	}
	AddActorWorldOffset(movement);

	//Custom Rotation towards the player
	float Tangent = atan2(direction.Y, direction.X) / PI * 180;//Tangent = Opposite / adjascent == Y / X => Rad to Degree

	FRotator Rot = FRotator(0, Tangent, 0);
	FQuat QuatRotation = FQuat(Rot);

	SetActorRotation(FMath::QInterpTo(GetActorRotation().Quaternion(), QuatRotation, DeltaTime, RotationRate));
}

void ABoss::TakeDamages(AWeaponProjectile* HitActor)
{
	Health->HitByProjectile(HitActor);
	if (Health->GetCurrentHealth() <= 0)
	{
		Die();
	}
}

void ABoss::Die()
{
	if(IsDead)
	{
		return;
	}
	IsDead = true;
	AEnemySpawnerManager::EnemyCount -= 1;
	Destroy();
}

// Called to bind functionality to input
void ABoss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}