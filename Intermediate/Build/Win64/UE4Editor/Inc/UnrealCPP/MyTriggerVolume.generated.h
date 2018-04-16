// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPP_MyTriggerVolume_generated_h
#error "MyTriggerVolume.generated.h already included, missing '#pragma once' in MyTriggerVolume.h"
#endif
#define UNREALCPP_MyTriggerVolume_generated_h

#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_RPC_WRAPPERS \
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


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AMyTriggerVolume(); \
public: \
	DECLARE_CLASS(AMyTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AMyTriggerVolume(); \
public: \
	DECLARE_CLASS(AMyTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTriggerVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public:


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTriggerVolume)


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_16_PROLOG
#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_INCLASS \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_TriggerVolume_MyTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
