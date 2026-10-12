// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_MyPlayerController_generated_h
#error "MyPlayerController.generated.h already included, missing '#pragma once' in MyPlayerController.h"
#endif
#define CHAT_MyPlayerController_generated_h

#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& InChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString);


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_CALLBACK_WRAPPERS
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerController(); \
	friend struct Z_Construct_UClass_AMyPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chat"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerController(AMyPlayerController&&); \
	AMyPlayerController(const AMyPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerController) \
	NO_API virtual ~AMyPlayerController();


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_9_PROLOG
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_CALLBACK_WRAPPERS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_API UClass* StaticClass<class AMyPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
