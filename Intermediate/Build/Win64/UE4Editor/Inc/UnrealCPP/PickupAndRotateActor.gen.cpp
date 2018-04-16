// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PickupAndRotateActor/PickupAndRotateActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupAndRotateActor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_APickupAndRotateActor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_APickupAndRotateActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_APickupAndRotateActor_Pickup();
	UNREALCPP_API UFunction* Z_Construct_UFunction_APickupAndRotateActor_RotateActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APickupAndRotateActor::StaticRegisterNativesAPickupAndRotateActor()
	{
		UClass* Class = APickupAndRotateActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Pickup", &APickupAndRotateActor::execPickup },
			{ "RotateActor", &APickupAndRotateActor::execRotateActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APickupAndRotateActor_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupAndRotateActor, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickupAndRotateActor_RotateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupAndRotateActor, "RotateActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupAndRotateActor_NoRegister()
	{
		return APickupAndRotateActor::StaticClass();
	}
	UClass* Z_Construct_UClass_APickupAndRotateActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APickupAndRotateActor_Pickup, "Pickup" }, // 858392735
				{ &Z_Construct_UFunction_APickupAndRotateActor_RotateActor, "RotateActor" }, // 1480396705
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
				{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[] = {
				{ "Category", "PickupAndRotateActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingComp = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APickupAndRotateActor, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_HoldingComp_MetaData, ARRAY_COUNT(NewProp_HoldingComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[] = {
				{ "Category", "PickupAndRotateActor" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MyMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APickupAndRotateActor, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MyMesh_MetaData, ARRAY_COUNT(NewProp_MyMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoldingComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APickupAndRotateActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APickupAndRotateActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(APickupAndRotateActor, 3143386189);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupAndRotateActor(Z_Construct_UClass_APickupAndRotateActor, &APickupAndRotateActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("APickupAndRotateActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupAndRotateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
