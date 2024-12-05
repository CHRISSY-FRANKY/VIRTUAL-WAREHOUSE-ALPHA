// Copyright Epic Games, Inc. All Rights Reserved.

#include "VirtualWarehouseGameMode.h"
#include "VirtualWarehouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVirtualWarehouseGameMode::AVirtualWarehouseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
