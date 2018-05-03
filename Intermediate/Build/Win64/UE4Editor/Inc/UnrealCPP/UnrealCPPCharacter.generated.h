// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDamageType;
struct FVector;
class UPrimitiveComponent;
class AController;
class AActor;
struct FHitResult;
#ifdef UNREALCPP_UnrealCPPCharacter_generated_h
#error "UnrealCPPCharacter.generated.h already included, missing '#pragma once' in UnrealCPPCharacter.h"
#endif
#define UNREALCPP_UnrealCPPCharacter_generated_h

#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceivePointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceivePointDamage(Z_Param_Damage,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Out_HitInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealth) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_HealthChange); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateHealth(Z_Param_HealthChange); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReceivePointDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Damage); \
		P_GET_OBJECT(UDamageType,Z_Param_DamageType); \
		P_GET_STRUCT(FVector,Z_Param_HitLocation); \
		P_GET_STRUCT(FVector,Z_Param_HitNormal); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_PROPERTY(UNameProperty,Z_Param_BoneName); \
		P_GET_STRUCT(FVector,Z_Param_ShotFromDirection); \
		P_GET_OBJECT(AController,Z_Param_InstigatedBy); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReceivePointDamage(Z_Param_Damage,Z_Param_DamageType,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_HitComponent,Z_Param_BoneName,Z_Param_ShotFromDirection,Z_Param_InstigatedBy,Z_Param_DamageCauser,Z_Param_Out_HitInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayFlash) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->PlayFlash(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMagicValue) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMagicValue(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDamageState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDamageState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDamageTimer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DamageTimer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagicIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetMagicIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthIntText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetHealthIntText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMagic) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMagic(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealCPPCharacter(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AUnrealCPPCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealCPPCharacter(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AUnrealCPPCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealCPPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealCPPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCPPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCPPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCPPCharacter(AUnrealCPPCharacter&&); \
	NO_API AUnrealCPPCharacter(const AUnrealCPPCharacter&); \
public:


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCPPCharacter(AUnrealCPPCharacter&&); \
	NO_API AUnrealCPPCharacter(const AUnrealCPPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCPPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCPPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealCPPCharacter)


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUnrealCPPCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUnrealCPPCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUnrealCPPCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUnrealCPPCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUnrealCPPCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUnrealCPPCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUnrealCPPCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUnrealCPPCharacter, L_MotionController); }


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_13_PROLOG
#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_INCLASS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
