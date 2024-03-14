// Fill out your copyright notice in the Description page of Project Settings.


#include "InterractLight.h"
#include "Components/SpotLightComponent.h"
#include "MainGameMode.h"

// Sets default values
AInterractLight::AInterractLight()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	compLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("Light"));
	compLight->SetupAttachment(RootComponent);

	compSwitch = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Switch"));
	compSwitch->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AInterractLight::BeginPlay()
{
	Super::BeginPlay();
	compLight->SetActive(false);

	gameMode = Cast<AMainGameMode>(GetWorld()->GetAuthGameMode());
}

// Called every frame
void AInterractLight::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 스위치가 눌리면 complight를 켜라
	//gameMode->TurnOnSwitch();
}

