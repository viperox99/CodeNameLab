// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodeNameLabGameMode.h"
#include "CodeNameLabCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodeNameLabGameMode::ACodeNameLabGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
