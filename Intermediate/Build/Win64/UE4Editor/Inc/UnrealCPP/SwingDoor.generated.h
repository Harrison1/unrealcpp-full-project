// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef UNREALCPP_SwingDoor_generated_h
#error "SwingDoor.generated.h already included, missing '#pragma once' in SwingDoor.h"
#endif
#define UNREALCPP_SwingDoor_generated_h

#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(Z_Param_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDoor) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_ForwardVector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDoor(Z_Param_ForwardVector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCloseDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseDoor(Z_Param_dt); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dt); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OpenDoor(Z_Param_dt); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ASwingDoor(); \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASwingDoor(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_ASwingDoor(); \
public: \
	DECLARE_CLASS(ASwingDoor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ASwingDoor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwingDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwingDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public:


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwingDoor(ASwingDoor&&); \
	NO_API ASwingDoor(const ASwingDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwingDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwingDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwingDoor)


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_13_PROLOG
#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_INCLASS \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_SwingDoor_SwingDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
