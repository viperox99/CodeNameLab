// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = MeshComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));

}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADoorActor::Interact() 
{
	switch (FindTypeOfLock())
	{
	case ELockType::VE_None:
		UE_LOG(LogTemp, Error, TEXT("Door Opened"));
		break;

	case ELockType::VE_Never:
		UE_LOG(LogTemp, Error, TEXT("Door will never open"));
		break;

	case ELockType::VE_Number:
		UE_LOG(LogTemp, Error, TEXT("Door is locked from Number Code"));
		break;

	case ELockType::VE_DeadBolt:
		UE_LOG(LogTemp, Error, TEXT("Door is locked by Deadbolt"));
		break;

	case ELockType::VE_Finger:
		UE_LOG(LogTemp, Error, TEXT("Door is locked by Finger scan"));
		break;
	
	case ELockType::VE_Key:
		UE_LOG(LogTemp, Error, TEXT("Door is locked by key"));
		break;

	case ELockType::VE_KeyCard:
		UE_LOG(LogTemp, Error, TEXT("Door is locked by Keycard"));
		break;

	default:
		UE_LOG(LogTemp, Error, TEXT("Door will never open"));
		break;
	}
}

void ADoorActor::SetLock() 
{
	
}

ELockType ADoorActor::FindTypeOfLock() 
{
	return LockEnum;
}

