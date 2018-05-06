// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UNREALCPP_PowerUp_generated_h
#error "PowerUp.generated.h already included, missing '#pragma once' in PowerUp.h"
#endif
#define UNREALCPP_PowerUp_generated_h

#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_MyOverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_MyOverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_APowerUp(); \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(APowerUp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAPowerUp(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_APowerUp(); \
public: \
	DECLARE_CLASS(APowerUp, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(APowerUp) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APowerUp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APowerUp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public:


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APowerUp(APowerUp&&); \
	NO_API APowerUp(const APowerUp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APowerUp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APowerUp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APowerUp)


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_14_PROLOG
#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_INCLASS \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_HealthBar_PowerUp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
