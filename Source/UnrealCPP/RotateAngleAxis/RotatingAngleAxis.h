// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotatingAngleAxis.generated.h"

UCLASS()
class UNREALCPP_API ARotatingAngleAxis : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingAngleAxis();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare our float variables
	UPROPERTY(EditAnywhere, Category = Movement)
	float AngleAxis;

	UPROPERTY(EditAnywhere, Category = Movement)
	FVector Dimensions;

	UPROPERTY(EditAnywhere, Category = Movement)
	FVector AxisVector;

	UPROPERTY(EditAnywhere, Category = Movement)
	float Multiplier;
};
