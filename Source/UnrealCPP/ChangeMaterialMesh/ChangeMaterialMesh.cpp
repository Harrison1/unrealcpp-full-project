// THIS SCRIPT IS COMMENTED OUT BECAUSE IT IS CAUSING PROBLEMS ON 4.19.2, I WILL HAVE TO REVISIT THIS ISSUE

// // Harrison McGuire 
// // UE4 Version 4.18.3
// // https://github.com/Harrison1/unrealcpp 
// // https://severallevels.io 
// // https://harrisonmcguire.com
// // https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/Components/UMeshComponent/SetMaterial/index.html
// // https://docs.unrealengine.com/latest/INT/API/Runtime/Engine/Components/UPrimitiveComponent/OnComponentBeginOverlap/


// #include "ChangeMaterialMesh.h"
// // include draw debug helpers header file
// #include "DrawDebugHelpers.h"
// #include "Components/BoxComponent.h"



// // Sets default values
// AChangeMaterialMesh::AChangeMaterialMesh()
// {
//  	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
// 	PrimaryActorTick.bCanEverTick = true;

// 	MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MyMesh"));
// 	MyMesh->SetupAttachment(RootComponent);
// 	// RootComponent = MyMesh;

// 	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("MyBoxComponent"));
// 	MyBoxComponent->InitBoxExtent(FVector(100,100,100));
// 	MyBoxComponent->SetCollisionProfileName("Trigger");
// 	MyBoxComponent->SetupAttachment(RootComponent);

// 	OnMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OnMaterial"));
// 	OffMaterial = CreateDefaultSubobject<UMaterial>(TEXT("OffMaterial"));

// 	MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &AChangeMaterialMesh::OnOverlapBegin);

// }

// // Called when the game starts or when spawned
// void AChangeMaterialMesh::BeginPlay()
// {
// 	Super::BeginPlay();

// 	DrawDebugBox(GetWorld(), GetActorLocation(), FVector(100,100,100), FColor::White, true, -1, 0, 10);

// 	MyMesh->SetMaterial(0, OffMaterial);
	
// }

// // Called every frame
// void AChangeMaterialMesh::Tick(float DeltaTime)
// {
// 	Super::Tick(DeltaTime);

// }

// void AChangeMaterialMesh::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) 
// {
// 	if ( (OtherActor != nullptr ) && (OtherActor != this) && ( OtherComp != nullptr ) ) 
// 	{
// 		MyMesh->SetMaterial(0, OnMaterial);
// 	}
// }