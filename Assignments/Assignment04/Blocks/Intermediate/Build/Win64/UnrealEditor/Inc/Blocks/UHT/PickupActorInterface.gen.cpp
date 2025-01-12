// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blocks/Interface/PickupActorInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupActorInterface() {}
// Cross Module References
	BLOCKS_API UClass* Z_Construct_UClass_UPickupActorInterface();
	BLOCKS_API UClass* Z_Construct_UClass_UPickupActorInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blocks();
// End Cross Module References
	DEFINE_FUNCTION(IPickupActorInterface::execDrop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drop_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPickupActorInterface::execPickup)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pickup_Implementation(Z_Param_AttachTo);
		P_NATIVE_END;
	}
	struct PickupActorInterface_eventPickup_Parms
	{
		USceneComponent* AttachTo;
	};
	void IPickupActorInterface::Drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void IPickupActorInterface::Pickup(USceneComponent* AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UPickupActorInterface::StaticRegisterNativesUPickupActorInterface()
	{
		UClass* Class = UPickupActorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &IPickupActorInterface::execDrop },
			{ "Pickup", &IPickupActorInterface::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPickupActorInterface_Drop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_Drop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PickupActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupActorInterface_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupActorInterface, nullptr, "Drop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_Drop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickupActorInterface_Drop_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UPickupActorInterface_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupActorInterface_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PickupActorInterface_eventPickup_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData), Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::NewProp_AttachTo_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::NewProp_AttachTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interface/PickupActorInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPickupActorInterface, nullptr, "Pickup", nullptr, nullptr, Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::PropPointers), sizeof(PickupActorInterface_eventPickup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::PropPointers) < 2048);
	static_assert(sizeof(PickupActorInterface_eventPickup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPickupActorInterface_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPickupActorInterface_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupActorInterface);
	UClass* Z_Construct_UClass_UPickupActorInterface_NoRegister()
	{
		return UPickupActorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPickupActorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupActorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Blocks,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupActorInterface_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPickupActorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPickupActorInterface_Drop, "Drop" }, // 4239073565
		{ &Z_Construct_UFunction_UPickupActorInterface_Pickup, "Pickup" }, // 516149102
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupActorInterface_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupActorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Interface/PickupActorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupActorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupActorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupActorInterface_Statics::ClassParams = {
		&UPickupActorInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupActorInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupActorInterface_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPickupActorInterface()
	{
		if (!Z_Registration_Info_UClass_UPickupActorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupActorInterface.OuterSingleton, Z_Construct_UClass_UPickupActorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupActorInterface.OuterSingleton;
	}
	template<> BLOCKS_API UClass* StaticClass<UPickupActorInterface>()
	{
		return UPickupActorInterface::StaticClass();
	}
	UPickupActorInterface::UPickupActorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupActorInterface);
	UPickupActorInterface::~UPickupActorInterface() {}
	static FName NAME_UPickupActorInterface_Drop = FName(TEXT("Drop"));
	void IPickupActorInterface::Execute_Drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupActorInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPickupActorInterface_Drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPickupActorInterface*)(O->GetNativeInterfaceAddress(UPickupActorInterface::StaticClass())))
		{
			I->Drop_Implementation();
		}
	}
	static FName NAME_UPickupActorInterface_Pickup = FName(TEXT("Pickup"));
	void IPickupActorInterface::Execute_Pickup(UObject* O, USceneComponent* AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPickupActorInterface::StaticClass()));
		PickupActorInterface_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPickupActorInterface_Pickup);
		if (Func)
		{
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPickupActorInterface*)(O->GetNativeInterfaceAddress(UPickupActorInterface::StaticClass())))
		{
			I->Pickup_Implementation(AttachTo);
		}
	}
	struct Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupActorInterface, UPickupActorInterface::StaticClass, TEXT("UPickupActorInterface"), &Z_Registration_Info_UClass_UPickupActorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupActorInterface), 3712491684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_365604635(TEXT("/Script/Blocks"),
		Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Blocks_Source_Blocks_Interface_PickupActorInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
