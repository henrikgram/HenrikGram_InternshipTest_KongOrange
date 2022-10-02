// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Components/CapsuleComponent.h"
#include "HenrikGram_TestGameModeBase.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::BeginOverlap);
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::MoveY(float axisValue)
{
	if ((Controller != nullptr) && (axisValue != 0.0f))
	{
		FVector Dir(0, axisValue,0);

		// add movement in that direction
		//TODO: Something is not right here
		AddMovementInput(Dir, 1);
	}
}

void APlayerCharacter::Die()
{
	if (UWorld* World = GetWorld())
	{
		if (AHenrikGram_TestGameModeBase* gameMode = Cast<AHenrikGram_TestGameModeBase>(World->GetAuthGameMode()))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::White, "death");

			gameMode->GetOnPlayerDied().Broadcast(this);
		}
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveY", this, &APlayerCharacter::MoveY);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

}


void APlayerCharacter::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FColor DisplayColor = FColor::Yellow;
	const FString DebugMessage(OtherActor->GetName());


	if (OtherActor->ActorHasTag("lava"))
	{
		Die();
	}
	else if (OtherActor->ActorHasTag("monster"))
	{
		//Die();
	}
	
}

