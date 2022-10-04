// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiTargetCamera.h"
#include "Math/UnrealMathVectorCommon.h"


// Sets default values for this component's properties
UMultiTargetCamera::UMultiTargetCamera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	if (GetOwner())
	{
		camera = GetOwner()->FindComponentByClass<UCameraComponent>();
	}
}


// Called when the game starts
void UMultiTargetCamera::BeginPlay()
{
	Super::BeginPlay();
}

FVector UMultiTargetCamera::GetCenterPointBetweenTargets()
{
	if (target2 == nullptr)
	{
		return target1->GetActorLocation();
	}
	//TODO: offsets
	FVector t1 = target1->GetActorLocation();
	FVector t2 = target2->GetActorLocation();
	FVector location = GetOwner()->GetActorLocation();

	FVector midPoint(location.X, (t1.Y + t2.Y) / 2, (t1.Z + t2.Z) / 2 + ZOffset);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::SanitizeFloat(ZOffset));

	return midPoint;
}

void UMultiTargetCamera::Zoom()
{
	FVector t1 = target1->GetActorLocation();
	FVector t2 = target2->GetActorLocation();

	float distance = abs(t1.Y - t2.Y);
	FVector location = GetOwner()->GetActorLocation();
	//TODO: Remove hardcoded distance values


	int range = maxDistance - minDistance;

	if (distance < maxDistance && distance > minDistance)
	{
		if (ZoomFeel)
		{
			float percent = (distance-minDistance) / range;
			float relativePercent = percent * (1 - minDistance) + minDistance;
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::SanitizeFloat(percent));

			camera->GetOwner()->SetActorLocation(FVector(( - distance) * ZoomFeel->GetFloatValue(relativePercent), location.Y, location.Z));
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "se");
			camera->GetOwner()->SetActorLocation(FVector(-distance, location.Y, location.Z));
		}
		
	}
		
}


// Called every frame
void UMultiTargetCamera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	GetOwner()->SetActorLocation(GetCenterPointBetweenTargets());
	Zoom();

}



