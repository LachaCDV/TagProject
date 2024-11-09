// Copyright Epic Games, Inc. All Rights Reserved.

#include "TagProject_CDVGameMode.h"
#include "TagProject_CDVCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATagProject_CDVGameMode::ATagProject_CDVGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
