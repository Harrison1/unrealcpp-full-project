// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AddRadialForce.generated.h"

UCLASS()
class UNREALCPP_API AAddRadialForce : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAddRadialForce();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;
	
};
