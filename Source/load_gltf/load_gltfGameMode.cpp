// Copyright Epic Games, Inc. All Rights Reserved.

#include "load_gltfGameMode.h"
#include "load_gltfCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aload_gltfGameMode::Aload_gltfGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
