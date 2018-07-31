// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPP_HideActor_generated_h
#error "HideActor.generated.h already included, missing '#pragma once' in HideActor.h"
#endif
#define UNREALCPP_HideActor_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_toHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_toHide); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDisableActor) \
	{ \
		P_GET_UBOOL(Z_Param_toHide); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DisableActor(Z_Param_toHide); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHideActor(); \
	friend struct Z_Construct_UClass_AHideActor_Statics; \
public: \
	DECLARE_CLASS(AHideActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AHideActor)


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHideActor(); \
	friend struct Z_Construct_UClass_AHideActor_Statics; \
public: \
	DECLARE_CLASS(AHideActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AHideActor)


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHideActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHideActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHideActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHideActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHideActor(AHideActor&&); \
	NO_API AHideActor(const AHideActor&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHideActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHideActor(AHideActor&&); \
	NO_API AHideActor(const AHideActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHideActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHideActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHideActor)


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_13_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_HideActor_HideActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
