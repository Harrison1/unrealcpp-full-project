// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "CollidingPawn/CollidingPawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollidingPawnMovementComponent() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_UCollidingPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void UCollidingPawnMovementComponent::StaticRegisterNativesUCollidingPawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister()
	{
		return UCollidingPawnMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CollidingPawn/CollidingPawnMovementComponent.h" },
				{ "ModuleRelativePath", "CollidingPawn/CollidingPawnMovementComponent.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCollidingPawnMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCollidingPawnMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00084u,
				nullptr, 0,
				nullptr, 0,
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollidingPawnMovementComponent, 4158398356);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollidingPawnMovementComponent(Z_Construct_UClass_UCollidingPawnMovementComponent, &UCollidingPawnMovementComponent::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("UCollidingPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollidingPawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
