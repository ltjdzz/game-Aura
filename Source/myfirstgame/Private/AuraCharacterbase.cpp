// Fill out your copyright notice in the Description page of Project Settings.


#include "AuraCharacterbase.h"

// Sets default values
AAuraCharacterbase::AAuraCharacterbase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAuraCharacterbase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraCharacterbase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAuraCharacterbase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

