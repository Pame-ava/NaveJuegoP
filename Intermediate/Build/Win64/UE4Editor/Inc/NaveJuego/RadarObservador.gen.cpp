// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NaveJuego/RadarObservador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadarObservador() {}
// Cross Module References
	NAVEJUEGO_API UClass* Z_Construct_UClass_ARadarObservador_NoRegister();
	NAVEJUEGO_API UClass* Z_Construct_UClass_ARadarObservador();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NaveJuego();
// End Cross Module References
	void ARadarObservador::StaticRegisterNativesARadarObservador()
	{
	}
	UClass* Z_Construct_UClass_ARadarObservador_NoRegister()
	{
		return ARadarObservador::StaticClass();
	}
	struct Z_Construct_UClass_ARadarObservador_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RangoDeteccion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RangoDeteccion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadarObservador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NaveJuego,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadarObservador_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RadarObservador.h" },
		{ "ModuleRelativePath", "RadarObservador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadarObservador_Statics::NewProp_RangoDeteccion_MetaData[] = {
		{ "Category", "Radar" },
		{ "ModuleRelativePath", "RadarObservador.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARadarObservador_Statics::NewProp_RangoDeteccion = { "RangoDeteccion", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARadarObservador, RangoDeteccion), METADATA_PARAMS(Z_Construct_UClass_ARadarObservador_Statics::NewProp_RangoDeteccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARadarObservador_Statics::NewProp_RangoDeteccion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARadarObservador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARadarObservador_Statics::NewProp_RangoDeteccion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadarObservador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadarObservador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARadarObservador_Statics::ClassParams = {
		&ARadarObservador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARadarObservador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARadarObservador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadarObservador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadarObservador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadarObservador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARadarObservador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARadarObservador, 109185401);
	template<> NAVEJUEGO_API UClass* StaticClass<ARadarObservador>()
	{
		return ARadarObservador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadarObservador(Z_Construct_UClass_ARadarObservador, &ARadarObservador::StaticClass, TEXT("/Script/NaveJuego"), TEXT("ARadarObservador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadarObservador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
