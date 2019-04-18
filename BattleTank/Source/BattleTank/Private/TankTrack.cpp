// Noah Surprenant - UnrealCourse.com


#include "TankTrack.h"

void UTankTrack::SetThrottle(float Throttle)
{
	// Log
	//auto Time = GetWorld()->GetTimeSeconds();
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s throttle: %f"), *Name, Throttle);
}
