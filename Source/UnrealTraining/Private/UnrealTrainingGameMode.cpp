// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealTraining/Public/UnrealTrainingGameMode.h"
#include "UObject/ConstructorHelpers.h"

AUnrealTrainingGameMode::AUnrealTrainingGameMode()
{
	// set default pawn class to our Blueprinted character
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	// if (PlayerPawnBPClass.Class != NULL)
	// {
	// 	DefaultPawnClass = PlayerPawnBPClass.Class;
	// }
}
