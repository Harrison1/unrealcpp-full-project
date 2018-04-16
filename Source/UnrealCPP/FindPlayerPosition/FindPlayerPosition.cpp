// Harrison McGuire 
// UE4 Version 4.18.2 
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#include "FindPlayerPosition.h"


// Sets default values
AFindPlayerPosition::AFindPlayerPosition()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFindPlayerPosition::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFindPlayerPosition::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// get first player pawn location
	FVector MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	// screen log player location
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, FString::Printf(TEXT("Player Location: %s"), *MyCharacter.ToString()));	

}

