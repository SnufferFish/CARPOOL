// Base class of all carpool class to give enum access
//Note to self: CP stands for CARPOOL
#include "CARPOOL_V1.h"
#include "CARPOOL_BASE.h"


// Sets default values
ACARPOOL_BASE::ACARPOOL_BASE()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void ACARPOOL_BASE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACARPOOL_BASE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

