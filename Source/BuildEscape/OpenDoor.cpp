// /written by Brandy Sawyer - based on Udemy Course Unreal Engine c++ Developer


#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UOpenDoor::BeginPlay() {
	Super::BeginPlay();

	//Determine Door Rotation
	InitialYaw = GetOwner()->GetActorRotation().Yaw;
	CurrentYaw = InitialYaw;
	TargetYaw += InitialYaw;

	// ...
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (PressurePlate->IsOverlappingActor(ActorThatOpen)) {
		OpenDoor(DeltaTime);
	}
	

	// ...
}

void UOpenDoor::OpenDoor(float DeltaTime) {

	//UE_LOG(LogTemp, Warning, TEXT("FRotator: %s "), *GetOwner()->GetActorRotation().ToString());
	//UE_LOG(LogTemp, Warning, TEXT("Yaw: %f "), GetOwner()->GetActorRotation().Yaw);

	//Slowly open door
	CurrentYaw = FMath::Lerp(CurrentYaw, TargetYaw, DeltaTime * 0.75f);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);

}