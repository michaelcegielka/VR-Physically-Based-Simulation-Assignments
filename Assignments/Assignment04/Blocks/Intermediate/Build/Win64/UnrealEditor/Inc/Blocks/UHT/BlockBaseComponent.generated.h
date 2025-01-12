// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/BlockBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOCKS_BlockBaseComponent_generated_h
#error "BlockBaseComponent.generated.h already included, missing '#pragma once' in BlockBaseComponent.h"
#endif
#define BLOCKS_BlockBaseComponent_generated_h

#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlockTransform_Statics; \
	BLOCKS_API static class UScriptStruct* StaticStruct();


template<> BLOCKS_API UScriptStruct* StaticStruct<struct FBlockTransform>();

#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_SPARSE_DATA
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlockBaseComponent(); \
	friend struct Z_Construct_UClass_UBlockBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UBlockBaseComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blocks"), NO_API) \
	DECLARE_SERIALIZER(UBlockBaseComponent)


#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlockBaseComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlockBaseComponent(UBlockBaseComponent&&); \
	NO_API UBlockBaseComponent(const UBlockBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlockBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlockBaseComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlockBaseComponent) \
	NO_API virtual ~UBlockBaseComponent();


#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_231_PROLOG
#define FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_SPARSE_DATA \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_INCLASS_NO_PURE_DECLS \
	FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h_234_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOCKS_API UClass* StaticClass<class UBlockBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blocks_Source_Blocks_Base_BlockBaseComponent_h


#define FOREACH_ENUM_BLOCKROTATION(op) \
	op(Default) \
	op(Rotate90) \
	op(Rotate180) \
	op(Rotate270) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
