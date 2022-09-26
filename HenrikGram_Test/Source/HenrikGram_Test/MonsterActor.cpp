// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterActor.h"

// Sets default values
AMonsterActor::AMonsterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AMonsterActor::State_LightsOff(float DeltaTime)
{
	movementSpeed = 100;


}

void AMonsterActor::State_LightsOn(float DeltaTime)
{
	if (!Target->GetVelocity().IsZero())
	{
		movementSpeed = 500;
	}
	else
	{
		movementSpeed = 100;
	}

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
	
}

// Called every frame
void AMonsterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	State_LightsOn(DeltaTime);

	Move(DeltaTime);

}



