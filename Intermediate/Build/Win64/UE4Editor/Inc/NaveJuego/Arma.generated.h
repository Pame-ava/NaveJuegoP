// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVEJUEGO_Arma_generated_h
#error "Arma.generated.h already included, missing '#pragma once' in Arma.h"
#endif
#define NAVEJUEGO_Arma_generated_h

#define NaveJuego_Source_NaveJuego_Arma_h_13_SPARSE_DATA
#define NaveJuego_Source_NaveJuego_Arma_h_13_RPC_WRAPPERS
#define NaveJuego_Source_NaveJuego_Arma_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NaveJuego_Source_NaveJuego_Arma_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVEJUEGO_API UArma(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArma) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVEJUEGO_API, UArma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArma); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVEJUEGO_API UArma(UArma&&); \
	NAVEJUEGO_API UArma(const UArma&); \
public:


#define NaveJuego_Source_NaveJuego_Arma_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVEJUEGO_API UArma(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVEJUEGO_API UArma(UArma&&); \
	NAVEJUEGO_API UArma(const UArma&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVEJUEGO_API, UArma); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UArma); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UArma)


#define NaveJuego_Source_NaveJuego_Arma_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUArma(); \
	friend struct Z_Construct_UClass_UArma_Statics; \
public: \
	DECLARE_CLASS(UArma, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NaveJuego"), NAVEJUEGO_API) \
	DECLARE_SERIALIZER(UArma)


#define NaveJuego_Source_NaveJuego_Arma_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NaveJuego_Source_NaveJuego_Arma_h_13_GENERATED_UINTERFACE_BODY() \
	NaveJuego_Source_NaveJuego_Arma_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_Arma_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NaveJuego_Source_NaveJuego_Arma_h_13_GENERATED_UINTERFACE_BODY() \
	NaveJuego_Source_NaveJuego_Arma_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_Arma_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IArma() {} \
public: \
	typedef UArma UClassType; \
	typedef IArma ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NaveJuego_Source_NaveJuego_Arma_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IArma() {} \
public: \
	typedef UArma UClassType; \
	typedef IArma ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NaveJuego_Source_NaveJuego_Arma_h_10_PROLOG
#define NaveJuego_Source_NaveJuego_Arma_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_Arma_h_13_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_Arma_h_13_RPC_WRAPPERS \
	NaveJuego_Source_NaveJuego_Arma_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_Arma_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_Arma_h_13_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_Arma_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_Arma_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVEJUEGO_API UClass* StaticClass<class UArma>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaveJuego_Source_NaveJuego_Arma_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
