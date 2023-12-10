// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Boss.generated.h"

class UEnemyDropperComponent;
class UCapsuleComponent;
class UHealth;

UCLASS()
class PROGGAMEPLAYPROTO_API ABoss : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoss();

	UFUNCTION(BlueprintImplementableEvent)
	void SpawnDamageZone(FVector Location);	

	UFUNCTION(BlueprintCallable)

	void Damage(AActor* Target);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UCapsuleComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHealth* Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UEnemyDropperComponent* Dropper;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
		float MoveSpeed;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
		float RotationRate;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Counters(float& DeltaTime);

	void MoveTowardPlayer(float& DeltaTime, FVector& direction);

	virtual void Die();

	UPROPERTY(VisibleAnywhere)
		class UWidgetComponent* HealthWidgetComp;

#pragma region Dash
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashTriggerDistance = 200;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashSpeed = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashDistance = 600;
	float DashCooldown = 6;
	float DashCooldownCounter = 6;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashDamage = 8;
	float DashDistanceTimer;
	float DashDistanceTarget;
	FVector LastPlayerDir;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsDashing = false;
#pragma endregion

#pragma region Spin
	float SpinTriggerDistance = 4;
	float SpinDamage = 0.5;
	float SpinDuration = 4;
	float SpinCooldown = 16;
	bool IsSpinning;
#pragma endregion

#pragma region Melee
	float MeleeDistance = 2;
	float MeleeDamage = 0.5;
	UPROPERTY(BlueprintReadOnly)
	bool IsMelee;
#pragma endregion


#pragma region Zone
	float ZoneTriggerDistance = 10;	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ZoneDistance = 200;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpawnZoneDuration = 1;
	float ZoneTimer;
	int ZoneSpawned;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NumberOfZone = 1;
	bool IsInvokingZone;
#pragma endregion

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
