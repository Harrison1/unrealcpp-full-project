// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPP_UnrealCPPCharacter_generated_h
#error "UnrealCPPCharacter.generated.h already included, missing '#pragma once' in UnrealCPPCharacter.h"
#endif
#define UNREALCPP_UnrealCPPCharacter_generated_h

#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPrevHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPrevHealth(); \
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


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPrevHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetPrevHealth(); \
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


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUnrealCPPCharacter(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AUnrealCPPCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAUnrealCPPCharacter(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AUnrealCPPCharacter(); \
public: \
	DECLARE_CLASS(AUnrealCPPCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AUnrealCPPCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_STANDARD_CONSTRUCTORS \
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


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUnrealCPPCharacter(AUnrealCPPCharacter&&); \
	NO_API AUnrealCPPCharacter(const AUnrealCPPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUnrealCPPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUnrealCPPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUnrealCPPCharacter)


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AUnrealCPPCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AUnrealCPPCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AUnrealCPPCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AUnrealCPPCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AUnrealCPPCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AUnrealCPPCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AUnrealCPPCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AUnrealCPPCharacter, L_MotionController); }


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_11_PROLOG
#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_INCLASS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_UnrealCPPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
