// Copyright Epic Games, Inc. All Rights Reserved.

#include "RESB_FGameMode.h"
#include "RESB_FCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARESB_FGameMode::ARESB_FGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
