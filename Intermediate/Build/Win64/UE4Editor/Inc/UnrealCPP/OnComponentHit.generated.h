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
#ifdef UNREALCPP_OnComponentHit_generated_h
#error "OnComponentHit.generated.h already included, missing '#pragma once' in OnComponentHit.h"
#endif
#define UNREALCPP_OnComponentHit_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnCompHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnComponentHit(); \
	friend struct Z_Construct_UClass_AOnComponentHit_Statics; \
public: \
	DECLARE_CLASS(AOnComponentHit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOnComponentHit)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAOnComponentHit(); \
	friend struct Z_Construct_UClass_AOnComponentHit_Statics; \
public: \
	DECLARE_CLASS(AOnComponentHit, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOnComponentHit)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnComponentHit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnComponentHit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnComponentHit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnComponentHit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnComponentHit(AOnComponentHit&&); \
	NO_API AOnComponentHit(const AOnComponentHit&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnComponentHit(AOnComponentHit&&); \
	NO_API AOnComponentHit(const AOnComponentHit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnComponentHit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnComponentHit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOnComponentHit)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_13_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_OnComponentHit_OnComponentHit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
