// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/PickupAndRotateActor/PickupAndRotateActor.h"
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
	struct Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupAndRotateActor, "Pickup", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupAndRotateActor_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupAndRotateActor_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupAndRotateActor, "RotateActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupAndRotateActor_RotateActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupAndRotateActor_RotateActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupAndRotateActor_NoRegister()
	{
		return APickupAndRotateActor::StaticClass();
	}
	struct Z_Construct_UClass_APickupAndRotateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupAndRotateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupAndRotateActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupAndRotateActor_Pickup, "Pickup" }, // 1358496220
		{ &Z_Construct_UFunction_APickupAndRotateActor_RotateActor, "RotateActor" }, // 1101892842
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData[] = {
		{ "Category", "PickupAndRotateActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp = { UE4CodeGen_Private::EPropertyClass::Object, "HoldingComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APickupAndRotateActor, HoldingComp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData[] = {
		{ "Category", "PickupAndRotateActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupAndRotateActor/PickupAndRotateActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh = { UE4CodeGen_Private::EPropertyClass::Object, "MyMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(APickupAndRotateActor, MyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_HoldingComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupAndRotateActor_Statics::NewProp_MyMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupAndRotateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupAndRotateActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupAndRotateActor_Statics::ClassParams = {
		&APickupAndRotateActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APickupAndRotateActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupAndRotateActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupAndRotateActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupAndRotateActor, 1052573908);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupAndRotateActor(Z_Construct_UClass_APickupAndRotateActor, &APickupAndRotateActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("APickupAndRotateActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupAndRotateActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
