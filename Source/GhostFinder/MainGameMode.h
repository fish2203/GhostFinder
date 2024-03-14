// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GHOSTFINDER_API AMainGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

public:
	AMainGameMode();
	virtual void StartPlay() override;
	virtual void Tick(float DeltaSeconds) override;

public:
	TArray<class ARoomIndex*> roomArray;
	class ARoomIndex* ghostRoom;
	int32 lightCount = 0;
	TArray<class AInterractLight*> lightArray;

public:
	void TurnOnSwitch();
};
