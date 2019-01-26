// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/ZombieSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieSpawner() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_AZombieSpawner_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_AZombieSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
// End Cross Module References
	void AZombieSpawner::StaticRegisterNativesAZombieSpawner()
	{
	}
	UClass* Z_Construct_UClass_AZombieSpawner_NoRegister()
	{
		return AZombieSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AZombieSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZombieSpawner.h" },
		{ "ModuleRelativePath", "ZombieSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieSpawner_Statics::ClassParams = {
		&AZombieSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AZombieSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieSpawner, 3040882647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieSpawner(Z_Construct_UClass_AZombieSpawner, &AZombieSpawner::StaticClass, TEXT("/Script/HomeIs"), TEXT("AZombieSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
