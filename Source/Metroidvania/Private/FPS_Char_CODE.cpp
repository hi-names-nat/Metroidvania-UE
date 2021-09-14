// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS_Char_CODE.h"

// Sets default values
AFPS_Char_CODE::AFPS_Char_CODE()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFPS_Char_CODE::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFPS_Char_CODE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPS_Char_CODE::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set-up Axis
	{
		InputComponent->BindAxis("MoveForward", this, &AFPS_Char_CODE::MoveVertical);
		InputComponent->BindAxis("MoveRight", this, &AFPS_Char_CODE::MoveHorizontal);
		InputComponent->BindAxis("Turn", this, &AFPS_Char_CODE::AddControllerYawInput);
		InputComponent->BindAxis("LookUp", this, &AFPS_Char_CODE::AddControllerPitchInput);
	}

	// Set-up Actions
	{
		InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &AFPS_Char_CODE::Jump);
		InputComponent->BindAction("Fire", EInputEvent::IE_Repeat, this, &AFPS_Char_CODE::FireWeapon);
		InputComponent->BindAction("Sprint", EInputEvent::IE_Repeat, this, &AFPS_Char_CODE::Sprint);
		InputComponent->BindAction("Crouch", EInputEvent::IE_Repeat, this, &AFPS_Char_CODE::Crouch);
	}
}

void AFPS_Char_CODE::MoveHorizontal(float value) 
{
	
}

void AFPS_Char_CODE::MoveVertical(float value) 
{

}

void AFPS_Char_CODE::FireWeapon() 
{

}

void AFPS_Char_CODE::Sprint() 
{

}

void AFPS_Char_CODE::Crouch() 
{

}


