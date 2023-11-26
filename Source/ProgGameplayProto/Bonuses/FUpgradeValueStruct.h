// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FUpgradeValueStruct.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct FUpgradeValueStruct
{
	GENERATED_BODY()

		FUpgradeValueStruct();
		~FUpgradeValueStruct();


#pragma  region Upgrade
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int NUpgrade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int> LevelByUpgrade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int UpgradeCosts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HPRegen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CollectionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GoldLuck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float XPLuck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float InvicibilityTime;

	///		DASH		///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DashCooldown;

	///		Shield		///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ShieldAbsortion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ShieldCooldown;

	///		PipeBomb	///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BombRadiusDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BombDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BombCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool BombNotSelfDamage;

#pragma  endregion

};