// /written by Brandy Sawyer - based on Udemy Course Unreal Engine c++ Developer

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"



UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDESCAPE_API UOpenDoor : public UActorComponent {
	GENERATED_BODY()

	public:	
		// Sets default values for this component's properties
		UOpenDoor();

	protected:
		// Called when the game starts
		virtual void BeginPlay() override;
		

	public:	
		// Called every frame
		virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
		void OpenDoor(float DeltaTime);
		void CloseDoor(float DeltaTime);

	private:

		float InitialYaw;
		float CurrentYaw;
		AActor* ActorThatOpens;
		float DoorLastOpened = 0.f;

		UPROPERTY(EditAnywhere)
		float OpenAngle = -90.f;

		UPROPERTY(EditAnywhere)
		float DoorOpenSpeed = 0.75;

		UPROPERTY(EditAnywhere)
		float DoorCloseSpeed = 2.5f;

		UPROPERTY(EditAnywhere)
		float DoorCloseDelay = 0.5f;

		UPROPERTY(EditAnywhere)
		ATriggerVolume* PressurePlate;
		
};
