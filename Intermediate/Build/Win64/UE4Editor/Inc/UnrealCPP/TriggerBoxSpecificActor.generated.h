// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPP_TriggerBoxSpecificActor_generated_h
#error "TriggerBoxSpecificActor.generated.h already included, missing '#pragma once' in TriggerBoxSpecificActor.h"
#endif
#define UNREALCPP_TriggerBoxSpecificActor_generated_h

#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_RPC_WRAPPERS \
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


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBoxSpecificActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ATriggerBoxSpecificActor(); \
public: \
	DECLARE_CLASS(ATriggerBoxSpecificActor, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerBoxSpecificActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATriggerBoxSpecificActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ATriggerBoxSpecificActor(); \
public: \
	DECLARE_CLASS(ATriggerBoxSpecificActor, ATriggerBox, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ATriggerBoxSpecificActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATriggerBoxSpecificActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATriggerBoxSpecificActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBoxSpecificActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBoxSpecificActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerBoxSpecificActor(ATriggerBoxSpecificActor&&); \
	NO_API ATriggerBoxSpecificActor(const ATriggerBoxSpecificActor&); \
public:


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATriggerBoxSpecificActor(ATriggerBoxSpecificActor&&); \
	NO_API ATriggerBoxSpecificActor(const ATriggerBoxSpecificActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBoxSpecificActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBoxSpecificActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATriggerBoxSpecificActor)


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_14_PROLOG
#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_INCLASS \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_TriggerBoxSpecificActor_TriggerBoxSpecificActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
