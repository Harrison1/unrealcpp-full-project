// Harrison McGuire 
// UE4 Version 4.18.3
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com
// https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/Components/UPrimitiveComponent/OnComponentBeginOverlap/

#include "DestroyActorOnOverlap.h"
// include draw debug helpers header file
#include "DrawDebugHelpers.h"
// include sphere comp header file
#include "Components/SphereComponent.h"


// Sets default values
ADestroyActorOnOverlap::ADestroyActorOnOverlap()
{

	 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereRadius = 100.0f;

	MyCollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("My Sphere Component"));
	MyCollisionSphere->InitSphereRadius(SphereRadius);
	MyCollisionSphere->SetCollisionProfileName("Trigger");
	RootComponent = MyCollisionSphere;

	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Mesh"));
	MyMesh->SetupAttachment(RootComponent);

	MyCollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ADestroyActorOnOverlap::OnOverlapBegin);

}

// Called when the game starts or when spawned
void ADestroyActorOnOverlap::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADestroyActorOnOverlap::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DrawDebugSphere(GetWorld(), GetActorLocation(), SphereRadius, 20, FColor::Purple, false, -1, 0, 1);	

}

void ADestroyActorOnOverlap::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if ( (OtherActor != nullptr ) && (OtherActor != this) && ( OtherComp != nullptr ) ) 
	{
		Destroy();
	}
}
