// Fill out your copyright notice in the Description page of Project Settings.


#include "MainGameMode.h"
#include "RoomIndex.h"
#include "EngineUtils.h"
#include "InterractLight.h"
#include <Components/SpotLightComponent.h>

AMainGameMode::AMainGameMode()
{

}

void AMainGameMode::StartPlay()
{
	Super::StartPlay();

	

	for (TActorIterator<ARoomIndex> It(GetWorld()); It; ++It)
	{
		roomArray.Add(*It);
	}
	

	int32 randIndex = FMath::RandRange(0, roomArray.Num() - 1);

	for (int i = 0; i < roomArray.Num(); i++)
	{
		if (roomArray[i]->roomNumber == randIndex)
		{
			ghostRoom = roomArray[i];
			break;
		}
	}

	for (TActorIterator<AInterractLight> it(GetWorld()); it; ++it)
	{
		lightArray.Add(*it);
	}

}

void AMainGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (lightCount == lightArray.Num())
	{
		for (int32 i = 0; i < lightArray.Num(); i++)
		{
			lightArray[i]->compLight->SetActive(false);
		}
	}
}

void AMainGameMode::TurnOnSwitch()
{
	lightCount += 1;
}
