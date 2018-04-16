// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// UE4 C++ Tutorial https://docs.unrealengine.com/latest/INT/Programming/Tutorials/AutoCamera/index.html

#include "CameraDirector.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	const float TimeBetweenCameraChanges = 2.0f;
    const float SmoothBlendTime = 0.75f;
	TimeToNextCameraChange -= DeltaTime;
	
    if (TimeToNextCameraChange <= 0.0f)
    {
        TimeToNextCameraChange += TimeBetweenCameraChanges;

        //Find the actor that handles control for the local player.
        APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);
        if (OurPlayerController)
        {
            if (CameraTwo && (OurPlayerController->GetViewTarget() == CameraOne))
            {
                //Blend smoothly to camera two.
                OurPlayerController->SetViewTargetWithBlend(CameraTwo, SmoothBlendTime);
            }
            else if (CameraOne)
            {
                //Cut instantly to camera one.
                OurPlayerController->SetViewTarget(CameraOne);
            }
        }
    }
}