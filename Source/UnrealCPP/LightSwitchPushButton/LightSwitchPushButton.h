// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitchPushButton.generated.h"

UCLASS()
class UNREALCPP_API ALightSwitchPushButton : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitchPushButton();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// virtual void Tick(float DeltaTime) override;

	// declare point light comp
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	class UPointLightComponent* PointLight;

	// declare sphere comp
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	class USphereComponent* LightSphere;

	// declare light intensity variable
	UPROPERTY(VisibleAnywhere, Category = "Light Switch")
	float LightIntensity;

	// declare ToggleLight function
	UFUNCTION(BlueprintCallable, Category = "Light Switch")
	void ToggleLight();
	
};
