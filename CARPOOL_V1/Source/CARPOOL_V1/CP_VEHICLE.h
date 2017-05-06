// Fill out your copyright notice in the Description page of Project Settings.
//Note to self: CP stands for CARPOOL
#pragma once

#include "CARPOOL_BASE.h"
#include "CP_VEHICLE.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CARPOOL_V1_API ACP_VEHICLE : public ACARPOOL_BASE
{
	GENERATED_BODY()
	
public:

	EVehicleType VEHICLE_Type;
	
	
	
};
