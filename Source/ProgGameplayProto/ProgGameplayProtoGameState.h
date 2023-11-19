// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "ProgGameplayProtoGameState.generated.h"

/**
 *
 */
UCLASS()
class PROGGAMEPLAYPROTO_API AProgGameplayProtoGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	AProgGameplayProtoGameState();

protected:
	float GameTime = 0;
	int LocalGameGold = 0;
	bool bHasGameStarted = false;

public:
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE float GetGameTime() { return GameTime; }
	FORCEINLINE void AddGold(int GoldAmount);

	UFUNCTION(BlueprintCallable)
	virtual void StartGame();
	UFUNCTION(BlueprintCallable)
	void EndGame(bool GameWin);

	UFUNCTION(BlueprintImplementableEvent)
	void ShowEndScreen(bool DidYouWin, int GoldEarned);
};