// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/EnemigoBloqueador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoBloqueador() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoBloqueador_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigoBloqueador();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AEnemigo();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AEnemigoBloqueador::StaticRegisterNativesAEnemigoBloqueador()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoBloqueador_NoRegister()
	{
		return AEnemigoBloqueador::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoBloqueador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoBloqueador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBloqueador_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "EnemigoBloqueador.h" },
		{ "ModuleRelativePath", "EnemigoBloqueador.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoBloqueador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoBloqueador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoBloqueador_Statics::ClassParams = {
		&AEnemigoBloqueador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoBloqueador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoBloqueador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoBloqueador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoBloqueador, 1764185672);
	template<> NAVEJUEGO_API UClass* StaticClass<AEnemigoBloqueador>()
	{
		return AEnemigoBloqueador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoBloqueador(Z_Construct_UClass_AEnemigoBloqueador, &AEnemigoBloqueador::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AEnemigoBloqueador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoBloqueador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
