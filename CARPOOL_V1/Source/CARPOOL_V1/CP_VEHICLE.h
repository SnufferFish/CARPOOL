// Fill out your copyright notice in the Description page of Project Settings.
//Note to self: CP stands for CARPOOL
#pragma once
#include "CP_PASSENGER.h"
#include "CARPOOL_BASE.h"
#include "CP_VEHICLE.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CARPOOL_V1_API ACP_VEHICLE : public ACARPOOL_BASE
{
	GENERATED_BODY()

	//Root component of Passenger;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* VEHICLE_Root;
	
public:
	ACP_VEHICLE();

	EVehicleType VEHICLE_Type;

	//variable for static mesh, , should be assigned in derived blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Avatar)
	class UStaticMeshComponent* VEHICLE_Avatar;


	//Material for passenger mesh, should be assigned in derived blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Material)
	class UMaterial* VEHICLE_Material;



	//Number of seats in vehicle
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Seats)
	int numSeats;

	//Array to hold pointers to passengers
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<ACP_PASSENGER*>> aPassengersInVehicle;

protected:
	//To be called from Construction script when spawning derived BP's
	UFUNCTION(BlueprintCallable, Category = "Initiate Things")
	void InitiateVehicle();

	//creates and loads passengers to aPassengersInVehicle
	UFUNCTION(BlueprintCallable, Category = "Initiate Things")
	void LoadPassengers();

	
	
};
