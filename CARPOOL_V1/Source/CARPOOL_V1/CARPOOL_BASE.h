// Global Base class of all carpool class to give enum access
//Note to self: CP stands for CARPOOL
#pragma once

#include "GameFramework/Actor.h"
#include "CARPOOL_BASE.generated.h"

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
