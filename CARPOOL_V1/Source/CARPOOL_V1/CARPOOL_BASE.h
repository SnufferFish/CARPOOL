// Global Base class of all carpool class to give enum access
//Note to self: CP stands for CARPOOL
#pragma once

#include "GameFramework/Actor.h"
#include "CARPOOL_BASE.generated.h"

//Enum for Vehicle Type
UENUM(BlueprintType)
enum class EVehicleType : uint8
{
	CAR = 1 UMETA(DisplayName = "Car"),
	VAN = 2 UMETA(DisplayName = "Van"),
	BUS = 3 UMETA(DisplayName = "Bus"),
	MOTORCYCLE = 4 UMETA(DisplayName = "Motor Cycle"),
	BLANK = 100 UMETA(DisplayName = "Blank")
};

UENUM(BlueprintType)
enum class EPassengerName : uint8
{
	PLAYER = 1 UMETA(DisplayName = "Player 1"),
	BILL = 2 UMETA(DisplayName = "Bill"),
	SARA = 3 UMETA(DisplayName = "Sara"),
	JIM = 4 UMETA(DisplayName = "JIM"),
	FRANK = 5 UMETA(DisplayName = "Frank"),
	BLANK = 100 UMETA(DisplayName = "Blank")
};

UENUM(BlueprintType)
enum class EPassengerJob : uint8
{
	ENGINEER = 1 UMETA(DisplayName = "Engineer"),
	SECRETARY = 2 UMETA(DisplayName = "Secretary"),
	JANITOR = 3 UMETA(DisplayName = "Janitor"),
	BLANK = 100 UMETA(DisplayName = "Blank")
};

UENUM(BlueprintType)
enum class EPassengerMood : uint8
{
	HAPPY = 1 UMETA(DisplayName = "Happy"),
	SAD = 2 UMETA(Display = "SAD"),
	MAD = 3 UMETA(Display = "MAD"),
	PSYCHOTIC = 4 UMETA(DisplayName = "Psychotic"),
	BLANK = 100 UMETA(DisplayName = "Blank")
};


//Custom ENUMS ^^

UCLASS()
class CARPOOL_V1_API ACARPOOL_BASE : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACARPOOL_BASE();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
