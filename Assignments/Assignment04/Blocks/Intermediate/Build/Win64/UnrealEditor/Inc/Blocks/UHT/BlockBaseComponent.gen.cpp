// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blocks/Base/BlockBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockBaseComponent() {}
// Cross Module References
	BLOCKS_API UClass* Z_Construct_UClass_UBlockBaseComponent();
	BLOCKS_API UClass* Z_Construct_UClass_UBlockBaseComponent_NoRegister();
	BLOCKS_API UEnum* Z_Construct_UEnum_Blocks_BlockRotation();
	BLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FBlockTransform();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Blocks();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_BlockRotation;
	static UEnum* BlockRotation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_BlockRotation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_BlockRotation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Blocks_BlockRotation, (UObject*)Z_Construct_UPackage__Script_Blocks(), TEXT("BlockRotation"));
		}
		return Z_Registration_Info_UEnum_BlockRotation.OuterSingleton;
	}
	template<> BLOCKS_API UEnum* StaticEnum<BlockRotation>()
	{
		return BlockRotation_StaticEnum();
	}
	struct Z_Construct_UEnum_Blocks_BlockRotation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enumerators[] = {
		{ "Default", (int64)Default },
		{ "Rotate90", (int64)Rotate90 },
		{ "Rotate180", (int64)Rotate180 },
		{ "Rotate270", (int64)Rotate270 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enum_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Defines how a component can be rotated relative to the actor. In this case, a rotation is only possible at the z-Axis (Yaw) \n* and only in steps of 90 degree.\n*/" },
#endif
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "Default" },
		{ "ModuleRelativePath", "Base/BlockBaseComponent.h" },
		{ "Rotate180.DisplayName", "Rotate180" },
		{ "Rotate180.Name", "Rotate180" },
		{ "Rotate270.DisplayName", "Rotate270" },
		{ "Rotate270.Name", "Rotate270" },
		{ "Rotate90.DisplayName", "Rotate90" },
		{ "Rotate90.Name", "Rotate90" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how a component can be rotated relative to the actor. In this case, a rotation is only possible at the z-Axis (Yaw)\n* and only in steps of 90 degree." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Blocks_BlockRotation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Blocks,
		nullptr,
		"BlockRotation",
		"BlockRotation",
		Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Blocks_BlockRotation_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Blocks_BlockRotation()
	{
		if (!Z_Registration_Info_UEnum_BlockRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_BlockRotation.InnerSingleton, Z_Construct_UEnum_Blocks_BlockRotation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_BlockRotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlockTransform;
class UScriptStruct* FBlockTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlockTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlockTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockTransform, (UObject*)Z_Construct_UPackage__Script_Blocks(), TEXT("BlockTransform"));
	}
	return Z_Registration_Info_UScriptStruct_BlockTransform.OuterSingleton;
}
template<> BLOCKS_API UScriptStruct* StaticStruct<FBlockTransform>()
{
	return FBlockTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlockTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Defines a transformation of a BlockBaseComponent (in the space of voxels). \n*/" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Base/BlockBaseComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a transformation of a BlockBaseComponent (in the space of voxels)." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Blocks,
		nullptr,
		&NewStructOps,
		"BlockTransform",
		nullptr,
		0,
		sizeof(FBlockTransform),
		alignof(FBlockTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlockTransform_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_BlockTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlockTransform.InnerSingleton, Z_Construct_UScriptStruct_FBlockTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlockTransform.InnerSingleton;
	}
	void UBlockBaseComponent::StaticRegisterNativesUBlockBaseComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlockBaseComponent);
	UClass* Z_Construct_UClass_UBlockBaseComponent_NoRegister()
	{
		return UBlockBaseComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBlockBaseComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlockBaseComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Blocks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockBaseComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlockBaseComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "Base/BlockBaseComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Base/BlockBaseComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlockBaseComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlockBaseComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlockBaseComponent_Statics::ClassParams = {
		&UBlockBaseComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlockBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlockBaseComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlockBaseComponent()
	{
		if (!Z_Registration_Info_UClass_UBlockBaseComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlockBaseComponent.OuterSingleton, Z_Construct_UClass_UBlockBaseComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlockBaseComponent.OuterSingleton;
	}
	template<> BLOCKS_API UClass* StaticClass<UBlockBaseComponent>()
	{
		return UBlockBaseComponent::StaticClass();
	}
	UBlockBaseComponent::UBlockBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlockBaseComponent);
	UBlockBaseComponent::~UBlockBaseComponent() {}
	struct Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::EnumInfo[] = {
		{ BlockRotation_StaticEnum, TEXT("BlockRotation"), &Z_Registration_Info_UEnum_BlockRotation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 21545527U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ScriptStructInfo[] = {
		{ FBlockTransform::StaticStruct, Z_Construct_UScriptStruct_FBlockTransform_Statics::NewStructOps, TEXT("BlockTransform"), &Z_Registration_Info_UScriptStruct_BlockTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlockTransform), 263523532U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlockBaseComponent, UBlockBaseComponent::StaticClass, TEXT("UBlockBaseComponent"), &Z_Registration_Info_UClass_UBlockBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlockBaseComponent), 2908560416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_293394874(TEXT("/Script/Blocks"),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
