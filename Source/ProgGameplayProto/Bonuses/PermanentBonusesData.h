// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PermanentBonusesData.generated.h"

/**
 * 
 */
UCLASS()
class PROGGAMEPLAYPROTO_API UPermanentBonusesData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MultiLine = true))
		TArray<FText> Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int> UpgradeCosts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> HPMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> HPRegen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> CollectionDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> GoldLuck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> XPLuck;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> InvicibilityTime;

	///		DASH		///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> DashDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> DashCooldown;

	///		Shield		///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> ShieldAbsortion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> ShieldCooldown;

	///		PipeBomb	///
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> BombRadiusDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> BombDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<float> BombCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<bool> BombNotSelfDamage;	
};