// Harrison McGuire 
// UE4 Version 4.19
// https://github.com/Harrison1/unrealcpp 
// https://severallevels.io
// https://harrisonmcguire.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PickupAndRotateActor/PickupAndRotateActor.h"
#include "UnrealCPPCharacter.generated.h"

class UInputComponent;

UCLASS(config=Game)
class AUnrealCPPCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** Gun mesh: 1st person view (seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FP_Gun;

	/** Location on gun mesh where projectiles should spawn. */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USceneComponent* FP_MuzzleLocation;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

	/** Holding Component */
	UPROPERTY(EditAnywhere)
	class USceneComponent* HoldingComponent;

	

public:
	AUnrealCPPCharacter();

protected:
	virtual void BeginPlay();

	virtual void Tick(float DeltaSeconds) override;

public:

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class AUnrealCPPProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere)
	class APickupAndRotateActor* CurrentItem;

	bool bCanMove;
	bool bHoldingItem;
	bool bInspecting;

	float PitchMax;
	float PitchMin;

	FVector HoldingComp;
	FRotator LastRotation;

	FVector Start;
	FVector ForwardVector;
	FVector End;

	FHitResult Hit;
	
	FComponentQueryParams DefaultComponentQueryParams;
	FCollisionResponseParams DefaultResponseParam;


protected:
	
	/** Fires a projectile. */
	void OnFire();

	/** Action Function */
	void OnAction();

	/** Inspect Function */
	void OnInspect();
	void OnInspectReleased();

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	// toggle player movement
	void ToggleMovement();

	// toggle holding item pickup
	void ToggleItemPickup();
	
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

};