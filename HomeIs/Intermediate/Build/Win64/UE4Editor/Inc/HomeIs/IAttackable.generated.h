// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEIS_IAttackable_generated_h
#error "IAttackable.generated.h already included, missing '#pragma once' in IAttackable.h"
#endif
#define HOMEIS_IAttackable_generated_h

#define HomeIs_Source_HomeIs_IAttackable_h_20_RPC_WRAPPERS
#define HomeIs_Source_HomeIs_IAttackable_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeIs_Source_HomeIs_IAttackable_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOMEIS_API UIAttackable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAttackable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOMEIS_API, UIAttackable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAttackable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOMEIS_API UIAttackable(UIAttackable&&); \
	HOMEIS_API UIAttackable(const UIAttackable&); \
public:


#define HomeIs_Source_HomeIs_IAttackable_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOMEIS_API UIAttackable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOMEIS_API UIAttackable(UIAttackable&&); \
	HOMEIS_API UIAttackable(const UIAttackable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOMEIS_API, UIAttackable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIAttackable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIAttackable)


#define HomeIs_Source_HomeIs_IAttackable_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIAttackable(); \
	friend struct Z_Construct_UClass_UIAttackable_Statics; \
public: \
	DECLARE_CLASS(UIAttackable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HomeIs"), HOMEIS_API) \
	DECLARE_SERIALIZER(UIAttackable)


#define HomeIs_Source_HomeIs_IAttackable_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HomeIs_Source_HomeIs_IAttackable_h_20_GENERATED_UINTERFACE_BODY() \
	HomeIs_Source_HomeIs_IAttackable_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_IAttackable_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HomeIs_Source_HomeIs_IAttackable_h_20_GENERATED_UINTERFACE_BODY() \
	HomeIs_Source_HomeIs_IAttackable_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_IAttackable_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIAttackable() {} \
public: \
	typedef UIAttackable UClassType; \
	typedef IIAttackable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HomeIs_Source_HomeIs_IAttackable_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IIAttackable() {} \
public: \
	typedef UIAttackable UClassType; \
	typedef IIAttackable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HomeIs_Source_HomeIs_IAttackable_h_17_PROLOG
#define HomeIs_Source_HomeIs_IAttackable_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_IAttackable_h_20_RPC_WRAPPERS \
	HomeIs_Source_HomeIs_IAttackable_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeIs_Source_HomeIs_IAttackable_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeIs_Source_HomeIs_IAttackable_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeIs_Source_HomeIs_IAttackable_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeIs_Source_HomeIs_IAttackable_h


#define FOREACH_ENUM_TYPE(op) \
	op(Type::PLAYER) \
	op(Type::ZOMBIE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
