// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVEJUEGO_NaveJuegoPawn_generated_h
#error "NaveJuegoPawn.generated.h already included, missing '#pragma once' in NaveJuegoPawn.h"
#endif
#define NAVEJUEGO_NaveJuegoPawn_generated_h

#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_SPARSE_DATA
#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_RPC_WRAPPERS
#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveJuegoPawn(); \
	friend struct Z_Construct_UClass_ANaveJuegoPawn_Statics; \
public: \
	DECLARE_CLASS(ANaveJuegoPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ANaveJuegoPawn)


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANaveJuegoPawn(); \
	friend struct Z_Construct_UClass_ANaveJuegoPawn_Statics; \
public: \
	DECLARE_CLASS(ANaveJuegoPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NaveJuego"), NO_API) \
	DECLARE_SERIALIZER(ANaveJuegoPawn)


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveJuegoPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveJuegoPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJuegoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJuegoPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJuegoPawn(ANaveJuegoPawn&&); \
	NO_API ANaveJuegoPawn(const ANaveJuegoPawn&); \
public:


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJuegoPawn(ANaveJuegoPawn&&); \
	NO_API ANaveJuegoPawn(const ANaveJuegoPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJuegoPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJuegoPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveJuegoPawn)


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShipMeshComponent() { return STRUCT_OFFSET(ANaveJuegoPawn, ShipMeshComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ANaveJuegoPawn, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANaveJuegoPawn, CameraBoom); }


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_9_PROLOG
#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_RPC_WRAPPERS \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_INCLASS \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_PRIVATE_PROPERTY_OFFSET \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_SPARSE_DATA \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_INCLASS_NO_PURE_DECLS \
	NaveJuego_Source_NaveJuego_NaveJuegoPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVEJUEGO_API UClass* StaticClass<class ANaveJuegoPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NaveJuego_Source_NaveJuego_NaveJuegoPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
