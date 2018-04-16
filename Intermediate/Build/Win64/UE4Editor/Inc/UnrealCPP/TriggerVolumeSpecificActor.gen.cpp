// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerVolumeSpecificActor() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapBegin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapEnd();
// End Cross Module References
	void ATriggerVolumeSpecificActor::StaticRegisterNativesATriggerVolumeSpecificActor()
	{
		UClass* Class = ATriggerVolumeSpecificActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ATriggerVolumeSpecificActor::execOnOverlapBegin },
			{ "OnOverlapEnd", &ATriggerVolumeSpecificActor::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapBegin()
	{
		struct TriggerVolumeSpecificActor_eventOnOverlapBegin_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TriggerVolumeSpecificActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TriggerVolumeSpecificActor_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h" },
				{ "ToolTip", "overlap begin function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerVolumeSpecificActor, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TriggerVolumeSpecificActor_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapEnd()
	{
		struct TriggerVolumeSpecificActor_eventOnOverlapEnd_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TriggerVolumeSpecificActor_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(TriggerVolumeSpecificActor_eventOnOverlapEnd_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h" },
				{ "ToolTip", "overlap end function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerVolumeSpecificActor, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(TriggerVolumeSpecificActor_eventOnOverlapEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor_NoRegister()
	{
		return ATriggerVolumeSpecificActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerVolumeSpecificActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ATriggerVolume,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapBegin, "OnOverlapBegin" }, // 2591541009
				{ &Z_Construct_UFunction_ATriggerVolumeSpecificActor_OnOverlapEnd, "OnOverlapEnd" }, // 257326437
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Brush Physics Object Display Rendering Physics Input Blueprint" },
				{ "IncludePath", "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h" },
				{ "ModuleRelativePath", "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecificActor_MetaData[] = {
				{ "Category", "TriggerVolumeSpecificActor" },
				{ "ModuleRelativePath", "TriggerVolumeSpecificActor/TriggerVolumeSpecificActor.h" },
				{ "ToolTip", "specific actor for overlap" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpecificActor = { UE4CodeGen_Private::EPropertyClass::Object, "SpecificActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ATriggerVolumeSpecificActor, SpecificActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_SpecificActor_MetaData, ARRAY_COUNT(NewProp_SpecificActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpecificActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATriggerVolumeSpecificActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATriggerVolumeSpecificActor::StaticClass,
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
	IMPLEMENT_CLASS(ATriggerVolumeSpecificActor, 2709015533);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerVolumeSpecificActor(Z_Construct_UClass_ATriggerVolumeSpecificActor, &ATriggerVolumeSpecificActor::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ATriggerVolumeSpecificActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerVolumeSpecificActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
