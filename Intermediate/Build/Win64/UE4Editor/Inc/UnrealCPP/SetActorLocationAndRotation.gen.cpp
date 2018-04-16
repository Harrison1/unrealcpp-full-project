// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "SetActorLocationAndRotation/SetActorLocationAndRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSetActorLocationAndRotation() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ASetActorLocationAndRotation_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ASetActorLocationAndRotation();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ASetActorLocationAndRotation::StaticRegisterNativesASetActorLocationAndRotation()
	{
	}
	UClass* Z_Construct_UClass_ASetActorLocationAndRotation_NoRegister()
	{
		return ASetActorLocationAndRotation::StaticClass();
	}
	UClass* Z_Construct_UClass_ASetActorLocationAndRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "SetActorLocationAndRotation/SetActorLocationAndRotation.h" },
				{ "ModuleRelativePath", "SetActorLocationAndRotation/SetActorLocationAndRotation.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "SetActorLocationAndRotation/SetActorLocationAndRotation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASetActorLocationAndRotation, NewRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(NewProp_NewRotation_MetaData, ARRAY_COUNT(NewProp_NewRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
				{ "Category", "Location" },
				{ "ModuleRelativePath", "SetActorLocationAndRotation/SetActorLocationAndRotation.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ASetActorLocationAndRotation, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NewLocation_MetaData, ARRAY_COUNT(NewProp_NewLocation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewLocation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASetActorLocationAndRotation>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASetActorLocationAndRotation::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASetActorLocationAndRotation, 1811446330);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASetActorLocationAndRotation(Z_Construct_UClass_ASetActorLocationAndRotation, &ASetActorLocationAndRotation::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASetActorLocationAndRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASetActorLocationAndRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
