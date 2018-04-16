// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "MyPawn/MyPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AMyPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "MyPawn/MyPawn.h" },
				{ "ModuleRelativePath", "MyPawn/MyPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OurVisibleComponent_MetaData[] = {
				{ "Category", "MyPawn" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "MyPawn/MyPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OurVisibleComponent = { UE4CodeGen_Private::EPropertyClass::Object, "OurVisibleComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AMyPawn, OurVisibleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_OurVisibleComponent_MetaData, ARRAY_COUNT(NewProp_OurVisibleComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OurVisibleComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AMyPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AMyPawn::StaticClass,
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
	IMPLEMENT_CLASS(AMyPawn, 3777668034);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
