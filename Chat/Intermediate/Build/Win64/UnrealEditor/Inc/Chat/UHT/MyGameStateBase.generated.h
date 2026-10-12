// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MyGameStateBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_MyGameStateBase_generated_h
#error "MyGameStateBase.generated.h already included, missing '#pragma once' in MyGameStateBase.h"
#endif
#define CHAT_MyGameStateBase_generated_h

#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& InNameString); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage);


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_CALLBACK_WRAPPERS
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameStateBase(); \
	friend struct Z_Construct_UClass_AMyGameStateBase_Statics; \
public: \
	DECLARE_CLASS(AMyGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chat"), NO_API) \
	DECLARE_SERIALIZER(AMyGameStateBase)


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameStateBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyGameStateBase(AMyGameStateBase&&); \
	AMyGameStateBase(const AMyGameStateBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameStateBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameStateBase) \
	NO_API virtual ~AMyGameStateBase();


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_7_PROLOG
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_CALLBACK_WRAPPERS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_API UClass* StaticClass<class AMyGameStateBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_UnrealEngine_Chat_Source_Chat_Public_Game_MyGameStateBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
