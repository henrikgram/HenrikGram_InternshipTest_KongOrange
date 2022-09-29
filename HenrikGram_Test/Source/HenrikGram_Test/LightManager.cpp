// Fill out your copyright notice in the Description page of Project Settings.


#include "LightManager.h"
#include "EngineUtils.h"


// Sets default values
ALightManager::ALightManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	lightsOn = true;

}

void ALightManager::Test()
{
	//TODO: change names
	if (lightsOn)
	{
		LightsOff.ExecuteIfBound();
	}
	else
	{
		LightsOn.ExecuteIfBound();
	}



	for (auto& i : lights)
	{
		i->SetVisibility(lightsOn);
	}
	lightsOn = !lightsOn;
}

// Called when the game starts or when spawned
void ALightManager::BeginPlay()
{
	Super::BeginPlay();
	UWorld* world = GetWorld();
	

	for (TActorIterator<AActor> it(world); it; ++it)
	{
		USpotLightComponent* light = it->FindComponentByClass<USpotLightComponent>();

		if (light != nullptr)
		{
			lights.Add(light);
		}
	
		
	}

	GetWorldTimerManager().SetTimer(TimerHandle, this, &ALightManager::Test, 5.0f, true, 1.0f);

	
}

// Called every frame
void ALightManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

