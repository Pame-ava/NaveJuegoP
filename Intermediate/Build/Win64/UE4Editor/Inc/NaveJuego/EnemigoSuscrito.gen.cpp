// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoSuscrito.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSuscrito() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoSuscrito_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoSuscrito();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UObservador_NoRegister();
// End Cross Module References
	void AEnemigoSuscrito::StaticRegisterNativesAEnemigoSuscrito()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoSuscrito_NoRegister()
	{
		return AEnemigoSuscrito::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoSuscrito_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoSuscrito_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoSuscrito_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoSuscrito.h" },
		{ "ModuleRelativePath", "EnemigoSuscrito.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigoSuscrito_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObservador_NoRegister, (int32)VTABLE_OFFSET(AEnemigoSuscrito, IObservador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoSuscrito_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSuscrito>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSuscrito_Statics::ClassParams = {
		&AEnemigoSuscrito::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoSuscrito_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSuscrito_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoSuscrito()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoSuscrito_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoSuscrito, 4036776315);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoSuscrito>()
	{
		return AEnemigoSuscrito::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoSuscrito(Z_Construct_UClass_AEnemigoSuscrito, &AEnemigoSuscrito::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoSuscrito"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSuscrito);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
