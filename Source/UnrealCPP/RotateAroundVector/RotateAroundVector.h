// Harrison McGuire 
// UE4 Version 4.18.2 
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotateAroundVector.generated.h"

UCLASS()
class UNREALCPP_API ARotateAroundVector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotateAroundVector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare our variable for the angle axis
	float AngleAxis;
	
};
