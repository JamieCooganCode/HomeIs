// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/Public/TestBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestBox() {}
// Cross Module References
	HOMEIS_API UClass* Z_Construct_UClass_ATestBox_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_ATestBox();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
// End Cross Module References
	void ATestBox::StaticRegisterNativesATestBox()
	{
	}
	UClass* Z_Construct_UClass_ATestBox_NoRegister()
	{
		return ATestBox::StaticClass();
	}
	struct Z_Construct_UClass_ATestBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestBox_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestBox.h" },
		{ "ModuleRelativePath", "Public/TestBox.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATestBox_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAttackable_NoRegister, (int32)VTABLE_OFFSET(ATestBox, IIAttackable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATestBox_Statics::ClassParams = {
		&ATestBox::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		InterfaceParams, ARRAY_COUNT(InterfaceParams),
		METADATA_PARAMS(Z_Construct_UClass_ATestBox_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATestBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATestBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATestBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestBox, 2197673429);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestBox(Z_Construct_UClass_ATestBox, &ATestBox::StaticClass, TEXT("/Script/HomeIs"), TEXT("ATestBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
