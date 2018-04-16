// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
// #define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "MyTriggerVolume.h"
// include draw debug helpers header file
#include "DrawDebugHelpers.h"

AMyTriggerVolume::AMyTriggerVolume()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &AMyTriggerVolume::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AMyTriggerVolume::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugBox(GetWorld(), GetActorLocation(), GetActorScale()*100, FColor::Cyan, true, -1, 0, 5);
	
}

void AMyTriggerVolume::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor enters trigger box
        print("Overlap Begin");
        printFString("Other Actor = %s", *OtherActor->GetName());
    }
}

void AMyTriggerVolume::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor leaves trigger box
        print("Overlap Ended");
        printFString("%s has left the Trigger Box", *OtherActor->GetName());
    }
}