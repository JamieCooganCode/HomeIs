// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/HomeIsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHomeIsGameMode() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AHomeIsGameMode_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AHomeIsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
// End Cross Module References
	void AHomeIsGameMode::StaticRegisterNativesAHomeIsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AHomeIsGameMode_NoRegister()
	{
		return AHomeIsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AHomeIsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHomeIsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHomeIsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HomeIsGameMode.h" },
		{ "ModuleRelativePath", "HomeIsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHomeIsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHomeIsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHomeIsGameMode_Statics::ClassParams = {
		&AHomeIsGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AHomeIsGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHomeIsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHomeIsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHomeIsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHomeIsGameMode, 1960420904);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHomeIsGameMode(Z_Construct_UClass_AHomeIsGameMode, &AHomeIsGameMode::StaticClass, TEXT("/Script/HomeIs"), TEXT("AHomeIsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHomeIsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
