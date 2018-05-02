// Harrison McGuire 
// UE4 Version 4.19.2
// https://github.com/Harrison1/unrealcpp
// https://severallevels.io
// https://harrisonmcguire.com

#include "CampFire.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
ACampFire::ACampFire()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("My Box Component"));
    MyBoxComponent->InitBoxExtent(FVector(25,25,25));
    RootComponent = MyBoxComponent;

    Fire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("My Fire"));
    Fire->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    Fire->SetupAttachment(RootComponent);

    MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACampFire::OnOverlapBegin);
    MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &ACampFire::OnOverlapEnd);

    bCanApplyDamage = false;

}

// Called when the game starts or when spawned
void ACampFire::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ACampFire::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    if(bCanApplyDamage)
    {
        UGameplayStatics::ApplyPointDamage(MyCharacter, 200.0f, GetActorLocation(), MyHit, nullptr, this, FireDamageType);
    }
}

void ACampFire::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if ( (OtherActor != nullptr ) && (OtherActor != this) && ( OtherComp != nullptr ) )
    {
        bCanApplyDamage = true;
        MyCharacter = Cast<AActor>(OtherActor);
        MyHit = SweepResult;
    }
}

void ACampFire::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    bCanApplyDamage = false;
}
