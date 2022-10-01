// Copyright Epic Games, Inc. All Rights Reserved.


#include "HenrikGram_TestGameModeBase.h"
#include <Kismet/GameplayStatics.h>


void AHenrikGram_TestGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (!OnPlayerDied.IsBound())
	{
		OnPlayerDied.AddDynamic(this, &AHenrikGram_TestGameModeBase::PlayerDied);
	}
}

void AHenrikGram_TestGameModeBase::PlayerDied(ACharacter* Character)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, "Restart level");

	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
	//Restart level
}
