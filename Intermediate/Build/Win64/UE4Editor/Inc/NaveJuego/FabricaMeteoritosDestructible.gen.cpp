// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/FabricaMeteoritosDestructible.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaMeteoritosDestructible() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritosDestructible_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritosDestructible();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaMeteoritos();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AFabricaMeteoritosDestructible::StaticRegisterNativesAFabricaMeteoritosDestructible()
	{
	}
	UClass* Z_Construct_UClass_AFabricaMeteoritosDestructible_NoRegister()
	{
		return AFabricaMeteoritosDestructible::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaMeteoritos,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaMeteoritosDestructible.h" },
		{ "ModuleRelativePath", "FabricaMeteoritosDestructible.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaMeteoritosDestructible>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::ClassParams = {
		&AFabricaMeteoritosDestructible::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaMeteoritosDestructible()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaMeteoritosDestructible_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaMeteoritosDestructible, 398729767);
	template<> NAVEJUEGO_API UClass* StaticClass<AFabricaMeteoritosDestructible>()
	{
		return AFabricaMeteoritosDestructible::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaMeteoritosDestructible(Z_Construct_UClass_AFabricaMeteoritosDestructible, &AFabricaMeteoritosDestructible::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AFabricaMeteoritosDestructible"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaMeteoritosDestructible);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
