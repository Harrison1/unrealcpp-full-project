// THIS SCRIPT IS COMMENTED OUT BECAUSE IT IS CAUSING PROBLEMS ON 4.19.2, I WILL HAVE TO REVISIT THIS ISSUE

// // Harrison McGuire 
// // UE4 Version 4.18.3
// // https://github.com/Harrison1/unrealcpp 
// // https://severallevels.io 
// // https://harrisonmcguire.com

// #pragma once

// #include "CoreMinimal.h"
// #include "GameFramework/Actor.h"
// #include "ChangeMaterialMesh.generated.h"

// UCLASS()
// class UNREALCPP_API AChangeMaterialMesh : public AActor
// {
// 	GENERATED_BODY()
	
// public:	
// 	// Sets default values for this actor's properties
// 	AChangeMaterialMesh();

// protected:
// 	// Called when the game starts or when spawned
// 	virtual void BeginPlay() override;

// public:	
// 	// Called every frame
// 	virtual void Tick(float DeltaTime) override;

// 	UPROPERTY(VisibleAnywhere)
// 	class UStaticMeshComponent* MyMesh;

// 	UPROPERTY(EditAnywhere)
// 	class UMaterial* OnMaterial;

// 	UPROPERTY(EditAnywhere)
// 	class UMaterial* OffMaterial;

// 	UPROPERTY()
// 	class UBoxComponent* MyBoxComponent;

// 	UFUNCTION()
// 	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
// };
