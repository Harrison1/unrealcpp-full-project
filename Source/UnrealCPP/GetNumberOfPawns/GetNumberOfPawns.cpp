// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "GetNumberOfPawns.h"


// Sets default values
AGetNumberOfPawns::AGetNumberOfPawns()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGetNumberOfPawns::BeginPlay()
{
	Super::BeginPlay();

	int32 MyPawns = GetWorld()->GetNumPawns();

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Number of Pawns: %d"), MyPawns));
	
}

// Called every frame
void AGetNumberOfPawns::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}