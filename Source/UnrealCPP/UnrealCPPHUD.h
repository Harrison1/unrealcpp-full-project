// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnrealCPPHUD.generated.h"

UCLASS()
class AUnrealCPPHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealCPPHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;
<<<<<<< HEAD

=======
	
>>>>>>> cfdd91a03e2aed1debe3f6c670fdc5c8b4d94020
};

