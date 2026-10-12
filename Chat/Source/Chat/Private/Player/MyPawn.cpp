#include "Player/MyPawn.h"
#include "Chat.h"

void AMyPawn::BeginPlay()
{
	Super::BeginPlay();

	FString NetRoleString = ChatFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::BeginPlay() %s [%s]"), *ChatFunctionLibrary::GetNetModeString(this), *NetRoleString);
	ChatFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}

void AMyPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	FString NetRoleString = ChatFunctionLibrary::GetRoleString(this);
	FString CombinedString = FString::Printf(TEXT("CXPawn::PossessedBy() %s [%s]"), *ChatFunctionLibrary::GetNetModeString(this), *NetRoleString);
	ChatFunctionLibrary::MyPrintString(this, CombinedString, 10.f);
}