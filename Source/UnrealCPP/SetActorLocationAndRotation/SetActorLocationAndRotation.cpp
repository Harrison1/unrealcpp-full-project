// Harrison McGuire 
// UE4 Version 4.18.2 
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#include "SetActorLocationAndRotation.h"


// Sets default values
ASetActorLocationAndRotation::ASetActorLocationAndRotation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASetActorLocationAndRotation::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocationAndRotation(NewLocation, NewRotation, false, 0, ETeleportType::None);	
	
}

// Called every frame
void ASetActorLocationAndRotation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

