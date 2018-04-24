// Harrison McGuire UE4 Version 4.19.1  https://github.com/Harrison1/unrealcpp https://severallevels.io https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CampFire.generated.h"

UCLASS()
class UNREALCPP_API ACampFire : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACampFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
