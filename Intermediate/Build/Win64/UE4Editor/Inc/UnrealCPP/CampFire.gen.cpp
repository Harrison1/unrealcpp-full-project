// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HealthBar/CampFire.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampFire() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_ACampFire_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_ACampFire();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ACampFire_OnOverlapBegin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALCPP_API UFunction* Z_Construct_UFunction_ACampFire_OnOverlapEnd();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void ACampFire::StaticRegisterNativesACampFire()
	{
		UClass* Class = ACampFire::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ACampFire::execOnOverlapBegin },
			{ "OnOverlapEnd", &ACampFire::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ACampFire_OnOverlapBegin()
	{
		struct CampFire_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_SweepResult_MetaData, ARRAY_COUNT(NewProp_SweepResult_MetaData)) };
			auto NewProp_bFromSweep_SetBit = [](void* Obj){ ((CampFire_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CampFire_eventOnOverlapBegin_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFromSweep_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SweepResult,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFromSweep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
				{ "ToolTip", "declare overlap begin function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACampFire, "OnOverlapBegin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00420401, sizeof(CampFire_eventOnOverlapBegin_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ACampFire_OnOverlapEnd()
	{
		struct CampFire_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(CampFire_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OverlappedComp_MetaData, ARRAY_COUNT(NewProp_OverlappedComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherBodyIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlappedComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
				{ "ToolTip", "declare overlap end function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ACampFire, "OnOverlapEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, sizeof(CampFire_eventOnOverlapEnd_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACampFire_NoRegister()
	{
		return ACampFire::StaticClass();
	}
	UClass* Z_Construct_UClass_ACampFire()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ACampFire_OnOverlapBegin, "OnOverlapBegin" }, // 2616970309
				{ &Z_Construct_UFunction_ACampFire_OnOverlapEnd, "OnOverlapEnd" }, // 2293270636
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HealthBar/CampFire.h" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyHit_MetaData[] = {
				{ "Category", "CampFire" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MyHit = { UE4CodeGen_Private::EPropertyClass::Struct, "MyHit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(ACampFire, MyHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_MyHit_MetaData, ARRAY_COUNT(NewProp_MyHit_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCharacter_MetaData[] = {
				{ "Category", "CampFire" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "MyCharacter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ACampFire, MyCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_MyCharacter_MetaData, ARRAY_COUNT(NewProp_MyCharacter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyDamageClass_MetaData[] = {
				{ "Category", "CampFire" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_MyDamageClass = { UE4CodeGen_Private::EPropertyClass::Class, "MyDamageClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(ACampFire, MyDamageClass), Z_Construct_UClass_UDamageType_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_MyDamageClass_MetaData, ARRAY_COUNT(NewProp_MyDamageClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyBoxComponent_MetaData[] = {
				{ "Category", "CampFire" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyBoxComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MyBoxComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACampFire, MyBoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_MyBoxComponent_MetaData, ARRAY_COUNT(NewProp_MyBoxComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fire_MetaData[] = {
				{ "Category", "CampFire" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "HealthBar/CampFire.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Fire = { UE4CodeGen_Private::EPropertyClass::Object, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(ACampFire, Fire), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(NewProp_Fire_MetaData, ARRAY_COUNT(NewProp_Fire_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyHit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyCharacter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyDamageClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MyBoxComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Fire,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACampFire>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACampFire::StaticClass,
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
	IMPLEMENT_CLASS(ACampFire, 1547407302);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACampFire(Z_Construct_UClass_ACampFire, &ACampFire::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("ACampFire"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACampFire);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
