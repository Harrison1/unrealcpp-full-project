// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SetViewTargetBlend.generated.h"

UCLASS()
class UNREALCPP_API ASetViewTargetBlend : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASetViewTargetBlend();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare variables
	UPROPERTY(EditAnywhere)
	AActor* MyActor;
	
};
