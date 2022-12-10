// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_TeamProjectGameMode.h"
#include "UE4_TeamProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4_TeamProjectGameMode::AUE4_TeamProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
