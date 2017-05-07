// Fill out your copyright notice in the Description page of Project Settings.

#include "CARPOOL_V1.h"
#include "CP_VEHICLE.h"

ACP_VEHICLE::ACP_VEHICLE()
{
	//Create dummy root scene component
	VEHICLE_Root = CreateDefaultSubobject<USceneComponent>(TEXT("VEHICLE_Root"));
	RootComponent = VEHICLE_Root;

	VEHICLE_Avatar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Avatar"));
}

void ACP_VEHICLE::InitiateVehicle()
{
	int iVehType = (FMath::Rand() % 4) + 1;
	switch (iVehType)
	{
	case 1:
	{
		VEHICLE_Type = EVehicleType::CAR;
		numSeats = 4;
		break;
	}
	case 2:
	{
		VEHICLE_Type = EVehicleType::VAN;
		numSeats = 6;
	}
	case 3:
	{
		VEHICLE_Type = EVehicleType::BUS;
		numSeats = 8;
		break;
	}
	default:
	{
		VEHICLE_Type = EVehicleType::CAR;
		numSeats = 4;
		break;
	}
		
	}
}

void ACP_VEHICLE::LoadPassengers()
{
	//simple for loop base on numbers of seats to create add passengers to array;

	/* example how to create objects. Transforms, etc don't matter because you won't see the passengers
	short Spawner = FMath::Rand() % SpawnTargets.Num();
		short Obstical = FMath::Rand() % ObstaclesToSpawn.Num();
		float CapsuleOffset = 0.0f;

		FActorSpawnParameters SpawnInfo;

		FTransform myTrans = SpawnTargets[Spawner]->GetTransform();
		myTrans.SetLocation(FVector(SpawnPoint, myTrans.GetLocation().Y, myTrans.GetLocation().Z));

		ABBDObstacle* newObs = GetWorld()->SpawnActor<ABBDObstacle>(ObstaclesToSpawn[Obstical], myTrans, SpawnInfo);
	
	
	*/
}


