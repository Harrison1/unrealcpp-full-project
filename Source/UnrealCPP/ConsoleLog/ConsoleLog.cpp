// // Harrison McGuire
// // UE4 Version 4.18.2
// // https://github.com/Harrison1/unrealcpp
// // https://severallevels.io
// // https://harrisonmcguire.com

// // define a print message function to print to screen
// #define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
// #define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta, FString::Printf(TEXT(text), fstring))
// #include "ConsoleLog.h"

// // Sets default values
// AConsoleLog::AConsoleLog()
// {
//  	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
// 	PrimaryActorTick.bCanEverTick = true;

// }

// // Called when the game starts or when spawned
// void AConsoleLog::BeginPlay()
// {
// 	Super::BeginPlay();

// 	// Standard way to log to console.
// 	UE_LOG(LogTemp, Warning, TEXT("I just started running"));

// 	// Log to Screen
// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Screen Message"));

// 	FVector MyVector = FVector(200,100,900);

// 	// log vector
// 	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("My Location is: %s"), MyVector.ToString()));

// 	// Use the shortcut defined above
// 	print("Hello Unreal");	
// 	printFString("My Variable Vector is: %s", *MyVector.ToString());
	
// }

// // Called every frame
// void AConsoleLog::Tick(float DeltaTime)
// {
// 	Super::Tick(DeltaTime);

// }

