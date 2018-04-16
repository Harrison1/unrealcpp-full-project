// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPP_TriggerVolumeSpecificActor_generated_h
#error "TriggerVolumeSpecificActor.generated.h already included, missing '#pragma once' in TriggerVolumeSpecificActor.h"
#endif
#define UNREALCPP_TriggerVolumeSpecificActor_generated_h

#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerVolumeSpecificActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor(); \
public: \
	DECLARE_CLASS(ATriggerVolumeSpecificActor, ATriggerVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerVolumeSpecificActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATriggerVolumeSpecificActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor(); \
public: \
	DECLARE_CLASS(ATriggerVolumeSpecificActor, ATriggerVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerVolumeSpecificActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerVolumeSpecificActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerVolumeSpecificActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerVolumeSpecificActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerVolumeSpecificActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerVolumeSpecificActor(ATriggerVolumeSpecificActor&&); \
	NO_API ATriggerVolumeSpecificActor(const ATriggerVolumeSpecificActor&); \
public:


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerVolumeSpecificActor(ATriggerVolumeSpecificActor&&); \
	NO_API ATriggerVolumeSpecificActor(const ATriggerVolumeSpecificActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerVolumeSpecificActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerVolumeSpecificActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerVolumeSpecificActor)


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_13_PROLOG
#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_INCLASS \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_TriggerVolumeSpecificActor_TriggerVolumeSpecificActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
