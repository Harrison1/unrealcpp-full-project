// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com
// https://docs.unrealengine.com/latest/INT/Programming/Tutorials/PlayerInput/index.html

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class UNREALCPP_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

    UPROPERTY(EditAnywhere)
    USceneComponent* OurVisibleComponent;

    // Input functions
    void Move_XAxis(float AxisValue);
    void Move_YAxis(float AxisValue);
    void StartGrowing();
    void StopGrowing();

    // Input variables
    FVector CurrentVelocity;
    bool bGrowing;
};
