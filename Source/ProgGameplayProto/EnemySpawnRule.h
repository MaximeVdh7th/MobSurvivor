#pragma once

#include "CoreMinimal.h"
#include "Curves/CurveVector.h"
#include "Enemies/Enemy.h"
#include "Enemies/Boss.h"
#include "Iris/Core/IrisProfiler.h"
#include "EnemySpawnRule.generated.h"

USTRUCT()
struct FPunctualEnemySpawnRule
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float Time = 0;

	UPROPERTY(EditAnywhere)
	int32 Number = 0;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemy> Enemy;
};

USTRUCT()
struct FSpawnBossRule
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float Time = 0;

	UPROPERTY(EditAnywhere)
		int32 Number = 0;

	UPROPERTY(EditAnywhere)
		TSubclassOf<ABoss> Boss;
};

USTRUCT()
struct FRangeEnemySpawnRule
{
	GENERATED_BODY()

public:
	// spawn value of enemy according to time
	UPROPERTY(EditAnywhere)
	FRuntimeFloatCurve SpawnCurve;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemy> Enemy;

	UPROPERTY()
	float NumberOfEnemyToSpawn = 0;

	UPROPERTY(EditAnywhere)
	FRuntimeVectorCurve EnemyRoleLuckCurve;
};

UCLASS()
class PROGGAMEPLAYPROTO_API AEnemySpawnRule : public AInfo
{
	GENERATED_BODY()

public:
	
	void ChangeSpawnRule(FPunctualEnemySpawnRule);
};



