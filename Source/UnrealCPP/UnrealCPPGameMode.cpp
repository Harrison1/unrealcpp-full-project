// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UnrealCPPGameMode.h"
#include "UnrealCPPHUD.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCPPGameMode::AUnrealCPPGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealCPPHUD::StaticClass();
}

void AUnrealCPPGameMode::BeginPlay()
{
	Super::BeginPlay();

	SetCurrentState(EGamePlayState::EPlaying);

	MyCharacter = Cast<AUnrealCPPCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

}

void AUnrealCPPGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (MyCharacter)
	{
		if (MyCharacter->GetHealth() <= 0)
		{
			SetCurrentState(EGamePlayState::EGameOver);
		}
	}
}

EGamePlayState AUnrealCPPGameMode::GetCurrentState() const
{
	return CurrentState;
}

void AUnrealCPPGameMode::SetCurrentState(EGamePlayState NewState)
{
	CurrentState = NewState;
	HandleNewState(CurrentState);
}

void AUnrealCPPGameMode::HandleNewState(EGamePlayState NewState)
{
	switch (NewState)
	{
		case EGamePlayState::EPlaying:
		{
			// do nothing
		}
		break;
		// Unknown/default state
		case EGamePlayState::EGameOver:
		{
			UGameplayStatics::OpenLevel(this, FName("FirstPersonExampleMap"), false);
		}
		break;
		// Unknown/default state
		default:
		case EGamePlayState::EUnknown:
		{
			// do nothing
		}
		break;
	}
}
