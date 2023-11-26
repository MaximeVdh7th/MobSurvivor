// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"

#include "Bonuses/FUpgradeValueStruct.h"
#include "Bonuses/PermanentBonusesData.h"

#include "MySaveGame.generated.h"


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

	UFUNCTION(BlueprintCallable)
	//void CombineStruct(TArray<FUpgradeValueStruct>& Bonuses, TArray<int>& LevelByUpgrade);
	UPARAM(DisplayName="CombineStruct") void CombineStruct(FUpgradeValueStruct Bonuses, TArray<int> LevelByUpgrade);

	UFUNCTION(BlueprintCallable)
	FUpgradeValueStruct CombineBonuses(TArray<FUpgradeValueStruct> Bonuses);

	UFUNCTION(BlueprintCallable)
	FUpgradeValueStruct ConvertUpdateToStruct(UPermanentBonusesData* Data, int32 Index);

private:
	float GetGoodestIndex(TArray<float>* List, int32 Index);
};