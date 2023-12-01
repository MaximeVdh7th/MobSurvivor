// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "Drop.h"
#include "HealthDrop.generated.h"

/**
 * 
 */
UCLASS()
class PROGGAMEPLAYPROTO_API AHealthDrop : public ADrop
{
	GENERATED_BODY()

	protected:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float HealthAmount;

	protected:
		virtual void Collect() override;	
};
