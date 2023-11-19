// Fill out your copyright notice in the Description page of Project Settings.


#include "ProgGameplayProtoGameState.h"

#include "MySaveGame.h"
#include "Kismet/GameplayStatics.h"


AProgGameplayProtoGameState::AProgGameplayProtoGameState()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AProgGameplayProtoGameState::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bHasGameStarted)
		GameTime += DeltaSeconds;

	GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Green, "Game Time: " + FString::SanitizeFloat(GameTime));
}

void AProgGameplayProtoGameState::StartGame()
{
	bHasGameStarted = true;
}

void AProgGameplayProtoGameState::EndGame(bool GameWin)
{
	//Win/Lose screen
	ShowEndScreen(GameWin, LocalGameGold);

	if (UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass())))
	{
		// Set data on the savegame object.
		SaveGameInstance->Gold = SaveGameInstance->Gold + LocalGameGold;
	
		// Save the data immediately.
		if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, "Default", 0))
		{
			// Save succeeded.
		}
	}
}

void AProgGameplayProtoGameState::AddGold(int GoldAmount)
{
	LocalGameGold += GoldAmount;

	FString ok = FString::SanitizeFloat(LocalGameGold);
	GEngine->AddOnScreenDebugMessage(0, 5, FColor::Red, ok);
}
