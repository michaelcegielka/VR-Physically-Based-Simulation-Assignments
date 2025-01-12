// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blocks/Blocks/Block2x2Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock2x2Actor() {}
// Cross Module References
	BLOCKS_API UClass* Z_Construct_UClass_ABlock2x2Actor();
	BLOCKS_API UClass* Z_Construct_UClass_ABlock2x2Actor_NoRegister();
	BLOCKS_API UClass* Z_Construct_UClass_ABlockBaseActor();
	UPackage* Z_Construct_UPackage__Script_Blocks();
// End Cross Module References
	void ABlock2x2Actor::StaticRegisterNativesABlock2x2Actor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlock2x2Actor);
	UClass* Z_Construct_UClass_ABlock2x2Actor_NoRegister()
	{
		return ABlock2x2Actor::StaticClass();
	}
	struct Z_Construct_UClass_ABlock2x2Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock2x2Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABlockBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Blocks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock2x2Actor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock2x2Actor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blocks/Block2x2Actor.h" },
		{ "ModuleRelativePath", "Blocks/Block2x2Actor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock2x2Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock2x2Actor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlock2x2Actor_Statics::ClassParams = {
		&ABlock2x2Actor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlock2x2Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlock2x2Actor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABlock2x2Actor()
	{
		if (!Z_Registration_Info_UClass_ABlock2x2Actor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlock2x2Actor.OuterSingleton, Z_Construct_UClass_ABlock2x2Actor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlock2x2Actor.OuterSingleton;
	}
	template<> BLOCKS_API UClass* StaticClass<ABlock2x2Actor>()
	{
		return ABlock2x2Actor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock2x2Actor);
	ABlock2x2Actor::~ABlock2x2Actor() {}
	struct Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Blocks_Block2x2Actor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Blocks_Block2x2Actor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlock2x2Actor, ABlock2x2Actor::StaticClass, TEXT("ABlock2x2Actor"), &Z_Registration_Info_UClass_ABlock2x2Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlock2x2Actor), 3268969776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Blocks_Block2x2Actor_h_548728517(TEXT("/Script/Blocks"),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Blocks_Block2x2Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Blocks_Block2x2Actor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
