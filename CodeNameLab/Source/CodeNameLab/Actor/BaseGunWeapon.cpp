// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGunWeapon.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BillboardComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ABaseGunWeapon::ABaseGunWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	RootComponent = MeshComp;

	MuzzleLocation = CreateDefaultSubobject<UBillboardComponent>(TEXT("Muzzle Location"));
	MuzzleLocation->SetupAttachment(MeshComp);
	MuzzleLocation->bHiddenInGame = true;

}

// Called when the game starts or when spawned
void ABaseGunWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseGunWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGunWeapon::Interact() 
{
	
}

AActor* ABaseGunWeapon::FindItemForPickup() 
{
	return this;
}

bool ABaseGunWeapon::SetupLineTrace(FHitResult Hit) 
{
	FVector StartLocation = GetActorLocation()+MuzzleLocation->GetRelativeLocation();
	FVector EndLocation = StartLocation + (MuzzleLocation->GetForwardVector() * Range);

	FCollisionQueryParams QueryPraams;
	QueryPraams.AddIgnoredActor(this);
	QueryPraams.AddIgnoredActor(this->GetOwner());

	return GetWorld()->LineTraceSingleByChannel(Hit,
		StartLocation,
		EndLocation,
		ECollisionChannel::ECC_Visibility,
		QueryPraams
	);
}

AActor* ABaseGunWeapon::SpawnActor(AActor* Actor) 
{
	return this;
}

void ABaseGunWeapon::PlaySoundAtLocation( FVector Location) 
{
	if(Sound == nullptr)
	{
		return;
	}

	UGameplayStatics::PlaySoundAtLocation(GetWorld(),
		Sound,
		Location
	);
}

