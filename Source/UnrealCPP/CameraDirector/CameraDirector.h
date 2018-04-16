// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com
// UE4 C++ Tutorial https://docs.unrealengine.com/latest/INT/Programming/Tutorials/AutoCamera/index.html

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

UCLASS()
class UNREALCPP_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare variables
	UPROPERTY(EditAnywhere)
	AActor* CameraOne;

	UPROPERTY(EditAnywhere)
	AActor* CameraTwo;

	float TimeToNextCameraChange;
	
};
