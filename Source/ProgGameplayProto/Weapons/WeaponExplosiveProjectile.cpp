// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgGameplayProto/Weapons/WeaponExplosiveProjectile.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "ProgGameplayProto/Health.h"
#include "ProgGameplayProto/ProjectileInteraction.h"
#include "ProgGameplayProto/Enemies/Enemy.h"

AWeaponExplosiveProjectile::AWeaponExplosiveProjectile()
{



}



void AWeaponExplosiveProjectile::GetZoneDamages()
{
	
	RadialForce->FireImpulse();
	TArray<AActor*> EnemyList;
	TSubclassOf<AEnemy> enemyClass;
	//RadialForce->AddObjectTypeToAffect(AEnemy);
	//TriggerZone->GetOverlappingActors(EnemyList, enemyClass);
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectType;
	ObjectType.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	TArray<AActor*> EmptyArray;
	EmptyArray.Add(GetOwner());
	UKismetSystemLibrary::SphereOverlapActors(
		GetWorld(),
		GetActorLocation(),
		ExplosionRadius, 
		ObjectType, 
		enemyClass, 
		EmptyArray,
		EnemyList);
	//GEngine->AddOnScreenDebugMessage();
	//TArray<AEnemy*> CaughtEnemies = Cast <TArray<AEnemy*>>(EnemyList);
	
	AEnemy* CaughtEnemy;
	
	for (AActor* singleEnemy : EnemyList)
	{
		
		CaughtEnemy =  Cast<AEnemy>(singleEnemy);
		if (IsValid(CaughtEnemy)) {
			CaughtEnemy->Health->AddHealth((-1) * 10);
			//CaughtEnemy->Health->OnHealthChanged;
		}

	}

	
	
}

void AWeaponExplosiveProjectile::HitSomething(AActor* OtherActor, FVector HitLocation, FVector OriginLocation)
{
	LastActorHit = OtherActor;

	UProjectileInteraction* projectileInteraction = OtherActor->FindComponentByClass<UProjectileInteraction>();

	if (IsValid(projectileInteraction))
	{
		projectileInteraction->HitByProjectile(this);
	}

	OnProjectileHit.Broadcast(this, HitLocation, OriginLocation);
	GetZoneDamages();
	//RadialForce->FireImpulse();
	NumberOfHitsBeforeDestroy -= 1;

	if (NumberOfHitsBeforeDestroy < 1)
		DestroyProjectile();
		
}

float AWeaponExplosiveProjectile::GetExplosionDamages()
{
	const float output = ExplosionDamages * ExplosionDamagesMultiplier;

	return output;
}