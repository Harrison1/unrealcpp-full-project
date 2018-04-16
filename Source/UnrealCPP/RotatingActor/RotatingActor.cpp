// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "RotatingActor.h"

// Sets default values
ARotatingActor::ARotatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PitchValue = 0.f;
	YawValue = 0.f;
	RollValue = 0.f;

}

// Called when the game starts or when spawned
void ARotatingActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARotatingActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// on every frame change rotationg for a smooth rotating actor
	FRotator NewRotation = FRotator(PitchValue, YawValue, RollValue);
	
	FQuat QuatRotation = FQuat(NewRotation);
	
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);


	// The below method causes a bug for the pitch value. The pitch value stops updating at 90 degrees
	// this is a known bug in the Unreal Engine. 
	// solution found by ue4 user nutellis https://answers.unrealengine.com/questions/591752/pitch-rotation-stucks-at-90-90-c.html

	// FRotator NewRotation = GetActorRotation();

	// NewRotation.Pitch += PitchValue;
	// NewRotation.Yaw += YawValue;
	// NewRotation.Roll += RollValue;
	
	// OR add values using the FRotator Add function
	// FRotator NewRotation = GetActorRotation().Add(PitchValue, YawValue, RollValue);


	// SetActorRotation(NewRotation);

}

