// Harrison McGuire 
// UE4 Version 4.19.1
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "CampFire.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACampFire::ACampFire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACampFire::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACampFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

