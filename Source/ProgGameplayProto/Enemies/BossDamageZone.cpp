// Fill out your copyright notice in the Description page of Project Settings.


#include "BossDamageZone.h"

#include "Components/SphereComponent.h"

// Sets default values
ABossDamageZone::ABossDamageZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Root = CreateDefaultSubobject<USceneComponent>("Root");
	//SetRootComponent(Root);
	Collision = CreateDefaultSubobject<USphereComponent>("Collision");
	//Collision->SetRelativeLocation(FVector(0, 0, 0));
	SetRootComponent(Collision);
	Collision->OnComponentBeginOverlap.AddDynamic(this, &ABossDamageZone::TriggerEnter);
	Collision->OnComponentEndOverlap.AddDynamic(this, &ABossDamageZone::TriggerExit);
}

// Called when the game starts or when spawned
void ABossDamageZone::BeginPlay()
{
	Super::BeginPlay();
}

void ABossDamageZone::TriggerEnter(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweetResult)
{
	AProgGameplayProtoCharacter* Player = Cast<AProgGameplayProtoCharacter>(otherActor);
	
	if (Player) 
	{
		IsInSector = true;
		HealthPlayer = Player->GetComponentByClass<UHealth>();
		ApplyDamage();
	}
}

void ABossDamageZone::TriggerExit(UPrimitiveComponent* OverlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 OtherBodyIndex)
{
	AProgGameplayProtoCharacter* Player = Cast<AProgGameplayProtoCharacter>(otherActor);
	if (Player)
	{
		IsInSector = false;
	}
}

void ABossDamageZone::ApplyDamage()
{
	HealthPlayer->AddHealth(-ZoneDamage * CustomDeltaTime);
	//FTimerDelegate TimerDel;
	//FTimerHandle  FTimerDelegate
	if(IsInSector)
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABossDamageZone::ApplyDamage, CustomDeltaTime, false);
}

// Called every frame
void ABossDamageZone::Tick(float DeltaTime)
{
	CustomDeltaTime = DeltaTime;
}