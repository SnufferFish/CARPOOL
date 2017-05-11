// Fill out your copyright notice in the Description page of Project Settings.

#include "CARPOOL_V1.h"
#include "CARPOOL_V1GameModeBase.h"
#include "CP_PC.h"


ACARPOOL_V1GameModeBase::ACARPOOL_V1GameModeBase()
{
	//FailSafe
	PlayerControllerClass = ACP_PC::StaticClass();

	// Blueprinted Version, relies on the asset path obtained from the editor
	static ConstructorHelpers::FClassFinder<ACP_PC> CARPOOL_Controller(TEXT("ACP_CP'/Game/Blueprints/CP_PC-BP.CP_PC-BP_C'"));

	if (CARPOOL_Controller.Class != NULL)
	{
		PlayerControllerClass = CARPOOL_Controller.Class;
	}
}

