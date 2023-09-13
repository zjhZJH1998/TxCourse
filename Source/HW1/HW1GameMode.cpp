// Copyright Epic Games, Inc. All Rights Reserved.

#include "HW1GameMode.h"
#include "HW1Character.h"
#include "UObject/ConstructorHelpers.h"

AHW1GameMode::AHW1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
