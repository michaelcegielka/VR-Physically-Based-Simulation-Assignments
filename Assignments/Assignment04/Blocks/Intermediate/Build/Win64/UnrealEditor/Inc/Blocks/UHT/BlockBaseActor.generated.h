// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/BlockBaseActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BLOCKS_BlockBaseActor_generated_h
#error "BlockBaseActor.generated.h already included, missing '#pragma once' in BlockBaseActor.h"
#endif
#define BLOCKS_BlockBaseActor_generated_h

#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_SPARSE_DATA
#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_ACCESSORS
#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockBaseActor(); \
	friend struct Z_Construct_UClass_ABlockBaseActor_Statics; \
public: \
	DECLARE_CLASS(ABlockBaseActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Blocks"), NO_API) \
	DECLARE_SERIALIZER(ABlockBaseActor) \
	virtual UObject* _getUObject() const override { return const_cast<ABlockBaseActor*>(this); }


#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockBaseActor(ABlockBaseActor&&); \
	NO_API ABlockBaseActor(const ABlockBaseActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockBaseActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockBaseActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockBaseActor) \
	NO_API virtual ~ABlockBaseActor();


#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_17_PROLOG
#define FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_SPARSE_DATA \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_ACCESSORS \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Blocks_Source_Blocks_Base_BlockBaseActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOCKS_API UClass* StaticClass<class ABlockBaseActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Blocks_Source_Blocks_Base_BlockBaseActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
