// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/SwingDoor/SwingDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwingDoor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ASwingDoor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ASwingDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_CloseDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ASwingDoor_ToggleDoor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ASwingDoor::StaticRegisterNativesASwingDoor()
	{
		UClass* Class = ASwingDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ASwingDoor::execCloseDoor },
			{ "OpenDoor", &ASwingDoor::execOpenDoor },
			{ "ToggleDoor", &ASwingDoor::execToggleDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics
	{
		struct SwingDoor_eventCloseDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventCloseDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "CloseDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SwingDoor_eventCloseDoor_Parms), Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics
	{
		struct SwingDoor_eventOpenDoor_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventOpenDoor_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "OpenDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(SwingDoor_eventOpenDoor_Parms), Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics
	{
		struct SwingDoor_eventToggleDoor_Parms
		{
			FVector ForwardVector;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ForwardVector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::NewProp_ForwardVector = { UE4CodeGen_Private::EPropertyClass::Struct, "ForwardVector", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SwingDoor_eventToggleDoor_Parms, ForwardVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::NewProp_ForwardVector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwingDoor, "ToggleDoor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(SwingDoor_eventToggleDoor_Parms), Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwingDoor_ToggleDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwingDoor_ToggleDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwingDoor_NoRegister()
	{
		return ASwingDoor::StaticClass();
	}
	struct Z_Construct_UClass_ASwingDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwingDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwingDoor_CloseDoor, "CloseDoor" }, // 1870921249
		{ &Z_Construct_UFunction_ASwingDoor_OpenDoor, "OpenDoor" }, // 3571501022
		{ &Z_Construct_UFunction_ASwingDoor_ToggleDoor, "ToggleDoor" }, // 1305830147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwingDoor/SwingDoor.h" },
		{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData[] = {
		{ "Category", "BoxComp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SwingDoor/SwingDoor.h" },
		{ "ToolTip", "declare sphere comp" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp = { UE4CodeGen_Private::EPropertyClass::Object, "BoxComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(ASwingDoor, BoxComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwingDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwingDoor_Statics::NewProp_BoxComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwingDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwingDoor_Statics::ClassParams = {
		&ASwingDoor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASwingDoor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwingDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwingDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwingDoor, 402140553);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwingDoor(Z_Construct_UClass_ASwingDoor, &ASwingDoor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ASwingDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwingDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
