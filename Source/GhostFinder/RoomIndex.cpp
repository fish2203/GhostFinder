// Fill out your copyright notice in the Description page of Project Settings.


#include "RoomIndex.h"
#include "Components/BoxComponent.h"

// Sets default values
ARoomIndex::ARoomIndex()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	compBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Room"));
	compBox->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ARoomIndex::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARoomIndex::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

