// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCPP/ConsoleLog/ConsoleLog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleLog() {}
// Cross Module References
	UNREALCPP_API UClass* Z_Construct_UClass_AConsoleLog_NoRegister();
	UNREALCPP_API UClass* Z_Construct_UClass_AConsoleLog();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCPP();
// End Cross Module References
	void AConsoleLog::StaticRegisterNativesAConsoleLog()
	{
	}
	UClass* Z_Construct_UClass_AConsoleLog_NoRegister()
	{
		return AConsoleLog::StaticClass();
	}
	struct Z_Construct_UClass_AConsoleLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsoleLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCPP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleLog_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConsoleLog/ConsoleLog.h" },
		{ "ModuleRelativePath", "ConsoleLog/ConsoleLog.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsoleLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsoleLog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsoleLog_Statics::ClassParams = {
		&AConsoleLog::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AConsoleLog_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AConsoleLog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsoleLog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConsoleLog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConsoleLog, 1086388864);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsoleLog(Z_Construct_UClass_AConsoleLog, &AConsoleLog::StaticClass, TEXT("/Script/UnrealCPP"), TEXT("AConsoleLog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsoleLog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
