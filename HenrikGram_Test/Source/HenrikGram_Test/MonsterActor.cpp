// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterActor.h"
#include "LightManager.h"
#include <Components/SphereComponent.h>


// Sets default values
AMonsterActor::AMonsterActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	currentState = &AMonsterActor::State_LightsOn;


}

void AMonsterActor::State_LightsOff(float DeltaTime)
{

	if (!Target->GetVelocity().IsZero())
	{
		movementSpeed = movementSpeedLightsOff;
	}
	else
	{
		movementSpeed = movementSpeedLightsOn;
	}

}

void AMonsterActor::State_LightsOn(float DeltaTime)
{
	//AActor::GetComponentByClass<USphereComponent>();
	//Only calculate the distance on the Y axis
	float distance = abs(GetActorLocation().Y - Target->GetActorLocation().Y);

	//If the player is within the slowdown threshold
	if (distance < SlowdownStartDistance)
	{
		//slows down the monster based on far the player has moved in the slowdown threshold
		float percent = (distance) / (SlowdownStartDistance);

		//Shifts the percent from fx 0-100% to 20-100%
		float PercentRelativeToMaximumSlowdown = percent * (1 - MaximumSlowdown) + MaximumSlowdown;

		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::SanitizeFloat(PercentRelativeToMaximumSlowdown));
		movementSpeed = movementSpeedLightsOn * PercentRelativeToMaximumSlowdown;
	}
	else
	{
		movementSpeed = movementSpeedLightsOn;
	}

}

void AMonsterActor::OnLightsOn()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("Bool: %s"), lightsOn ? TEXT("true") : TEXT("false")));
	currentState = &AMonsterActor::State_LightsOn;
	//lightsOn = true;
}

void AMonsterActor::OnLightsOff()
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("Bool: %s"), lightsOn ? TEXT("true") : TEXT("false")));
	currentState = &AMonsterActor::State_LightsOff;
	//lightsOn = false;
}

void AMonsterActor::Move(float DeltaTime)
{
	if (!moveDirection.IsZero())
	{
		//moves the actor to a new location based on the velocity and movementspeed
		//Multiplied by deltatime to make sure the speed is consistent. 
		SetActorLocation(GetActorLocation() + (moveDirection * DeltaTime) * movementSpeed);
	}
}

// Called when the game starts or when spawned
void AMonsterActor::BeginPlay()
{
	Super::BeginPlay();

	if (lightManager != nullptr)
	{
		//TODO: DESTRUCTOR and memory when resetting a scene
		lightManager->LightsTurnedOn.BindUObject(this, &AMonsterActor::OnLightsOn);
		lightManager->LightsTurnedOff.BindUObject(this, &AMonsterActor::OnLightsOff);
	}

}



// Called every frame
void AMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	(*this.*currentState)(DeltaTime);

	Move(DeltaTime);

}



