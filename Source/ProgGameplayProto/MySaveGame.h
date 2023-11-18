// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
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
};
