#include "Game/MyGameModeBase.h"
#include "Game/MyGameStateBase.h"
#include "Player/MyPlayerController.h"
#include "EngineUtils.h"
#include "Player/MyPlayerState.h"

void AMyGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);

	/*AMyGameStateBase* MyGameStateBase = GetGameState<AMyGameStateBase>();
	if (IsValid(MyGameStateBase) == true)
	{
		MyGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXX"));
	}

	AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(NewPlayer);
	if (IsValid(MyPlayerController) == true)
	{
		AllPlayerControllers.Add(MyPlayerController);
	}*/

	AMyPlayerController* MyPlayerController = Cast<AMyPlayerController>(NewPlayer);
	if (IsValid(MyPlayerController) == true)
	{
		MyPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
		AllPlayerControllers.Add(MyPlayerController);

		AMyPlayerState* MyPS = MyPlayerController->GetPlayerState<AMyPlayerState>();
		if (IsValid(MyPS) == true)
		{
			MyPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		AMyGameStateBase* MyGameStateBase = GetGameState<AMyGameStateBase>();
		if (IsValid(MyGameStateBase) == true)
		{
			MyGameStateBase->MulticastRPCBroadcastLoginMessage(MyPS->PlayerNameString);
		}
	}
}

FString AMyGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });

	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool AMyGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0' || UniqueDigits.Contains(C))
			{
				bIsUnique = false;
				break;
			}

			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;

	} while (false);

	return bCanPlay;
}

FString AMyGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	SecretNumberString = GenerateSecretNumber();
}

void AMyGameModeBase::PrintChatMessageString(AMyPlayerController* InChattingPlayerController, const FString& InChatMessageString)
{
	FString GuessNumberString;
	if (InChatMessageString.Split(TEXT(": "), nullptr, &GuessNumberString) == false)
	{
		GuessNumberString = InChatMessageString;
	}
	GuessNumberString.TrimStartAndEndInline();

	if (IsGuessNumberString(GuessNumberString) == true)
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);
		IncreaseGuessCount(InChattingPlayerController);

		FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
		for (TActorIterator<AMyPlayerController> It(GetWorld()); It; ++It)
		{
			AMyPlayerController* MyPlayerController = *It;
			if (IsValid(MyPlayerController) == true)
			{
				MyPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
			}
		}

		int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
		JudgeGame(InChattingPlayerController, StrikeCount);
	}
	else
	{
		for (TActorIterator<AMyPlayerController> It(GetWorld()); It; ++It)
		{
			AMyPlayerController* MyPlayerController = *It;
			if (IsValid(MyPlayerController) == true)
			{
				MyPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}

		InChattingPlayerController->ClientRPCPrintChatMessageString(TEXT("Please Enter Again"));
	}
}

void AMyGameModeBase::IncreaseGuessCount(AMyPlayerController* InChattingPlayerController)
{
	AMyPlayerState* MyPS = InChattingPlayerController->GetPlayerState<AMyPlayerState>();
	if (IsValid(MyPS) == true)
	{
		MyPS->CurrentGuessCount++;
	}
}

void AMyGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& MyPlayerController : AllPlayerControllers)
	{
		AMyPlayerState* MyPS = MyPlayerController->GetPlayerState<AMyPlayerState>();
		if (IsValid(MyPS) == true)
		{
			MyPS->CurrentGuessCount = 0;
		}
	}
}

void AMyGameModeBase::JudgeGame(AMyPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		AMyPlayerState* MyPS = InChattingPlayerController->GetPlayerState<AMyPlayerState>();
		for (const auto& MyPlayerController : AllPlayerControllers)
		{
			if (IsValid(MyPS) == true)
			{
				FString CombinedMessageString = MyPS->PlayerNameString + TEXT(" has won the game.");
				MyPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& MyPlayerController : AllPlayerControllers)
		{
			AMyPlayerState* MyPS = MyPlayerController->GetPlayerState<AMyPlayerState>();
			if (IsValid(MyPS) == true)
			{
				if (MyPS->CurrentGuessCount < MyPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& MyPlayerController : AllPlayerControllers)
			{
				MyPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}