// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

// #define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
// #define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "MyTriggerBox.h"
// include draw debu helpers header file
#include "DrawDebugHelpers.h"

AMyTriggerBox::AMyTriggerBox()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &AMyTriggerBox::OnOverlapEnd);
}

// Called when the game starts or when spawned
void AMyTriggerBox::BeginPlay()
{
	Super::BeginPlay();

    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);
	
}

void AMyTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor enters trigger box
        print("Overlap Begin");
        printFString("Overlapped Actor = %s", *OverlappedActor->GetName());
    }
}

void AMyTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this)) {
        // print to screen using above defined method when actor leaves trigger box
        print("Overlap Ended");
        printFString("%s has left the Trigger Box", *OtherActor->GetName());
    }
}