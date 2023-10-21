// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyProjectile.generated.h"

class UProjectileEffect;
class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class PROGGAMEPLAYPROTO_API AEnemyProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyProjectile();

	UFUNCTION(BlueprintCallable)
	virtual void Initialize(FVector NewDir, float NewSize, float NewRange, float NewSpeed, float NewBaseDamages);


	virtual void CheckForCollisionsAfterMovement(FVector OriginLocation);

	virtual void HitSomething(AActor* OtherActor);

	virtual void  DestroyProjectile();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesArray;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		USphereComponent* Collision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		UStaticMeshComponent* Mesh;

	UPROPERTY(BlueprintReadWrite)
	FVector Direction;

	UPROPERTY(BlueprintReadWrite)
	float Size;

	UPROPERTY(BlueprintReadWrite)
	float Range; //In M

	UPROPERTY(BlueprintReadWrite)
	float Speed;

	UPROPERTY(BlueprintReadWrite)
	float Damage;

private : 
	float ElapsedRange;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
