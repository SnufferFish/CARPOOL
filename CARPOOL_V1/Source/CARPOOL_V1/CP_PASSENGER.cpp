// Fill out your copyright notice in the Description page of Project Settings.
//Note to self: CP stands for CARPOOL
//hi
#include "CARPOOL_V1.h"
#include "CP_PASSENGER.h"




ACP_PASSENGER::ACP_PASSENGER(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	//Create dummy root scene component
	PASSENGER_Root = CreateDefaultSubobject<USceneComponent>(TEXT("PASSENGER_Root"));
	RootComponent = PASSENGER_Root;

	PASSENGER_Avatar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Avatar"));
	PASSENGER_Material = CreateDefaultSubobject<UMaterial>(TEXT("Material"));

	//Give passenger an age, health, crazy factor
	PASSENGER_Age = (FMath::Rand() % 50) + 18;
	PASSENGER_Health = 100;
	CRAZY_FACTOR = (FMath::Rand() % 4) + 1; //4 being the most crazy
	InitiatePassenger();
}

void ACP_PASSENGER::InitiatePassenger()
{
	/*int iName = (FMath::Rand() % 4) + 2;
	switch (iName)
	{
	case 2:
	{
		PASSENGER_Name = EPassengerName::BILL;
		break;
	}
	case 3:
	{
		PASSENGER_Name = EPassengerName::FRANK;
		break;
	}

	case 4:
	{
		PASSENGER_Name = EPassengerName::JIM;
		break;
	}
	case 5:
	{
		PASSENGER_Name = EPassengerName::SARA;
		break;
	}
	default:
		break;

	}//end of name assign switch
	*/


	PASSENGER_Age = (FMath::Rand() % 50) + 18;

	int iJob = (FMath::Rand() % 3) + 1;
	switch (iJob)
	{
	case 1:
	{
		PASSENGER_Job = EPassengerJob::ENGINEER;
		break;
	}
	case 2:
	{
		PASSENGER_Job = EPassengerJob::JANITOR;
		break;
	}
	case 3:
	{
		PASSENGER_Job = EPassengerJob::SECRETARY;
		break;
	}

	default:
		break;

	}//end of job switch

	int iMood = (FMath::Rand() % 4) + 1;
	switch (iMood)
	{
	case 1:
	{
		PASSENGER_Mood = EPassengerMood::HAPPY;
		break;
	}
	case 2:
	{
		PASSENGER_Mood = EPassengerMood::SAD;
		break;
	}
	case 3:
	{
		PASSENGER_Mood = EPassengerMood::MAD;
		break;
	}
	case 4:
	{
		PASSENGER_Mood = EPassengerMood::PSYCHOTIC;
		break;
	}
	default:
		break;
	}//end of mood switch



}
