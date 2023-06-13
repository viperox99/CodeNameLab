// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeNameLab/Interface/InteractInterface.h"
#include "Sound/SoundBase.h"
#include "BaseGunWeapon.generated.h"

UCLASS()
class CODENAMELAB_API ABaseGunWeapon : public AActor, public IInteractInterface
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere)
	class UBillboardComponent* MuzzleLocation;

	UPROPERTY(EditAnywhere, Category = LineTrace)
	float Range = 1000.f;

	UPROPERTY(EditAnywhere, Category = Audio)
	USoundBase* Sound;
	
public:	
	// Sets default values for this actor's properties
	ABaseGunWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() override;

	virtual AActor* FindItemForPickup() override;

protected:

	bool SetupLineTrace(FHitResult Hit);

	void PlaySoundAtLocation(FVector Location);

};
