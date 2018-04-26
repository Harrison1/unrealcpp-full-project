// Harrison McGuire 
// UE4 Version 4.19.1
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
    MyBoxComponent->InitBoxExtent(FVector(50,50,50));
    RootComponent = MyBoxComponent;

    Fire = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("My Fire"));
    Fire->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));
    Fire->SetupAttachment(RootComponent);

    MyBoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACampFire::OnOverlapBegin);
    MyBoxComponent->OnComponentEndOverlap.AddDynamic(this, &ACampFire::OnOverlapEnd);

    // MyBoxComponent->OnComponentHit.AddDynamic(this, &ACampFire::OnCompHit);

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
        UGameplayStatics::ApplyDamage(MyCharacter, 10.0f, nullptr, this, MyDamageClass);
    }

}

void ACampFire::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    if ( (OtherActor != nullptr ) && (OtherActor != this) && ( OtherComp != nullptr ) )
    {
        UE_LOG(LogClass,Error,TEXT("Yo I'm fire"));
        // TSubclassOf<UDamageType> MyDamageClass;


        bCanApplyDamage = true;
        MyCharacter = Cast<AActor>(OtherActor);
        // UGameplayStatics::ApplyDamage(OtherActor, 10.0f, nullptr, this, MyDamageClass);

    }
}

void ACampFire::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
    bCanApplyDamage = false;
}

// void ACampFire::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
// {
// 	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
// 	{
//         UE_LOG(LogClass, Warning, TEXT("Fire is Hitting You"));
//         TSubclassOf<UDamageType> MyDamageClass;
// 		UGameplayStatics::ApplyPointDamage(OtherActor, 10.0f, GetActorLocation(), Hit, nullptr, this, MyDamageClass);
// 	}
// }
