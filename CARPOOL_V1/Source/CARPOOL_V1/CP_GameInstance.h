// Fill out your copyright notice in the Description page of Project Settings.

/*
	Player sees screen to set up game
	- Enter player name and info
	- Choose carpool type
		-Car -> Player + 3 other passengers*
		-Van -> Player + 5 other passengers*
		-Bus -> Player + 7 other passengers*
		*other passengers auto created

	- then level is loaded with this information
	- player begins playing game.
*/

#pragma once
#include "CARPOOL_BASE.h"
#include "Engine/GameInstance.h"
#include "CP_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class CARPOOL_V1_API UCP_GameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	UCP_GameInstance(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CharacterSelectValue)
	int32 CharacterSelectValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerNameFromHUD = FText::GetEmpty();

	
	

	
	
};
