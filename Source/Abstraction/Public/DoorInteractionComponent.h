// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Curves/CurveFloat.h"
#include "DoorInteractionComponent.generated.h"

class ATriggerBox;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ABSTRACTION_API UDoorInteractionComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorInteractionComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool GetIsLocked() { return m_isLocked; }
	bool SetIsLocked(bool isLocked) { this->isLocked = isLocked; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	bool rotator;

	UPROPERTY(EditAnywhere)
	bool slider;

	UPROPERTY(EditAnywhere)
	float TimeToOpen = 1.0f;
	float CurrentOpenTime = 0.0f;

	// Rotator variables
	UPROPERTY(EditAnywhere)
	FRotator DesiredRotation;

	FRotator StartRotation = FRotator::ZeroRotator;
	FRotator FinalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
	ATriggerBox* TriggerBox;

	UPROPERTY(EditAnywhere)
	FRuntimeFloatCurve OpenCurve;

	// Slider variables
	FVector StartLocation;
	FVector FinalLocation;

	UPROPERTY(EditAnywhere)
	FVector DesiredMovement;

	// Lock variables
	//UPROPERTY(EditAnywhere)
	//bool isLocked;
	
};
