// Noah Surprenant - UnrealCourse.com

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

};
