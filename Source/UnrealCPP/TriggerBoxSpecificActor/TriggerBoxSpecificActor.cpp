// Harrison McGuire 
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
// #define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

#include "TriggerBoxSpecificActor.h"
// include draw debug helpers header file
#include "DrawDebugHelpers.h"

ATriggerBoxSpecificActor::ATriggerBoxSpecificActor()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &ATriggerBoxSpecificActor::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ATriggerBoxSpecificActor::OnOverlapEnd);
}

// Called when the game starts or when spawned
void ATriggerBoxSpecificActor::BeginPlay()
{
	Super::BeginPlay();

    DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 5);
	
}

void ATriggerBoxSpecificActor::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    //if the overlapping actor is the specific actor we identified in the editor
    if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor )
    {
        print("Overlap Begin");
        printFString("Overlapping Actor = %s", *OtherActor->GetName());
    }
}

void ATriggerBoxSpecificActor::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    //if the overlapping actor is the specific actor we identified in the editor
    if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor )
    {
        print("Overlap End");
        printFString("%s has left the Trigger Box", *OtherActor->GetName());
    }
}