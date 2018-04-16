// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALCPP_PickupAndRotateActor_generated_h
#error "PickupAndRotateActor.generated.h already included, missing '#pragma once' in PickupAndRotateActor.h"
#endif
#define UNREALCPP_PickupAndRotateActor_generated_h

#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateActor(); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRotateActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RotateActor(); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupAndRotateActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_APickupAndRotateActor(); \
public: \
	DECLARE_CLASS(APickupAndRotateActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(APickupAndRotateActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPickupAndRotateActor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_APickupAndRotateActor(); \
public: \
	DECLARE_CLASS(APickupAndRotateActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(APickupAndRotateActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupAndRotateActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupAndRotateActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupAndRotateActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupAndRotateActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupAndRotateActor(APickupAndRotateActor&&); \
	NO_API APickupAndRotateActor(const APickupAndRotateActor&); \
public:


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupAndRotateActor(APickupAndRotateActor&&); \
	NO_API APickupAndRotateActor(const APickupAndRotateActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupAndRotateActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupAndRotateActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickupAndRotateActor)


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_14_PROLOG
#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_INCLASS \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_PickupAndRotateActor_PickupAndRotateActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
