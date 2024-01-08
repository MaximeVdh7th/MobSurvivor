// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "Bonuses/FUpgradeValueStruct.h"
#include "Bonuses/PermanentBonusesData.h"

#include "MySaveGame.generated.h"


UENUM(BlueprintType)
enum class WeaponUsed : uint8
{
	peashooter = 0 UMETA(DisplayName = "Peashooter"),
	GrenadeLauncher = 1 UMETA(DisplayName = "Grenade-Launcher")
};
/**
 * 
 */
UCLASS()
class PROGGAMEPLAYPROTO_API UMySaveGame : public USaveGame
{
	GENERATED_BODY()

	public:	
	FString SaveSlotName = TEXT("Default");
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Gold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUpgradeValueStruct UpgradeStrut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NumberOfEnemiesKilled;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsGrenadeLauncherUnlocked;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	WeaponUsed LocalWeaponused;

	UFUNCTION(BlueprintCallable)
	//void CombineStruct(TArray<FUpgradeValueStruct>& Bonuses, TArray<int>& LevelByUpgrade);
	UPARAM(DisplayName="CombineStruct") void CombineStruct(FUpgradeValueStruct Bonuses, TArray<int> LevelByUpgrade);

	UFUNCTION(BlueprintCallable)
	static FUpgradeValueStruct CombineBonuses(TArray<FUpgradeValueStruct> Bonuses);

	UFUNCTION(BlueprintCallable)
	FUpgradeValueStruct ConvertUpdateToStruct(UPermanentBonusesData* Data, int32 Index);

private:
	static float GetBestIndex(const TArray<float>& List, int32 Index);
};