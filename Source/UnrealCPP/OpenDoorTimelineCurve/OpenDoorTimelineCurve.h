// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/TimelineComponent.h"
#include "Components/BoxComponent.h"
#include "OpenDoorTimelineCurve.generated.h"

UCLASS()
class UNREALCPP_API AOpenDoorTimelineCurve : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenDoorTimelineCurve();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Door;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* DoorFrame;

	UPROPERTY(EditAnywhere)
	UCurveFloat *DoorCurve;

	UFUNCTION()
    void ControlDoor();

	UFUNCTION()
    void ToggleDoor();

	UFUNCTION()
    void SetState();

	bool Open;
	bool ReadyState;
	float RotateValue;
	float CurveFloatValue;
	float TimelineValue;
	FTimeline MyTimeline;

};
