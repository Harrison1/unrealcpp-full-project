// Harrison McGuire UE4
// Version 4.18
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "MyDrawDebugHelpers.h"
// include draw debu helpers header file
#include "DrawDebugHelpers.h"


// Sets default values
AMyDrawDebugHelpers::AMyDrawDebugHelpers()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// init variables with values
	LocationOne = FVector(0,0,600);
	LocationTwo = FVector(0,-600,600);
	LocationThree = FVector(0,600,600);
	LocationFour = FVector(-300,0,600);
	LocationFive = FVector(-400,-600,600);
	
	MyBox = FBox(FVector(0,0,0), FVector(200,200,200));
}

// Called when the game starts or when spawned
void AMyDrawDebugHelpers::BeginPlay()
{
	Super::BeginPlay();

	DrawDebugPoint(GetWorld(), LocationOne, 200, FColor(52,220,239), true);

	DrawDebugSphere(GetWorld(), LocationTwo, 200, 26, FColor(181,0,0), true, -1, 0, 2);

	DrawDebugCircle(GetWorld(), CircleMatrix, 200, 50, FColor(0,104,167), true, -1, 0, 10);

	DrawDebugCircle(GetWorld(), LocationFour, 200, 50, FColor(0,0,0), true, -1, 0, 10);

	DrawDebugSolidBox(GetWorld(), MyBox, FColor(20, 100, 240), MyTransform, true);

	DrawDebugBox(GetWorld(), LocationFive, FVector(100,100,100), FColor::Purple, true, -1, 0, 10);

	DrawDebugLine(GetWorld(), LocationTwo, LocationThree, FColor::Emerald, true, -1, 0, 10);

	DrawDebugDirectionalArrow(GetWorld(), FVector(-300, 600, 600), FVector(-300, -600, 600), 120.f, FColor::Magenta, true, -1.f, 0, 5.f);
	
	DrawDebugCrosshairs(GetWorld(), FVector(0,0,1000), FRotator(0,0,0), 500.f, FColor::White, true, -1.f, 0);
	
}

// Called every frame
void AMyDrawDebugHelpers::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

