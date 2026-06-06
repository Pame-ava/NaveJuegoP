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
#ifdef NAVEJUEGO_NaveJuegoProjectile_generated_h
#error "NaveJuegoProjectile.generated.h already included, missing '#pragma once' in NaveJuegoProjectile.h"
#endif
#define NAVEJUEGO_NaveJuegoProjectile_generated_h

#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_SPARSE_DATA
#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveJuegoProjectile(); \
	friend struct Z_Construct_UClass_ANaveJuegoProjectile_Statics; \
public: \
	DECLARE_CLASS(ANaveJuegoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ANaveJuegoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ANaveJuegoProjectile*>(this); }


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANaveJuegoProjectile(); \
	friend struct Z_Construct_UClass_ANaveJuegoProjectile_Statics; \
public: \
	DECLARE_CLASS(ANaveJuegoProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ANaveJuegoProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<ANaveJuegoProjectile*>(this); }


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveJuegoProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveJuegoProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJuegoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJuegoProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJuegoProjectile(ANaveJuegoProjectile&&); \
	NO_API ANaveJuegoProjectile(const ANaveJuegoProjectile&); \
public:


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJuegoProjectile(ANaveJuegoProjectile&&); \
	NO_API ANaveJuegoProjectile(const ANaveJuegoProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJuegoProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJuegoProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveJuegoProjectile)


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(ANaveJuegoProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ANaveJuegoProjectile, ProjectileMovement); }


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_13_PROLOG
#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_RPC_WRAPPERS \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_INCLASS \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_INCLASS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVEJUEGO_API UClass* StaticClass<class ANaveJuegoProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaveJuego_Source_NaveJuego_NaveJuegoProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
