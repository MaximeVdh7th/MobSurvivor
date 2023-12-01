// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss.h"

#include "EnemiesHealthBar.h"
#include "Components/CapsuleComponent.h"
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

	//barre de vie
	HealthWidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("HealthBar"));
	HealthWidgetComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ABoss::BeginPlay()
{
	Super::BeginPlay();

	Health->OnHealthDie.AddDynamic(this, &ABoss::Die);

	UEnemiesHealthBar* EnemiesHealthBar = Cast<UEnemiesHealthBar>(HealthWidgetComp->GetUserWidgetObject());
	//EnemiesHealthBar->SetOwnerEnemy(this);	
}


// Called every frame
void ABoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const AProgGameplayProtoCharacter* player = UGameUtils::GetMainCharacter();

	if (!IsValid(player)) return;

	FVector direction = player->GetActorLocation() - GetActorLocation();
	direction.Z = 0;

	float dist = direction.Length();
	if(dist > DashTriggerDistance)
	{
		IsDashing = true;
		DashDistanceTimer = 0;
		DashDistanceTarget = dist + DashDistance;
		LastPlayerDir = direction;
		LastPlayerDir.Normalize();
	}

	Counters(DeltaTime);

	MoveTowardPlayer(DeltaTime, direction);

}

void ABoss::Counters(float& DeltaTime)
{
	if(IsDashing)
	{
		DashDistanceTimer += DashSpeed * DeltaTime;
		if(DashDistanceTimer >= DashDistanceTarget)
		{
			IsDashing = false;
			return;
		}		
	}
}

void ABoss::MoveTowardPlayer(float& DeltaTime, FVector& direction)
{
	float SquareLength = direction.SquaredLength();
	direction.Normalize();

	if(IsDashing)
	{
		const FVector movement = LastPlayerDir * DashSpeed * DeltaTime;
		AddActorWorldOffset(movement);
		return;
	}

	FVector movement = direction * MoveSpeed * DeltaTime;
	AddActorWorldOffset(movement);


	//Custom Rotation towards the player
	float Tangent = atan2(direction.Y, direction.X) / PI * 180;//Tangent = Opposite / adjascent == Y / X => Rad to Degree

	FRotator Rot = FRotator(0, Tangent, 0);
	FQuat QuatRotation = FQuat(Rot);

	SetActorRotation(FMath::QInterpTo(GetActorRotation().Quaternion(), QuatRotation, DeltaTime, RotationRate));
}

void ABoss::Die()
{
	Destroy();
}

// Called to bind functionality to input
void ABoss::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}