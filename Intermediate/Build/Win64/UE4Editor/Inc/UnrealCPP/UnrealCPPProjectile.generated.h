// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef UNREALCPP_UnrealCPPProjectile_generated_h
#error "UnrealCPPProjectile.generated.h already included, missing '#pragma once' in UnrealCPPProjectile.h"
#endif
#define UNREALCPP_UnrealCPPProjectile_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealCPPProjectile(); \
	friend struct Z_Construct_UClass_AUnrealCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealCPPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealCPPProjectile(); \
	friend struct Z_Construct_UClass_AUnrealCPPProjectile_Statics; \
public: \
	DECLARE_CLASS(AUnrealCPPProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUnrealCPPProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUnrealCPPProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCPPProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCPPProjectile(AUnrealCPPProjectile&&); \
	NO_API AUnrealCPPProjectile(const AUnrealCPPProjectile&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCPPProjectile(AUnrealCPPProjectile&&); \
	NO_API AUnrealCPPProjectile(const AUnrealCPPProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCPPProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCPPProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealCPPProjectile)


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AUnrealCPPProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AUnrealCPPProjectile, ProjectileMovement); }


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_9_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_UnrealCPPProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
