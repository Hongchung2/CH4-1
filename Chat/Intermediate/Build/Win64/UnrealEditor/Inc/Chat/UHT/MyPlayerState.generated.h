// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MyPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAT_MyPlayerState_generated_h
#error "MyPlayerState.generated.h already included, missing '#pragma once' in MyPlayerState.h"
#endif
#define CHAT_MyPlayerState_generated_h

#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayerState(); \
	friend struct Z_Construct_UClass_AMyPlayerState_Statics; \
public: \
	DECLARE_CLASS(AMyPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Chat"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyPlayerState(AMyPlayerState&&); \
	AMyPlayerState(const AMyPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayerState) \
	NO_API virtual ~AMyPlayerState();


#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_7_PROLOG
#define FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_10_INCLASS_NO_PURE_DECLS \
	FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAT_API UClass* StaticClass<class AMyPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_UnrealEngine_Chat_Source_Chat_Public_Player_MyPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
