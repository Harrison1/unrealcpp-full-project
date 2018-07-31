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
#ifdef UNREALCPP_OpenDoorWithLerp_generated_h
#error "OpenDoorWithLerp.generated.h already included, missing '#pragma once' in OpenDoorWithLerp.h"
#endif
#define UNREALCPP_OpenDoorWithLerp_generated_h

#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_RPC_WRAPPERS \
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


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOpenDoorWithLerp(); \
	friend struct Z_Construct_UClass_AOpenDoorWithLerp_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorWithLerp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorWithLerp)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAOpenDoorWithLerp(); \
	friend struct Z_Construct_UClass_AOpenDoorWithLerp_Statics; \
public: \
	DECLARE_CLASS(AOpenDoorWithLerp, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AOpenDoorWithLerp)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOpenDoorWithLerp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOpenDoorWithLerp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorWithLerp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorWithLerp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorWithLerp(AOpenDoorWithLerp&&); \
	NO_API AOpenDoorWithLerp(const AOpenDoorWithLerp&); \
public:


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOpenDoorWithLerp(AOpenDoorWithLerp&&); \
	NO_API AOpenDoorWithLerp(const AOpenDoorWithLerp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOpenDoorWithLerp); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOpenDoorWithLerp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOpenDoorWithLerp)


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_14_PROLOG
#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_RPC_WRAPPERS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_INCLASS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_INCLASS_NO_PURE_DECLS \
	UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP___4_19_2_Source_UnrealCPP_OpenDoorWithLerp_OpenDoorWithLerp_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
