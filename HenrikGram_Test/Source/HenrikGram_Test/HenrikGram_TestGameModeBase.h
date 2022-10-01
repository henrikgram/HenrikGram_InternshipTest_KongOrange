// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HenrikGram_TestGameModeBase.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerDied, ACharacter*, Character);

UCLASS()
class HENRIKGRAM_TEST_API AHenrikGram_TestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
    //Called when Player character has died.
    UFUNCTION()
        virtual void PlayerDied(ACharacter* Character);

    const FOnPlayerDied& GetOnPlayerDied() const { return OnPlayerDied; }

protected:
    virtual void BeginPlay() override;

    //Signature to bind delegate. 
    UPROPERTY()
        FOnPlayerDied OnPlayerDied;
};
