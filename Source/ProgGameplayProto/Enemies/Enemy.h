// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

class UEnemyDropperComponent;
class UCapsuleComponent;
class UHealth;

UCLASS()
class PROGGAMEPLAYPROTO_API AEnemy : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy();

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




	//Distance attack

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	bool CanDoDistanceAttack;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float DistRange;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float DistDegreeAngle;
	
	UPROPERTY(Category = EnemyParameters, BlueprintReadOnly)
	bool DistAttack; //Is doing a distance attack






	//Melee attack

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float TimeToAttack;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float ReleaseMeleeTime;	

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float MeleeRange;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float MeleeAngle;

	UPROPERTY(Category = EnemyParameters, EditAnywhere, BlueprintReadWrite)
	float Damages;

	UPROPERTY(Category = EnemyParameters, BlueprintReadWrite)
	bool MeleeAttack; //Is doing a melee attack



	
private:
	FTimerHandle UnusedHandle;

	UFUNCTION(BlueprintCallable)
	void ReleaseMelee();
	UFUNCTION(BlueprintCallable)
	void ReleaseDistance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void MoveTowardPlayer(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	virtual void TakeDamage(AWeaponProjectile* HitActor);
	virtual void Die();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	virtual void TryAttacking(AActor* Target);

	UFUNCTION(BlueprintImplementableEvent)
	void Attack_BP(AActor* Target);
	

	UFUNCTION(BlueprintImplementableEvent)
	void Projectile_BP(FVector Dir);
};