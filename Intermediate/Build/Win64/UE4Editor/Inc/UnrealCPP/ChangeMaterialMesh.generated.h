// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef UNREALCPP_ChangeMaterialMesh_generated_h
#error "ChangeMaterialMesh.generated.h already included, missing '#pragma once' in ChangeMaterialMesh.h"
#endif
#define UNREALCPP_ChangeMaterialMesh_generated_h

#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_RPC_WRAPPERS \
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


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChangeMaterialMesh(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AChangeMaterialMesh(); \
public: \
	DECLARE_CLASS(AChangeMaterialMesh, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AChangeMaterialMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAChangeMaterialMesh(); \
	friend UNREALCPP_API class UClass* Z_Construct_UClass_AChangeMaterialMesh(); \
public: \
	DECLARE_CLASS(AChangeMaterialMesh, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealCPP"), NO_API) \
	DECLARE_SERIALIZER(AChangeMaterialMesh) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AChangeMaterialMesh(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChangeMaterialMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChangeMaterialMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChangeMaterialMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChangeMaterialMesh(AChangeMaterialMesh&&); \
	NO_API AChangeMaterialMesh(const AChangeMaterialMesh&); \
public:


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AChangeMaterialMesh(AChangeMaterialMesh&&); \
	NO_API AChangeMaterialMesh(const AChangeMaterialMesh&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AChangeMaterialMesh); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChangeMaterialMesh); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AChangeMaterialMesh)


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_PRIVATE_PROPERTY_OFFSET
#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_13_PROLOG
#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_RPC_WRAPPERS \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_INCLASS \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_PRIVATE_PROPERTY_OFFSET \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_INCLASS_NO_PURE_DECLS \
	UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealCPP_Source_UnrealCPP_ChangeMaterialMesh_ChangeMaterialMesh_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
