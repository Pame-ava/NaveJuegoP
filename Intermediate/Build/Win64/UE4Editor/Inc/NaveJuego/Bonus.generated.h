// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NAVEJUEGO_Bonus_generated_h
#error "Bonus.generated.h already included, missing '#pragma once' in Bonus.h"
#endif
#define NAVEJUEGO_Bonus_generated_h

#define NaveJuego_Source_NaveJuego_Bonus_h_14_SPARSE_DATA
#define NaveJuego_Source_NaveJuego_Bonus_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAplicarBonus);


#define NaveJuego_Source_NaveJuego_Bonus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAplicarBonus);


#define NaveJuego_Source_NaveJuego_Bonus_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABonus(); \
	friend struct Z_Construct_UClass_ABonus_Statics; \
public: \
	DECLARE_CLASS(ABonus, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ABonus)


#define NaveJuego_Source_NaveJuego_Bonus_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABonus(); \
	friend struct Z_Construct_UClass_ABonus_Statics; \
public: \
	DECLARE_CLASS(ABonus, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ABonus)


#define NaveJuego_Source_NaveJuego_Bonus_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABonus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABonus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonus(ABonus&&); \
	NO_API ABonus(const ABonus&); \
public:


#define NaveJuego_Source_NaveJuego_Bonus_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABonus(ABonus&&); \
	NO_API ABonus(const ABonus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABonus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABonus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABonus)


#define NaveJuego_Source_NaveJuego_Bonus_h_14_PRIVATE_PROPERTY_OFFSET
#define NaveJuego_Source_NaveJuego_Bonus_h_11_PROLOG
#define NaveJuego_Source_NaveJuego_Bonus_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_Bonus_h_14_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_Bonus_h_14_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_Bonus_h_14_RPC_WRAPPERS \
	NaveJuego_Source_NaveJuego_Bonus_h_14_INCLASS \
	NaveJuego_Source_NaveJuego_Bonus_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_Bonus_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_Bonus_h_14_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_Bonus_h_14_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_Bonus_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_Bonus_h_14_INCLASS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_Bonus_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVEJUEGO_API UClass* StaticClass<class ABonus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaveJuego_Source_NaveJuego_Bonus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
