// Fill out your copyright notice in the Description page of Project Settings.

#include "CARPOOL_V1.h"
#include "CP_PLAYERCARPOOL.h"
#include "CP_GameInstance.h"


// Sets default values
ACP_PLAYERCARPOOL::ACP_PLAYERCARPOOL()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	PlayerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringArm"));
	PlayerCameraSpringArm->SetupAttachment(RootComponent);
	PlayerCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, -40.0f, 0.0f));// x, z, y
	PlayerCameraSpringArm->TargetArmLength = 400.0f;
	PlayerCameraSpringArm->bEnableCameraLag = true;
	PlayerCameraSpringArm->CameraLagSpeed = 3.0f;

	PlayerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("GameCamera"));
	PlayerCamera->SetupAttachment(PlayerCameraSpringArm, USpringArmComponent::SocketName);

	PLAYER_Avatar = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Avatar"));

	//get and cast game instance
	/*UCP_GameInstance* CPI = Cast<UCP_GameInstance>(GetGameInstance());
	if (CPI)
	{
		//Get player name from Game Instance
		PlayerNameFromHUD = CPI->PlayerNameFromHUD;
		//Get Carpool type from GameInstance, default set here for now
		CARPOOL_Type = EVehicleType::CAR;
		//Get player age from game instance
		PLAYER_Age = CPI->PassengerAge;

		//Get is driver from game instance, default set here for now
		IS_Driver = true;

		//Get Job from game instance
		PLAYER_Job = CPI->SelectedJob;

	}*/ //this is a blueprint class, these should be sent in BP. When blueprint is created, these don't exist yet
	//setting defaults here now for testing

	//Default for testing
	//PlayerNameFromHUD = CPI->PlayerNameFromHUD;
	//Default for testing
	CARPOOL_Type = EVehicleType::CAR;
	//Default for testing
	PLAYER_Age = 29;

	//Default for testing
	IS_Driver = true;

	//Default for testing
	PLAYER_Job = EPassengerJob::ENGINEER;


	//Player mood, blank here but can change as game goes on
	PLAYER_Mood = EPassengerMood::BLANK;

	//Player health
	PLAYER_Health = 100;

	//Crzy factor, changes as game goes on
	CRAZY_FACTOR = 0;




	//Take control of the default player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void ACP_PLAYERCARPOOL::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACP_PLAYERCARPOOL::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACP_PLAYERCARPOOL::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

