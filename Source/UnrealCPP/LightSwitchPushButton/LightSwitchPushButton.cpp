// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "LightSwitchPushButton.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ALightSwitchPushButton::ALightSwitchPushButton()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LightIntensity = 3000.0f;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = LightIntensity;
	PointLight->bVisible = true;
	RootComponent = PointLight;

	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere Component"));
	LightSphere->InitSphereRadius(300.0f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Ignore);
	LightSphere->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ALightSwitchPushButton::BeginPlay()
{
	Super::BeginPlay();
}

void ALightSwitchPushButton::ToggleLight()
{
    PointLight->ToggleVisibility();
}