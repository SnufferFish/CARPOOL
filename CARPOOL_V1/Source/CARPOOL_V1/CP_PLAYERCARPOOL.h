// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CARPOOL_BASE.h"
#include "CP_VEHICLE.h"
#include "CP_PASSENGER.h"
#include "GameFramework/Pawn.h"
#include "CP_PLAYERCARPOOL.generated.h"

UCLASS(Blueprintable)
class CARPOOL_V1_API ACP_PLAYERCARPOOL : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACP_PLAYERCARPOOL();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USpringArmComponent* PlayerCameraSpringArm;
	UCameraComponent*    PlayerCamera;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


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
	TArray<TSubclassOf<ACP_PASSENGER>> aPassengersInVehicle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Name)
	EPassengerName PASSENGER_Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Age)
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerNameFromHUD = FText::GetEmpty();


	
};
