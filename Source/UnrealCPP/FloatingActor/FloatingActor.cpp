// Harrison McGuire 
// UE4 Version 4.18.2 
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com
// originally derived from https://docs.unrealengine.com/latest/INT/Programming/QuickStart/index.html

#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// on every frame change location for a smooth floating actor
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.X += DeltaHeight *  XValue;
	NewLocation.Y += DeltaHeight *  YValue;
	NewLocation.Z += DeltaHeight *  ZValue;

	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

}