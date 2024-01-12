// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProgGameplayProto/Weapons/WeaponProjectile.h"
#include "WeaponData.h"
#include "WeaponExplosiveProjectile.generated.h"




UCLASS()
class PROGGAMEPLAYPROTO_API AWeaponExplosiveProjectile : public AWeaponProjectile
{
	GENERATED_BODY()

public:
	AWeaponExplosiveProjectile();


	//UWeaponData MyWeaponData;
	FORCEINLINE void GetZoneDamages();

	void HitSomething(AActor* OtherActor, FVector HitLocation, FVector OriginLocation) override;
};
