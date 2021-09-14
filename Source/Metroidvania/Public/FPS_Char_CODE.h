// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FPS_Char_CODE.generated.h"

UCLASS()
class METROIDVANIA_API AFPS_Char_CODE : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFPS_Char_CODE();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	float BaseTurnRate = 45, BaseLookUpRate = 45;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveHorizontal(float value);

	void MoveVertical(float value);

	void FireWeapon();

	void Sprint();

	void Crouch();

};
