// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "SetViewTargetBlend.h"
// include gameplay statics header file
#include "Kismet/GameplayStatics.h"


// Sets default values
ASetViewTargetBlend::ASetViewTargetBlend()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASetViewTargetBlend::BeginPlay()
{
	Super::BeginPlay();

	//Find the actor that handles control for the local player.
	APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
	
	//Smoothly transition to our actor on begin play.
	OurPlayerController->SetViewTargetWithBlend(MyActor, 2.f);
	
}

// Called every frame
void ASetViewTargetBlend::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

