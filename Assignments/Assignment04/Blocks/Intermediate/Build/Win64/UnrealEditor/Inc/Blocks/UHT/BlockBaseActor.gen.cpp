// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blocks/Base/BlockBaseActor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "Blocks/Base/BlockBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockBaseActor() {}
// Cross Module References
	BLOCKS_API UClass* Z_Construct_UClass_ABlockBaseActor();
	BLOCKS_API UClass* Z_Construct_UClass_ABlockBaseActor_NoRegister();
	BLOCKS_API UClass* Z_Construct_UClass_UBlockBaseComponent_NoRegister();
	BLOCKS_API UClass* Z_Construct_UClass_UPickupActorInterface_NoRegister();
	BLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FBlockTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UPackage* Z_Construct_UPackage__Script_Blocks();
// End Cross Module References
	DEFINE_FUNCTION(ABlockBaseActor::execOnOverlapEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_t);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapEnd(Z_Param_t,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABlockBaseActor::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_t);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_t,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ABlockBaseActor::StaticRegisterNativesABlockBaseActor()
	{
		UClass* Class = ABlockBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ABlockBaseActor::execOnOverlapBegin },
			{ "OnOverlapEnd", &ABlockBaseActor::execOnOverlapEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics
	{
		struct BlockBaseActor_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* t;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_t;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_t_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapBegin_Parms, t), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_t_MetaData), Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_t_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BlockBaseActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlockBaseActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Called when another component collides roughly with a component of this actor */" },
#endif
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when another component collides roughly with a component of this actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockBaseActor, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::BlockBaseActor_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::BlockBaseActor_eventOnOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics
	{
		struct BlockBaseActor_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* t;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_t_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_t;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_t_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_t = { "t", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapEnd_Parms, t), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_t_MetaData), Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_t_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlockBaseActor_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_t,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Called when another component collides roughly with a component of this actor */" },
#endif
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when another component collides roughly with a component of this actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlockBaseActor, nullptr, "OnOverlapEnd", nullptr, nullptr, Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::BlockBaseActor_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::BlockBaseActor_eventOnOverlapEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlockBaseActor);
	UClass* Z_Construct_UClass_ABlockBaseActor_NoRegister()
	{
		return ABlockBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_ABlockBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponentRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponentRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockBaseComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockBaseComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_blocks_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_blocks_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_blocks_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_blocks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Blocks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlockBaseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlockBaseActor_OnOverlapBegin, "OnOverlapBegin" }, // 3632813101
		{ &Z_Construct_UFunction_ABlockBaseActor_OnOverlapEnd, "OnOverlapEnd" }, // 672251266
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockBaseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Base/BlockBaseActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_PrimitiveComponentRoot_MetaData[] = {
		{ "Category", "Blocks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The root component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The root component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_PrimitiveComponentRoot = { "PrimitiveComponentRoot", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockBaseActor, PrimitiveComponentRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_PrimitiveComponentRoot_MetaData), Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_PrimitiveComponentRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_BlockBaseComponent_MetaData[] = {
		{ "Category", "Blocks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The initial assigned clamping block */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The initial assigned clamping block" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_BlockBaseComponent = { "BlockBaseComponent", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockBaseActor, BlockBaseComponent), Z_Construct_UClass_UBlockBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_BlockBaseComponent_MetaData), Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_BlockBaseComponent_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_ValueProp = { "blocks", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FBlockTransform, METADATA_PARAMS(0, nullptr) }; // 263523532
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_Key_KeyProp = { "blocks_Key", nullptr, (EPropertyFlags)0x0000000000080001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlockBaseComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_MetaData[] = {
		{ "Category", "Blocks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* All block components mapped to their current position relative to this actor */" },
#endif
		{ "ModuleRelativePath", "Base/BlockBaseActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All block components mapped to their current position relative to this actor" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks = { "blocks", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlockBaseActor, blocks), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_MetaData), Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_MetaData) }; // 263523532
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_PrimitiveComponentRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_BlockBaseComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockBaseActor_Statics::NewProp_blocks,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABlockBaseActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPickupActorInterface_NoRegister, (int32)VTABLE_OFFSET(ABlockBaseActor, IPickupActorInterface), false },  // 3712491684
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlockBaseActor_Statics::ClassParams = {
		&ABlockBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlockBaseActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlockBaseActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlockBaseActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABlockBaseActor()
	{
		if (!Z_Registration_Info_UClass_ABlockBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlockBaseActor.OuterSingleton, Z_Construct_UClass_ABlockBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABlockBaseActor.OuterSingleton;
	}
	template<> BLOCKS_API UClass* StaticClass<ABlockBaseActor>()
	{
		return ABlockBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockBaseActor);
	ABlockBaseActor::~ABlockBaseActor() {}
	struct Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABlockBaseActor, ABlockBaseActor::StaticClass, TEXT("ABlockBaseActor"), &Z_Registration_Info_UClass_ABlockBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlockBaseActor), 2880625261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_452503235(TEXT("/Script/Blocks"),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
