// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/FabricaMeteoritos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMeteoritos() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritos_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritos();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AFabricaMeteoritos::StaticRegisterNativesAFabricaMeteoritos()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMeteoritos_NoRegister()
	{
		return AFabricaMeteoritos::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMeteoritos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMeteoritos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMeteoritos_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaMeteoritos.h" },
		{ "ModuleRelativePath", "FabricaMeteoritos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMeteoritos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMeteoritos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMeteoritos_Statics::ClassParams = {
		&AFabricaMeteoritos::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMeteoritos_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMeteoritos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMeteoritos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMeteoritos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMeteoritos, 415554037);
	template<> NAVEJUEGO_API UClass* StaticClass<AFabricaMeteoritos>()
	{
		return AFabricaMeteoritos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMeteoritos(Z_Construct_UClass_AFabricaMeteoritos, &AFabricaMeteoritos::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AFabricaMeteoritos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMeteoritos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
