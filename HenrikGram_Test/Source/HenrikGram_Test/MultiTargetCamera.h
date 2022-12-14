// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Camera/CameraComponent.h"
#include "MultiTargetCamera.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HENRIKGRAM_TEST_API UMultiTargetCamera : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMultiTargetCamera();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	FVector GetCenterPointBetweenTargets();
	void Zoom();

	UCameraComponent* camera;


public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
		AActor* target1;

	UPROPERTY(EditAnywhere)
		AActor* target2;

	UPROPERTY(EditAnywhere)
		float ZOffset;

	UPROPERTY(EditAnywhere)
		float minDistance;

	UPROPERTY(EditAnywhere)
		float maxDistance;

	UPROPERTY(EditAnywhere)
		UCurveFloat* ZoomFeel;

		
};
