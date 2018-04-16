// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CameraShake/MyCameraShake.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCameraShake() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_UMyCameraShake_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_UMyCameraShake();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void UMyCameraShake::StaticRegisterNativesUMyCameraShake()
	{
	}
	UClass* Z_Construct_UClass_UMyCameraShake_NoRegister()
	{
		return UMyCameraShake::StaticClass();
	}
	UClass* Z_Construct_UClass_UMyCameraShake()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCameraShake,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CameraShake/MyCameraShake.h" },
				{ "ModuleRelativePath", "CameraShake/MyCameraShake.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMyCameraShake>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMyCameraShake::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyCameraShake, 2920946478);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyCameraShake(Z_Construct_UClass_UMyCameraShake, &UMyCameraShake::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("UMyCameraShake"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyCameraShake);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
