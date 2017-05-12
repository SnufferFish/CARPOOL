// Fill out your copyright notice in the Description page of Project Settings.
//Note to self: CP stands for CARPOOL
#pragma once

#include "CARPOOL_BASE.h"
#include "CP_PASSENGER.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class CARPOOL_V1_API ACP_PASSENGER : public ACARPOOL_BASE
{
	GENERATED_BODY()

	//Root component of Passenger;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USceneComponent* PASSENGER_Root;



public:

	ACP_PASSENGER(const FObjectInitializer& ObjectInitializer);


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Name)
	EPassengerName PASSENGER_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category =Age)
	int PASSENGER_Age;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IS_Driver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Job)
	EPassengerJob PASSENGER_Job;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Mood)
	EPassengerMood PASSENGER_Mood;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Health)
	int PASSENGER_Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CrazyFactor)
	int CRAZY_FACTOR;

	//variable for static mesh, , should be assigned in derived blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Avatar)
	class UStaticMeshComponent* PASSENGER_Avatar;

	
	//Material for passenger mesh, should be assigned in derived blueprints
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Material)
	class UMaterial* PASSENGER_Material;



	//To be called from Construction script when spawning derived BP's
	UFUNCTION(BlueprintCallable, Category = "Initiate Things")
	void InitiatePassenger();




	



	
	
	
	
};
