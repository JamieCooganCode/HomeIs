// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/Testing.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTesting() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_ATesting_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_ATesting();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	void ATesting::StaticRegisterNativesATesting()
	{
	}
	UClass* Z_Construct_UClass_ATesting_NoRegister()
	{
		return ATesting::StaticClass();
	}
	struct Z_Construct_UClass_ATesting_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATesting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATesting_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Testing.h" },
		{ "ModuleRelativePath", "Testing.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATesting_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(ATesting, IIAttackable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATesting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATesting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATesting_Statics::ClassParams = {
		&ATesting::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ATesting_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATesting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATesting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATesting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATesting, 4239658699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATesting(Z_Construct_UClass_ATesting, &ATesting::StaticClass, TEXT("/Script/HomeIs"), TEXT("ATesting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATesting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
