// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HomeIs/IAttackable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAttackable() {}
// Cross Module References
	HOMEIS_API UEnum* Z_Construct_UEnum_HomeIs_Type();
	UPackage* Z_Construct_UPackage__Script_HomeIs();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable_NoRegister();
	HOMEIS_API UClass* Z_Construct_UClass_UIAttackable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
// End Cross Module References
	static UEnum* Type_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HomeIs_Type, Z_Construct_UPackage__Script_HomeIs(), TEXT("Type"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_Type(Type_StaticEnum, TEXT("/Script/HomeIs"), TEXT("Type"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HomeIs_Type_CRC() { return 2797350830U; }
	UEnum* Z_Construct_UEnum_HomeIs_Type()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HomeIs();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("Type"), 0, Get_Z_Construct_UEnum_HomeIs_Type_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "Type::PLAYER", (int64)Type::PLAYER },
				{ "Type::ZOMBIE", (int64)Type::ZOMBIE },
				{ "Type::BARRICADE", (int64)Type::BARRICADE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BARRICADE.DisplayName", "Barricade" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "IAttackable.h" },
				{ "PLAYER.DisplayName", "Player" },
				{ "ZOMBIE.DisplayName", "Zombie" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HomeIs,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"Type",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UIAttackable::StaticRegisterNativesUIAttackable()
	{
	}
	UClass* Z_Construct_UClass_UIAttackable_NoRegister()
	{
		return UIAttackable::StaticClass();
	}
	struct Z_Construct_UClass_UIAttackable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAttackable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HomeIs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "IAttackable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAttackable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIAttackable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIAttackable_Statics::ClassParams = {
		&UIAttackable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000840A1u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UIAttackable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAttackable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIAttackable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIAttackable, 2074195390);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIAttackable(Z_Construct_UClass_UIAttackable, &UIAttackable::StaticClass, TEXT("/Script/HomeIs"), TEXT("UIAttackable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAttackable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
