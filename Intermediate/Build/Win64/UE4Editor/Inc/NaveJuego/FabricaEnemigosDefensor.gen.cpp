// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/FabricaEnemigosDefensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaEnemigosDefensor() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaEnemigosDefensor_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaEnemigosDefensor();
	NAVEJUEGO_API UClass* Z_Construct_UClass_AFabricaEnemigos();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void AFabricaEnemigosDefensor::StaticRegisterNativesAFabricaEnemigosDefensor()
	{
	}
	UClass* Z_Construct_UClass_AFabricaEnemigosDefensor_NoRegister()
	{
		return AFabricaEnemigosDefensor::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaEnemigosDefensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AFabricaEnemigos,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FabricaEnemigosDefensor.h" },
		{ "ModuleRelativePath", "FabricaEnemigosDefensor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaEnemigosDefensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::ClassParams = {
		&AFabricaEnemigosDefensor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaEnemigosDefensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaEnemigosDefensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaEnemigosDefensor, 371950063);
	template<> NAVEJUEGO_API UClass* StaticClass<AFabricaEnemigosDefensor>()
	{
		return AFabricaEnemigosDefensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaEnemigosDefensor(Z_Construct_UClass_AFabricaEnemigosDefensor, &AFabricaEnemigosDefensor::StaticClass, TEXT("/Script/NaveJuego"), TEXT("AFabricaEnemigosDefensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaEnemigosDefensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
