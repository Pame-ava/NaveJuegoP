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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVEJUEGO_API UClass* Z_Construct_UClass_UObservador_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoInicio_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoInicio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuntoDestino_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PuntoDestino;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimiteMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimiteMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimiteMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoInicio_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoBloqueador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoInicio = { "PuntoInicio", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoBloqueador, PuntoInicio), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoInicio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoInicio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoDestino_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoBloqueador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoDestino = { "PuntoDestino", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoBloqueador, PuntoDestino), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoDestino_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoDestino_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMin_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoBloqueador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMin = { "LimiteMin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoBloqueador, LimiteMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMax_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "ModuleRelativePath", "EnemigoBloqueador.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMax = { "LimiteMax", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoBloqueador, LimiteMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMax_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoBloqueador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoInicio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_PuntoDestino,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoBloqueador_Statics::NewProp_LimiteMax,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemigoBloqueador_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObservador_NoRegister, (int32)VTABLE_OFFSET(AEnemigoBloqueador, IObservador), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoBloqueador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoBloqueador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoBloqueador_Statics::ClassParams = {
		&AEnemigoBloqueador::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoBloqueador_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoBloqueador_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AEnemigoBloqueador, 3103739228);
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
