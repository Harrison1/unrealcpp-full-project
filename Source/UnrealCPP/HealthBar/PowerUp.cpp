// Harrison McGuire
// UE4 Version 4.19.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "PowerUp.h"


// Sets default values
APowerUp::APowerUp()
{
	OnActorBeginOverlap.AddDynamic(this, &APowerUp::OnOverlap);
}

void APowerUp::OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor)
{
	MyCharacter = Cast<AUnrealCPPCharacter>(OtherActor);

	if ( (OtherActor != nullptr ) && (OtherActor != this) && MyCharacter ) 
	{
		if (MyCharacter->GetMagic() < 1.0f)
		{
			MyCharacter->SetMagicChange(20.0f);
			Destroy();
		}	
	}
}
