// Copyright Epic Games, Inc. All Rights Reserved.

#include "CellCircuitGameMode.h"
#include "CellCircuitCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACellCircuitGameMode::ACellCircuitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
