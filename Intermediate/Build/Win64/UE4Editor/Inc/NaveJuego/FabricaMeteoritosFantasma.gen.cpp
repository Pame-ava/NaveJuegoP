// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/FabricaMeteoritosFantasma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMeteoritosFantasma() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritosFantasma_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritosFantasma();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritos();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AFabricaMeteoritosFantasma::StaticRegisterNativesAFabricaMeteoritosFantasma()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMeteoritosFantasma_NoRegister()
	{
		return AFabricaMeteoritosFantasma::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMeteoritos,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaMeteoritosFantasma.h" },
		{ "ModuleRelativePath", "FabricaMeteoritosFantasma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMeteoritosFantasma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::ClassParams = {
		&AFabricaMeteoritosFantasma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMeteoritosFantasma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMeteoritosFantasma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMeteoritosFantasma, 509740887);
	template<> NAVEJUEGO_API UClass* StaticClass<AFabricaMeteoritosFantasma>()
	{
		return AFabricaMeteoritosFantasma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMeteoritosFantasma(Z_Construct_UClass_AFabricaMeteoritosFantasma, &AFabricaMeteoritosFantasma::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AFabricaMeteoritosFantasma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMeteoritosFantasma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
