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
#ifdef UNREALCPP_OpenDoorTimelineOverlap_generated_h
#error "OpenDoorTimelineOverlap.generated.h already included, missing '#pragma once' in OpenDoorTimelineOverlap.h"
#endif
#define UNREALCPP_OpenDoorTimelineOverlap_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execControlDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ControlDoor(Z_Param_Value); \
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


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execControlDoor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ControlDoor(Z_Param_Value); \
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


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenDoorTimelineOverlap(); \
	friend struct Z_Construct_UClass_AOpenDoorTimelineOverlap_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorTimelineOverlap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorTimelineOverlap)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAOpenDoorTimelineOverlap(); \
	friend struct Z_Construct_UClass_AOpenDoorTimelineOverlap_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorTimelineOverlap, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorTimelineOverlap)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenDoorTimelineOverlap(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenDoorTimelineOverlap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorTimelineOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorTimelineOverlap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorTimelineOverlap(AOpenDoorTimelineOverlap&&); \
	NO_API AOpenDoorTimelineOverlap(const AOpenDoorTimelineOverlap&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorTimelineOverlap(AOpenDoorTimelineOverlap&&); \
	NO_API AOpenDoorTimelineOverlap(const AOpenDoorTimelineOverlap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorTimelineOverlap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorTimelineOverlap); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenDoorTimelineOverlap)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_15_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorTimelineOverlap_OpenDoorTimelineOverlap_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
