// Harrison McGuire 
// UE4 Version 4.18.2 
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io

#include "CreateStaticMesh.h"


// Sets default values
ACreateStaticMesh::ACreateStaticMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add static mesh component to actor
	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Super Mesh"));

}

// Called when the game starts or when spawned
void ACreateStaticMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACreateStaticMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

