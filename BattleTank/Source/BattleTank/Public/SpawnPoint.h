// Noah Surprenant - UnrealCourse.com

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SpawnPoint.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API USpawnPoint : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USpawnPoint();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Config
	//UPROPERTY(EditDefaultsOnly, Category = "Setup")
	// Remains commented out because UE4 bug means SpawnClass must be set in Tank_BP constructor
	// Also requires this to be public rather than private. Same bug occurs with ProjectileBlueprint in TankAimingComponent.h
	UPROPERTY(BlueprintReadWrite, Category = "Setup")
	TSubclassOf<AActor> SpawnClass;
		
};
