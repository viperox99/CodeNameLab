// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorActor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ADoorActor::ADoorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = MeshComp;

}

// Called when the game starts or when spawned
void ADoorActor::BeginPlay()
{

	Super::BeginPlay();

	LockEnumOriginal = FindTypeOfLock();

	StartLocation = GetActorLocation();

	StartYaw = GetActorRotation().Yaw;
	CurrentYaw = StartYaw;
	EndYaw += StartYaw;

}

// Called every frame
void ADoorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (DoorOpeningEnum)
	{
	case VE_Rotation:
		DoorRotation(DeltaTime);
		break;

	case VE_Location:
		LocationMoving(DeltaTime);
		break;

	default:
		break;
	}
}

void ADoorActor::Interact() 
{
	switch (FindTypeOfLock())
	{
	case ELockType::VE_None:
		UE_LOG(LogTemp, Error, TEXT("Door Opened"));
		bOpenDoor = !bOpenDoor;
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

AActor* ADoorActor::FindItemForPickup() 
{
	return nullptr;
}

void ADoorActor::SetLock() 
{
	UE_LOG(LogTemp, Error, TEXT("Lock changing"));
	if (FindTypeOfLock() == LockEnumOriginal)
	{
		LockEnum = VE_None;
	}
	else
	{
		LockEnum = LockEnumOriginal;
	}
	
}

ELockType ADoorActor::FindTypeOfLock() 
{
	return LockEnum;
}

void ADoorActor::LocationMoving(float DeltaTime) 
{
	FVector TargetLocation = StartLocation;
	if(bOpenDoor)
	{
		TargetLocation = StartLocation + EndLocation;
	}
	FVector CurrentLocation = GetActorLocation();
	float Speed = EndLocation.Length()/MoveTime;
	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);
	SetActorLocation(NewLocation);
}

void ADoorActor::DoorRotation(float DeltaTime) 
{
	FRotator DoorRotation = GetActorRotation();

	if(bOpenDoor)
	{
		CurrentYaw = FMath::Lerp(CurrentYaw, EndYaw, DeltaTime*MoveTime);
		DoorRotation.Yaw = CurrentYaw;
		SetActorRotation(DoorRotation);
	}
	else
	{
		CurrentYaw = FMath::Lerp(CurrentYaw, StartYaw, DeltaTime*MoveTime);
		DoorRotation.Yaw = CurrentYaw;
		SetActorRotation(DoorRotation);
	}
}

