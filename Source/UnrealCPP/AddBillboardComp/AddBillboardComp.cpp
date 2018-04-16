// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "AddBillboardComp.h"
// include billboard comp
#include "Components/BillboardComponent.h"


// Sets default values
AAddBillboardComp::AAddBillboardComp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBillboardComp = CreateDefaultSubobject<UBillboardComponent>(TEXT("Root Billboard Comp"));
	MyBillboardComp->SetHiddenInGame(false, true);
	RootComponent = MyBillboardComp;

}

// Called when the game starts or when spawned
void AAddBillboardComp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAddBillboardComp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

