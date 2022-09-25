// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionTest.h"
#include "Components/BoxComponent.h"
#include  "Engine/Engine.h"

// Sets default values
ACollisionTest::ACollisionTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CollisionBox->SetBoxExtent(FVector(32, 32, 32));
	CollisionBox->SetCollisionProfileName("Trigger");
	RootComponent = CollisionBox;

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACollisionTest::BeginOverlap);

}

// Called when the game starts or when spawned
void ACollisionTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollisionTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACollisionTest::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "sin(DeltaTime)");
}

