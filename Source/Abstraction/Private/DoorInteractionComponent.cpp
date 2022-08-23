// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteractionComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDoorInteractionComponent::UDoorInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	//CurrentOpenTime = 0.0f;

	if (rotator)
	{
		StartRotation = GetOwner()->GetActorRotation();
		FinalRotation = GetOwner()->GetActorRotation() + DesiredRotation;
		//ensure TimeToRotate is greater than EPSILON
	}
	else if (slider)
	{
		//StartLocation = GetOwner()->GetActorLocation();
		//FinalLocation = GetOwner()->GetActorLocation();
		StartLocation = GetOwner()->GetActorLocation();
		FinalLocation = GetOwner()->GetActorLocation() + DesiredMovement;
	}
	
	
}


// Called every frame
void UDoorInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//if (!isLocked)
	//{
		if (CurrentOpenTime < TimeToOpen)
		{
			if (TriggerBox && GetWorld() && GetWorld()->GetFirstLocalPlayerFromController())
			{
				APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
				if (PlayerPawn && TriggerBox->IsOverlappingActor(PlayerPawn))
				{
					if (rotator)
					{
						CurrentOpenTime += DeltaTime;
						const float TimeRatio = FMath::Clamp(CurrentOpenTime / TimeToOpen, 0.0f, 1.0f);
						const float RotationAlpha = OpenCurve.GetRichCurveConst()->Eval(TimeRatio);
						const FRotator CurrentRotation = FMath::Lerp(StartRotation, FinalRotation, RotationAlpha);
						GetOwner()->SetActorRotation(CurrentRotation);
					}


					else if (slider)
					{
						CurrentOpenTime += DeltaTime;
						const float TimeRatio = FMath::Clamp(CurrentOpenTime / TimeToOpen, 0.0f, 1.0f);
						const FVector CurrentPosition = FMath::Lerp(StartLocation, FinalLocation, TimeRatio);
						GetOwner()->SetActorLocation(CurrentPosition);
					}


				}
			}
		}
	//}

	



	

}

