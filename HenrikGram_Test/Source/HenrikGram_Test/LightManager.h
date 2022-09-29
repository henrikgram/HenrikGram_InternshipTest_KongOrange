// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SpotLightComponent.h"
#include "LightManager.generated.h"

DECLARE_DELEGATE(FLightsOn);
DECLARE_DELEGATE(FLightsOff);

UCLASS()

class HENRIKGRAM_TEST_API ALightManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	// Sets default values for this actor's properties
	ALightManager();
	bool lightsOn;
	FLightsOn LightsOn;
	FLightsOff LightsOff;
	FTimerHandle TimerHandle;

	void Test();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	//UPROPERTY(EditAnywhere)
	TArray<USpotLightComponent*> lights;

};
