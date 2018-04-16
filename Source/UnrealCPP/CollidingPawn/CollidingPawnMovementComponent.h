// Harrison McGuire
// UE4 Version 4.18.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com
// https://docs.unrealengine.com/latest/INT/Programming/Tutorials/Components/index.html

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "CollidingPawnMovementComponent.generated.h"

UCLASS()
class UNREALCPP_API UCollidingPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:
    virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

};
