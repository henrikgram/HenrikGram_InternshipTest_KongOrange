// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MonsterActor.generated.h"

UCLASS()
class HENRIKGRAM_TEST_API AMonsterActor : public AActor
{
	GENERATED_BODY()

		//Methods

public:
	// Sets default values for this actor's properties
	AMonsterActor();

	//Overrides
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Fields
public:
	UPROPERTY(EditAnywhere)
		float movementSpeed;
	UPROPERTY(EditAnywhere)
		FVector moveDirection;




};
