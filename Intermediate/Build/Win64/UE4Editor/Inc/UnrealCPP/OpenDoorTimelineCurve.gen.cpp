// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/OpenDoorTimelineCurve/OpenDoorTimelineCurve.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenDoorTimelineCurve() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AOpenDoorTimelineCurve();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState();
	UNREALCPP_API UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AOpenDoorTimelineCurve::StaticRegisterNativesAOpenDoorTimelineCurve()
	{
		UClass* Class = AOpenDoorTimelineCurve::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ControlDoor", &AOpenDoorTimelineCurve::execControlDoor },
			{ "SetState", &AOpenDoorTimelineCurve::execSetState },
			{ "ToggleDoor", &AOpenDoorTimelineCurve::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "ControlDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "SetState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOpenDoorTimelineCurve, "ToggleDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve_NoRegister()
	{
		return AOpenDoorTimelineCurve::StaticClass();
	}
	struct Z_Construct_UClass_AOpenDoorTimelineCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DoorFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DoorFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ControlDoor, "ControlDoor" }, // 4090274815
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_SetState, "SetState" }, // 1295853641
		{ &Z_Construct_UFunction_AOpenDoorTimelineCurve_ToggleDoor, "ToggleDoor" }, // 2231081033
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DoorCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame = { UE4CodeGen_Private::EPropertyClass::Object, "DoorFrame", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, DoorFrame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData[] = {
		{ "Category", "OpenDoorTimelineCurve" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OpenDoorTimelineCurve/OpenDoorTimelineCurve.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door = { UE4CodeGen_Private::EPropertyClass::Object, "Door", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AOpenDoorTimelineCurve, Door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_DoorFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::NewProp_Door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOpenDoorTimelineCurve>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::ClassParams = {
		&AOpenDoorTimelineCurve::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOpenDoorTimelineCurve()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOpenDoorTimelineCurve_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOpenDoorTimelineCurve, 242803177);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOpenDoorTimelineCurve(Z_Construct_UClass_AOpenDoorTimelineCurve, &AOpenDoorTimelineCurve::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AOpenDoorTimelineCurve"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOpenDoorTimelineCurve);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
