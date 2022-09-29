// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterActor.h"
#include "LightManager.h"

// Sets default values
AMonsterActor::AMonsterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


}

void AMonsterActor::State_LightsOff(float DeltaTime)
{
	
	if (!Target->GetVelocity().IsZero())
	{
		movementSpeed = 200;
	}
	else
	{
		movementSpeed = 100;
	}

}

void AMonsterActor::State_LightsOn(float DeltaTime)
{
	movementSpeed = 100;

}

void AMonsterActor::OnLightsOn()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("Bool: %s"), lightsOn ? TEXT("true") : TEXT("false")));

	lightsOn = true;
}

void AMonsterActor::OnLightsOff()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, FString::Printf(TEXT("Bool: %s"), lightsOn ? TEXT("true") : TEXT("false")));

	lightsOn = false;
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
		lightManager->LightsOn.BindUObject(this, &AMonsterActor::OnLightsOn);
		lightManager->LightsOff.BindUObject(this, &AMonsterActor::OnLightsOff);
	}

}

// Called every frame
void AMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (lightsOn)
	{
		State_LightsOn(DeltaTime);
	}
	else
	{
		State_LightsOff(DeltaTime);
	}
	

	Move(DeltaTime);

}



