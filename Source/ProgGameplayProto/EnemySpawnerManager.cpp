// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnerManager.h"

#include <iostream>

#include "EnemySpawnRule.h"
#include "GameLevelData.h"
#include "GameUtils.h"
#include "ProgGameplayProtoCharacter.h"
#include "ProgGameplayProtoGameMode.h"
#include "ProgGameplayProtoGameState.h"
#include "Kismet/GameplayStatics.h"

AEnemySpawnerManager::AEnemySpawnerManager()
{
	PrimaryActorTick.bCanEverTick = true;

	enemyCount = 0;
}

void AEnemySpawnerManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	EvaluatePunctualRules();

	EvaluateRangeRules(DeltaSeconds);
}

void AEnemySpawnerManager::BeginPlay()
{
	Super::BeginPlay();

	LoadSpawnRules();
}

void AEnemySpawnerManager::LoadSpawnRules()
{
	GameMode = Cast<AProgGameplayProtoGameMode>(UGameplayStatics::GetGameMode(GetWorld()));

	UGameLevelData* gameLevelData = GameMode->GameLevelData;

	if (!IsValid(gameLevelData)) return;

	PunctualBossSpawnRules = gameLevelData->PunctualBossSpawnRules;
	PunctualEnemySpawnRules = gameLevelData->PunctualSpawnRules;
	RangeEnemySpawnRules = gameLevelData->RangeSpawnRules;
}

void AEnemySpawnerManager::EvaluatePunctualRules()
{
	for (int32 i = PunctualEnemySpawnRules.Num() - 1; i >= 0; i--)
	{
		bool shouldRemove = EvaluatePunctualRule(PunctualEnemySpawnRules[i]);

		if (shouldRemove)
			PunctualEnemySpawnRules.RemoveAt(i);
	}

	//Boss
	for (int32 i = PunctualBossSpawnRules.Num() - 1; i >= 0; i--)
	{
		bool shouldRemove = EvaluatePunctualRule(PunctualBossSpawnRules[i]);

		if (shouldRemove)
			PunctualBossSpawnRules.RemoveAt(i);
	}
}

bool AEnemySpawnerManager::EvaluatePunctualRule(FPunctualEnemySpawnRule Rule)
{
	AProgGameplayProtoGameState* gameState = GameMode->GetGameState<AProgGameplayProtoGameState>();

	if (gameState->GetGameTime() >= Rule.Time)
	{
		for (int32 i = 0; i < Rule.Number; i++)
		{
			SpawnEnemy(Rule.Enemy);

		}
		return true;
	}

	return false;
}

bool AEnemySpawnerManager::EvaluatePunctualRule(FSpawnBossRule Rule)
{
	AProgGameplayProtoGameState* gameState = GameMode->GetGameState<AProgGameplayProtoGameState>();

	if (gameState->GetGameTime() >= Rule.Time)
	{
		for (int32 i = 0; i < Rule.Number; i++)
		{
			SpawnEnemy(Rule.Boss);
		}

		return true;
	}
	return false;
}

void AEnemySpawnerManager::SpawnEnemy(TSubclassOf<ABoss> EnemyClass) 
{
	enemyCount += 1;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%d"), enemyCount));
	const FVector spawnLocation = GetSpawnLocation();
	ABoss* localEnemy = GetWorld()->SpawnActor<ABoss>(EnemyClass, spawnLocation, FRotator::ZeroRotator);
}

void AEnemySpawnerManager::EvaluateRangeRules(float DeltaTime)
{
	for (int32 i = RangeEnemySpawnRules.Num() - 1; i >= 0; i--)
	{
		bool shouldRemove = EvaluateRangeRule(DeltaTime, RangeEnemySpawnRules[i]);

		if (shouldRemove)
			RangeEnemySpawnRules.RemoveAt(i);
	}
}

bool AEnemySpawnerManager::EvaluateRangeRule(float DeltaTime, FRangeEnemySpawnRule& Rule)
{
	AProgGameplayProtoGameState* gameState = GameMode->GetGameState<AProgGameplayProtoGameState>();

	float minTime = 0;
	float maxTime = 0;
	Rule.SpawnCurve.GetRichCurve()->GetTimeRange(minTime, maxTime);

	if (gameState->GetGameTime() > maxTime) return true;

	if (gameState->GetGameTime() >= minTime)
	{
		float currentAmount = Rule.SpawnCurve.GetRichCurve()->Eval(gameState->GetGameTime());

		Rule.NumberOfEnemyToSpawn += currentAmount * DeltaTime;

		while (Rule.NumberOfEnemyToSpawn > 1)
		{
			SpawnEnemy(Rule.Enemy);

			Rule.NumberOfEnemyToSpawn -= 1;
		}
	}

	return false;
}

void AEnemySpawnerManager::SpawnEnemy(TSubclassOf<AEnemy> EnemyClass)
{
	enemyCount += 1;
	//std::cout << char(enemyCount);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("%d"), enemyCount));
	const FVector spawnLocation = GetSpawnLocation();
	//GetWorld()->SpawnActor<AEnemy>(EnemyClass, spawnLocation, FRotator::ZeroRotator);
	AEnemy* localEnemy = GetWorld()->SpawnActor<AEnemy>(EnemyClass, spawnLocation, FRotator::ZeroRotator);

	//IF is boss
	// 
	if (!IsValid(localEnemy) || localEnemy == nullptr)
	{
		return;
	}


	//localEnemy->role
	float RndRole = FMath::RandRange(0.0f,1.0f);
	AProgGameplayProtoGameState* gameState = GameMode->GetGameState<AProgGameplayProtoGameState>();
	FVector roleLuck = RangeEnemySpawnRules[0].EnemyRoleLuckCurve.GetValue(gameState->GetGameTime());


	if(RndRole < roleLuck.X)
	{
		localEnemy->RoleShooter();		
	}
	else if (RndRole < roleLuck.X + roleLuck.Y)
	{
		localEnemy->RoleHealer();
	}
	else if (RndRole < roleLuck.X + roleLuck.Y + roleLuck.Z)
	{
		localEnemy->RoleProtection();
	}

}

FVector AEnemySpawnerManager::GetSpawnLocation()
{
	AActor* mainCharacter = UGameUtils::GetMainCharacter();

	if (!IsValid(mainCharacter)) return FVector::ZeroVector;

	FVector direction = FVector::ForwardVector;
	direction = direction.RotateAngleAxis(FMath::FRandRange(0.0f, 360.0f), FVector::UpVector);

	FVector offset = direction * 2000;
	FVector output = mainCharacter->GetActorLocation() + offset;

	return output;
}