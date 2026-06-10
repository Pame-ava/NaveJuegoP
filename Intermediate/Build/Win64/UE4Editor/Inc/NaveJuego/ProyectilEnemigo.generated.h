// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef NAVEJUEGO_ProyectilEnemigo_generated_h
#error "ProyectilEnemigo.generated.h already included, missing '#pragma once' in ProyectilEnemigo.h"
#endif
#define NAVEJUEGO_ProyectilEnemigo_generated_h

#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_SPARSE_DATA
#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnImpact);


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnImpact);


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectilEnemigo(); \
	friend struct Z_Construct_UClass_AProyectilEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProyectilEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(AProyectilEnemigo)


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProyectilEnemigo(); \
	friend struct Z_Construct_UClass_AProyectilEnemigo_Statics; \
public: \
	DECLARE_CLASS(AProyectilEnemigo, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(AProyectilEnemigo)


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectilEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectilEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectilEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectilEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectilEnemigo(AProyectilEnemigo&&); \
	NO_API AProyectilEnemigo(const AProyectilEnemigo&); \
public:


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectilEnemigo(AProyectilEnemigo&&); \
	NO_API AProyectilEnemigo(const AProyectilEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectilEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectilEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectilEnemigo)


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_PRIVATE_PROPERTY_OFFSET
#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_11_PROLOG
#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_RPC_WRAPPERS \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_INCLASS \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_INCLASS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_ProyectilEnemigo_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVEJUEGO_API UClass* StaticClass<class AProyectilEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaveJuego_Source_NaveJuego_ProyectilEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
