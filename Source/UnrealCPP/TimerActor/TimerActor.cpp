// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com
// https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/FTimerManager/SetTimer/4/

#include "TimerActor.h"
#include "TimerManager.h"


// Sets default values
ATimerActor::ATimerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;	

}

// Called when the game starts or when spawned
void ATimerActor::BeginPlay()
{
	Super::BeginPlay();

	// connect timer function to actor. After 5 seconds run RepeatingFunction every 2 seconds 
	GetWorldTimerManager().SetTimer(MemberTimerHandle, this, &ATimerActor::RepeatingFunction, 2.0f, true, 5.0f);
}

// Called every frame
void ATimerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATimerActor::RepeatingFunction()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Hello Timer"));
}