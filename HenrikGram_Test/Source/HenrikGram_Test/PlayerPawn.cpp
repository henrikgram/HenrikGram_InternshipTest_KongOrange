// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//InputComponent->BindAxis("MoveX", this, &APlayerPawn::Move_XAxis);
	//Sets the 
	//AutoPossessPlayer = EAutoReceiveInput::Player0;
	

	movementSpeed = 100;
	//Components
	

	////The Root component is the actors transform.
	Root = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	//Mesh
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root); 


	

}

void APlayerPawn::Move_YAxis(float AxisValue)
{
	velocity.Y = AxisValue;
}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!velocity.IsZero())
	{
		//moves the actor to a new location based on the velocity and movementspeed
		//Multiplied by deltatime to make sure the speed is consistent. 
		SetActorLocation(GetActorLocation() + (velocity * DeltaTime) * movementSpeed);
	}
	/*float speed = 1;
	runningTime += DeltaTime;

	location.Z += (sin(runningTime) * speed);

	UE_LOG(LogTemp, Warning, TEXT("The float value is: %f"), sin(runningTime));*/
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, sin(DeltaTime));


}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	InputComponent->BindAxis("MoveY", this, &APlayerPawn::Move_YAxis);

}

