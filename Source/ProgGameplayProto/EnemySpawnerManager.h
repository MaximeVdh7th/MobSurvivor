// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EnemySpawnerManager.generated.h"

class ABoss;
class AEnemy;
class AProgGameplayProtoGameMode;
struct FPunctualEnemySpawnRule;
struct FRangeEnemySpawnRule;
struct FSpawnBossRule;
/**
 *
 */
UCLASS()
class PROGGAMEPLAYPROTO_API AEnemySpawnerManager : public AInfo
{
	GENERATED_BODY()
		
public:
	AEnemySpawnerManager();

protected:
	UPROPERTY()
	AProgGameplayProtoGameMode* GameMode;

	UPROPERTY()
	TArray<FPunctualEnemySpawnRule> PunctualEnemySpawnRules;

	UPROPERTY()
	TArray<FSpawnBossRule> PunctualBossSpawnRules;

	UPROPERTY()
	TArray<FRangeEnemySpawnRule> RangeEnemySpawnRules;


public:
	virtual void Tick(float DeltaSeconds) override;

protected:
	virtual void BeginPlay() override;

	virtual void LoadSpawnRules();

	virtual void EvaluatePunctualRules();

	// returns true if should remove rule after evaluation
	virtual bool EvaluatePunctualRule(FPunctualEnemySpawnRule Rule);
	//Boss
	virtual bool EvaluatePunctualRule(FSpawnBossRule Rule);

	virtual void EvaluateRangeRules(float DeltaTime);

	// returns true if should remove rule after evaluation
	virtual bool EvaluateRangeRule(float DeltaTime, FRangeEnemySpawnRule& Rule);

	virtual void SpawnEnemy(TSubclassOf<AEnemy> EnemyClass);

	//Boss
	virtual void SpawnEnemy(TSubclassOf<ABoss> BossClass);

	virtual FVector GetSpawnLocation();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 enemyCount;
};