// Harrison McGuire
// UE4 Version 4.19.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "MedKit.h"
#include "UnrealCPPCharacter.h"

// Sets default values
AMedKit::AMedKit()
{
	OnActorBeginOverlap.AddDynamic(this, &AMedKit::OnOverlap);
}

void AMedKit::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	MyCharacter = Cast<AUnrealCPPCharacter>(OtherActor);

	if ( (OtherActor != nullptr ) && (OtherActor != this) && MyCharacter ) 
	{
		if (MyCharacter->GetHealth() < 1.0f)
		{
			MyCharacter->UpdateHealth(100.0f);
			Destroy();
		}	
	}
}
