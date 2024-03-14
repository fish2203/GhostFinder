// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InterractLight.generated.h"

UCLASS()
class GHOSTFINDER_API AInterractLight : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInterractLight();

public:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	class USpotLightComponent* compLight;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* compSwitch;

	UPROPERTY(EditAnywhere)
	class AMainGameMode* gameMode;

};
