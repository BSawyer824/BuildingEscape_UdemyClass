// /written by Brandy Sawyer - based on Udemy Course Unreal Engine c++ Developer

#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "OpenDoor.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UOpenDoor::UOpenDoor() {
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}


// Called when the game starts
void UOpenDoor::BeginPlay() {
	Super::BeginPlay();

	//Determine Door Rotation
	InitialYaw = GetOwner()->GetActorRotation().Yaw;
	CurrentYaw = InitialYaw;
	OpenAngle += InitialYaw;

	//shows error if null pointer error
	if (!PressurePlate) {
		UE_LOG(LogTemp, Error, TEXT("%S has the open door component on it, but no pressure plate set"), *GetOwner()->GetName());
	}

	//associate player controller 
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
	
}


// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (PressurePlate && PressurePlate->IsOverlappingActor(ActorThatOpens)) {
		OpenDoor(DeltaTime);
		DoorLastOpened = GetWorld()->GetTimeSeconds();
	}
	else {
		if ((GetWorld()->GetTimeSeconds() - DoorLastOpened) > DoorCloseDelay) {
			CloseDoor(DeltaTime);
		}
	}
	
}

void UOpenDoor::OpenDoor(float DeltaTime) {

	//Slowly open door
	CurrentYaw = FMath::Lerp(CurrentYaw, OpenAngle, DeltaTime * 1.0f);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);

}
void UOpenDoor::CloseDoor(float DeltaTime) {

	//Slowly open door
	CurrentYaw = FMath::Lerp(CurrentYaw, InitialYaw, DeltaTime * 2.5f);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);

}