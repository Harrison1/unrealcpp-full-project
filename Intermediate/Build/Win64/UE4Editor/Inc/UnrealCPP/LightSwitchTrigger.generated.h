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
struct FHitResult;
#ifdef UNREALCPP_LightSwitchTrigger_generated_h
#error "LightSwitchTrigger.generated.h already included, missing '#pragma once' in LightSwitchTrigger.h"
#endif
#define UNREALCPP_LightSwitchTrigger_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitchTrigger(); \
	friend struct Z_Construct_UClass_ALightSwitchTrigger_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchTrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchTrigger)


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitchTrigger(); \
	friend struct Z_Construct_UClass_ALightSwitchTrigger_Statics; \
public: \
	DECLARE_CLASS(ALightSwitchTrigger, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitchTrigger)


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitchTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitchTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchTrigger(ALightSwitchTrigger&&); \
	NO_API ALightSwitchTrigger(const ALightSwitchTrigger&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitchTrigger(ALightSwitchTrigger&&); \
	NO_API ALightSwitchTrigger(const ALightSwitchTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitchTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitchTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitchTrigger)


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_13_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_LightSwitchTrigger_LightSwitchTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
