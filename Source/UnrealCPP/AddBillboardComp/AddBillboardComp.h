// Harrison McGuire
// UE4 Version 4.19.0
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AddBillboardComp.generated.h"

UCLASS()
class UNREALCPP_API AAddBillboardComp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAddBillboardComp();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// declare point light comp
	UPROPERTY(VisibleAnywhere)
	class UBillboardComponent* MyBillboardComp;
	
};
