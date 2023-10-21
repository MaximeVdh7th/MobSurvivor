// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyProjectile.h"

#include "ProgGameplayProto/Health.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/StaticMeshComponent.h"
#include "ProgGameplayProto/ProgGameplayProtoCharacter.h"

// Sets default values
AEnemyProjectile::AEnemyProjectile()
{

	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
    Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AEnemyProjectile::Initialize(FVector NewDir, float NewSize, float NewRange, float NewSpeed, float NewBaseDamages)
{
	Direction = NewDir;
	Size = NewSize;
	Range = NewRange * NewRange * 100; // In M
	Speed = NewSpeed;
	Damage = NewBaseDamages;
}

void AEnemyProjectile::BeginPlay()
{
	Super::BeginPlay();
	ElapsedRange = 0;
}

void AEnemyProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	const FVector Origin = GetActorLocation();

	const FVector movement = Direction * Speed * DeltaTime;
	ElapsedRange += movement.SquaredLength();

	if (ElapsedRange >= Range)
	{
		DestroyProjectile();

		return;
	}

	AddActorWorldOffset(movement, false);

	CheckForCollisionsAfterMovement(Origin);
}

void AEnemyProjectile::CheckForCollisionsAfterMovement(FVector OriginLocation)
{
	//TArray<FHitResult> outHits;
	//const FCollisionShape shape = FCollisionShape::MakeSphere(Size);
	//FCollisionQueryParams params;
	//params.AddIgnoredActor(this);
	//GetWorld()->SweepMultiByChannel(outHits, OriginLocation, GetActorLocation(), FQuat::Identity, ECollisionChannel::ECC_Visibility, shape, params);
	//GetWorld()->SweepMultiByChannel(outHits, OriginLocation, GetActorLocation(), FQuat::Identity, ECollisionChannel::ECC_Visibility, shape, params);
	FHitResult OutHit;
	TArray<AActor*> FDefaultAllocator;
	bool hit = UKismetSystemLibrary::SphereTraceSingleForObjects(GetWorld(), OriginLocation, GetActorLocation(), Size, ObjectTypesArray, false, FDefaultAllocator, EDrawDebugTrace::None, OutHit, true);

	if (hit) 
	{
		HitSomething(OutHit.GetActor());
		DestroyProjectile();
	}
}

void AEnemyProjectile::HitSomething(AActor* OtherActor)
{
	UProjectileInteraction* projectileInteraction = OtherActor->FindComponentByClass<UProjectileInteraction>();
	
	if (projectileInteraction != nullptr) 
	{
		UHealth* targetHealth = OtherActor->FindComponentByClass<UHealth>();
		if (!IsValid(targetHealth) || targetHealth == nullptr)
		{
			DestroyProjectile();
			return;
		} 
		targetHealth->HitByAttack(Damage, this);
	}

	//if (OtherActor->IsA(AProgGameplayProtoCharacter::StaticClass())) 
	//{
	//	UHealth* targetHealth = OtherActor->FindComponentByClass<UHealth>();
	//	if (IsValid(targetHealth))
	//	{
	//		targetHealth->HitByAttack(Damage, this);
	//	}
	//}
	DestroyProjectile();
}

void AEnemyProjectile::DestroyProjectile()
{
	Destroy();
}

