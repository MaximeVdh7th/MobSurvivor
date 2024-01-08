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
		USceneComponent* PivotPoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UHealth* Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UEnemyDropperComponent* Dropper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float RotationRate;

	UFUNCTION()
	virtual void Die();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Counters(float& DeltaTime);

	void MoveTowardPlayer(float& DeltaTime, FVector& direction);


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class UWidgetComponent* HealthWidgetComp;

#pragma region Dash
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashTriggerDistance = 200;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashSpeed = 10;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashDistance = 600;
	float DashDistanceTarget;
	float DashCooldown = 6;
	float DashCooldownCounter = 6;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float DashDamage = 8;
	float DashDistanceTimer;
	FVector LastPlayerDir;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsDashing = false;
#pragma endregion

#pragma region Spin
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinTriggerDistance = 300;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinDamage = 0.5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinPushOnPlayer = 80000;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinDuration = 4;
	float SpinTimer;
	float SpinCooldown = 8;
	float SpinCooldownCounter = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinSpeed = 600;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinRotationZ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinRotationSpeed = 5;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpinRadius = 100;
	float SpinTime;

	bool IsSpinning;

	UFUNCTION(BlueprintImplementableEvent)
	void SpinColliderToggle();
#pragma endregion

#pragma region Melee
	float MeleeDistance = 2;
	float MeleeDamage = 0.5;
	float MeleeCooldown = 2;
	float MeleeCooldownCounter;
	UPROPERTY(BlueprintReadOnly)
	bool IsMelee;
#pragma endregion

#pragma region Zone
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ZoneTriggerDistance = 600;	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float ZoneDistance = 200;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float SpawnZoneDuration = 0.3;
	float ZoneTimer;
	float ZoneCooldown = 6;
	float ZoneCooldownCounter = 6;
	int ZoneSpawned;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int NumberOfZone = 10;
	bool IsInvokingZone;
#pragma endregion


	bool IsDoingSomething;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
		void TakeDamages(AWeaponProjectile* HitActor);

	UFUNCTION(BlueprintImplementableEvent)
		void DieVFX();


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	bool IsDead;
};
