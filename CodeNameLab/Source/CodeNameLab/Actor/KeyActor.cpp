// Fill out your copyright notice in the Description page of Project Settings.


#include "KeyActor.h"

// Sets default values
AKeyActor::AKeyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = MeshComp;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));

}

// Called when the game starts or when spawned
void AKeyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AKeyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AKeyActor::Interact() 
{
	
}

AActor* AKeyActor::FindItemForPickup() 
{
	return this;
}

bool AKeyActor::FindKeyType(EKeyType& KeyType) 
{
	switch (KeyEnum)
	{
	case VE_Keycard:
		KeyType = VE_Keycard;
		return true;

	case VE_NumberKey:
		KeyType = VE_NumberKey;
		return true;

	case VE_Physical:
		KeyType = VE_Physical;
		return true;
	
	default:
		return false;
	}
}

