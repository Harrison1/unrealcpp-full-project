// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class UNREALCPP_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare our float variables 
	float RunningTime;
	
	UPROPERTY(EditAnywhere, Category = Movement)
	float XValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float YValue;

	UPROPERTY(EditAnywhere, Category = Movement)
	float ZValue;
	
	
};
