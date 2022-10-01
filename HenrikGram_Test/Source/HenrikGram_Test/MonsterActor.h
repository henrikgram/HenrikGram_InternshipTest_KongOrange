// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCharacter.h"
#include "MonsterActor.generated.h"


UCLASS()
class HENRIKGRAM_TEST_API AMonsterActor : public AActor
{
	GENERATED_BODY()

		//Methods

public:
	// Sets default values for this actor's properties
	AMonsterActor();

	//TODO: read about uproperty
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
		class ALightManager* lightManager;

	bool lightsOn;

	

	//Overrides
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts or when spawned

	void State_LightsOff(float DeltaTime);
	void State_LightsOn(float DeltaTime);

	void OnLightsOn();
	void OnLightsOff();

	void (AMonsterActor::* currentState)(float) = NULL;


	
	void Move(float DeltaTime);
	virtual void BeginPlay() override;

	//Fields
	//TODO: tooltip
public:
	UPROPERTY(EditAnywhere)
		float movementSpeedLightsOn;
	UPROPERTY(EditAnywhere)
		float movementSpeedLightsOff;

	UPROPERTY(EditAnywhere)
		float SlowdownStartDistance;
	UPROPERTY(EditAnywhere, meta = (ClampMin = 0, ClampMax = 1))
		float MaximumSlowdown;

	UPROPERTY(EditAnywhere)
		UCurveFloat* SlowdownCurve;


		float movementSpeed;
	UPROPERTY(EditAnywhere)
		FVector moveDirection;
	UPROPERTY(EditAnywhere)
		APlayerCharacter* Target;

};
