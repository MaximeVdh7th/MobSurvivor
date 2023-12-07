// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/WidgetComponent.h"
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

	UFUNCTION(BlueprintCallable)
	void ShooterOffset();
	
	UFUNCTION(BlueprintImplementableEvent)
	void RoleShooter();
	UFUNCTION(BlueprintImplementableEvent)
	void RoleProtection();
	UFUNCTION(BlueprintImplementableEvent)
	void RoleHealer();

#pragma region Distance attack

	bool IsRoleDistance;
	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	bool CanDoDistanceAttack;

	FVector PlayerOffset;
	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	FVector PlayerOffsetRange = FVector(40,150,0);

	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	float DistRange;

	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	float DistDegreeAngle;
	
	UPROPERTY(Category = Distance, BlueprintReadWrite)
	bool DistAttack; //Is doing a distance attack

	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	float ReloadTime;

	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	float FireRate;


	UPROPERTY(Category = Distance, EditAnywhere, BlueprintReadWrite)
	int MagSize;

#pragma endregion

#pragma region Melee attack

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	bool CanMeleeAttack;

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	float TimeToAttack;

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	float ReleaseMeleeTime;	

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	float MeleeRange;

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	float MeleeAngle;

	UPROPERTY(Category = Melee, EditAnywhere, BlueprintReadWrite)
	float Damages;

	UPROPERTY(Category = Melee, BlueprintReadWrite)
	bool MeleeAttack; //Is doing a melee attack

#pragma endregion

#pragma region  Healing
	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	bool CanHeal;
	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	bool IsHealing;
	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	float HealthRestored;
	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	float HealDuration;
	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	float HealDelay;

	float HealCounter = 0;

#pragma endregion

#pragma region  Protect
	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)
	bool CanProtect;
	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)
	bool IsProtecting;
	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)
	float ProtectDuration;
	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)
	float ProtectDelay;

	float ProtectCounter = 0;

	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)
	float MaxShieldHealth;
	
#pragma endregion

	UPROPERTY(Category = Healing, EditAnywhere, BlueprintReadWrite)
	AEnemy* ProtectedBean;
	UPROPERTY(Category = Protect, EditAnywhere, BlueprintReadWrite)	
	float TryToFindAlliesTime = 5;
	
private:
	FTimerHandle UnusedHandle;

	UFUNCTION(BlueprintCallable)
	void ReleaseMelee();
	UFUNCTION(BlueprintCallable)
	void ReleaseDistance();

	bool TryAttacking(const FVector& direction, float SquareLength);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	class UWidgetComponent* HealthWidgetComp;


	virtual void MoveTowardPlayer(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	void TakeDamage(AWeaponProjectile* HitActor);

	UFUNCTION()
	virtual void Die();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	virtual void DoDamage(AActor* Target);

	UFUNCTION(BlueprintImplementableEvent)
	void Attack_BP(AActor* Target);
	

	UFUNCTION(BlueprintImplementableEvent)
	void Projectile_BP(FVector Dir);


	UFUNCTION(BlueprintImplementableEvent)
	void TryToFindAllies();
	UFUNCTION(BlueprintImplementableEvent)
	void TryToFindAlliesToProtect();

	UFUNCTION()
	void SupportFunction();

	UFUNCTION()
	void Healing(AEnemy* Target);

	UFUNCTION(BlueprintImplementableEvent)
	void HealVFX(FVector ProtectionPos);
	UFUNCTION(BlueprintImplementableEvent)
	void StartHealing();

	UFUNCTION(BlueprintImplementableEvent)
	void StartProtecting(FVector ProtectionPos);

	UFUNCTION(BlueprintImplementableEvent)
	void IsProtected(float ShieldTime, float ProtectedShieldHealth);
	UFUNCTION(BlueprintImplementableEvent)
	void StopProtection();

	UFUNCTION(BlueprintImplementableEvent)
	void StopProtecting();
};