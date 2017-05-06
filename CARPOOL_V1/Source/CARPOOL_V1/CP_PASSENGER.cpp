// Fill out your copyright notice in the Description page of Project Settings.
//Note to self: CP stands for CARPOOL
//hi
#include "CARPOOL_V1.h"
#include "CP_PASSENGER.h"




ACP_PASSENGER::ACP_PASSENGER()
{
	//Create dummy root scene component
	PASSENGER_Root = CreateDefaultSubobject<USceneComponent>(TEXT("PASSENGER_Root"));
	RootComponent = PASSENGER_Root;

	PASSENGER_Avatar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Avatar"));
}