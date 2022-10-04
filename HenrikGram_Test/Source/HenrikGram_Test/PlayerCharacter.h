// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"


UCLASS()
/// <summary>
/// The class for the player Character actor
/// </summary>
class HENRIKGRAM_TEST_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()


public:

	// Sets default values for this character's properties
	APlayerCharacter();

	///overrides\\\
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Method that will be called when the collider raises the OnComponentBegin Overlap event
	UFUNCTION()
		void BeginOverlap(UPrimitiveComponent* OverlappedComponent,
			AActor* OtherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& SweepResult);

protected:

	//Overrides
	virtual void BeginPlay() override;

	//Custom methods

	/// <summary>
	/// Moves the player on the Y-Axis
	/// </summary>
	/// <param name="axisValue">The value from the input system that determins which direction the player will move in</param>
	void MoveY(float axisValue);

	/// <summary>
	/// Will raise the "OnPlayerDied" event in the gamemode
	/// </summary>
	void Die();




};
