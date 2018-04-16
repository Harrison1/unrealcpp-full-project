// Harrison McGuire
// UE4 Version 4.19
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

// Helpful Links
// http://api.unrealengine.com/INT/API/Runtime/Engine/Engine/UWorld/LineTraceSingleByChannel/index.html
// http://api.unrealengine.com/INT/API/Runtime/Engine/FCollisionQueryParams/index.html
// http://api.unrealengine.com/INT/API/Runtime/Engine/GameFramework/APawn/index.html

#include "PickupAndRotateActor.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
APickupAndRotateActor::APickupAndRotateActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetSimulatePhysics(true);
	RootComponent = MyMesh;

	bHolding = false;
	bGravity = true;

}

// Called when the game starts or when spawned
void APickupAndRotateActor::BeginPlay()
{
	Super::BeginPlay();

	MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
	PlayerCamera = MyCharacter->FindComponentByClass<UCameraComponent>();

	TArray<USceneComponent*> Components;
 
	MyCharacter->GetComponents(Components);

	if(Components.Num() > 0)
	{
		for (auto& Comp : Components)
		{
			if(Comp->GetName() == "HoldingComponent")
			{
				HoldingComp = Cast<USceneComponent>(Comp);
			}
		}
	}

}

// Called every frame
void APickupAndRotateActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(bHolding && HoldingComp)
	{
		SetActorLocationAndRotation(HoldingComp->GetComponentLocation(), HoldingComp->GetComponentRotation());
	}

}

void APickupAndRotateActor::RotateActor()
{
	ControlRotation = GetWorld()->GetFirstPlayerController()->GetControlRotation();
	SetActorRotation(FQuat(ControlRotation));
}

void APickupAndRotateActor::Pickup()
{
	bHolding = !bHolding;	
	bGravity = !bGravity;
	MyMesh->SetEnableGravity(bGravity);
	MyMesh->SetSimulatePhysics(bHolding ? false : true);
	MyMesh->SetCollisionEnabled(bHolding ? ECollisionEnabled::NoCollision : ECollisionEnabled::QueryAndPhysics);

	if(!bHolding) 
	{
		ForwardVector = PlayerCamera->GetForwardVector();
		MyMesh->AddForce(ForwardVector*100000*MyMesh->GetMass());
	}

}

