// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/ChatInput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_ChatInput_generated_h
#error "ChatInput.generated.h already included, missing '#pragma once' in ChatInput.h"
#endif
#define CHAT_ChatInput_generated_h

#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatInputTextCommitted);


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChatInput(); \
	friend struct Z_Construct_UClass_UChatInput_Statics; \
public: \
	DECLARE_CLASS(UChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Chat"), NO_API) \
	DECLARE_SERIALIZER(UChatInput)


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChatInput(UChatInput&&); \
	UChatInput(const UChatInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChatInput) \
	NO_API virtual ~UChatInput();


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_10_PROLOG
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_INCLASS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_API UClass* StaticClass<class UChatInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_UnrealEngine_Chat_Source_Chat_Public_UI_ChatInput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
