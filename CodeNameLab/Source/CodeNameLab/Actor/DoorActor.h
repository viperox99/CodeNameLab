// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeNameLab/Interface/InteractInterface.h"
#include "CodeNameLab/Interface/DoorInterface.h"
#include "DoorActor.generated.h"

UCLASS()
class CODENAMELAB_API ADoorActor : public AActor, public IInteractInterface, public IDoorInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADoorActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() override;

	virtual void SetLock() override;

	virtual ELockType FindTypeOfLock() override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = true))
	TEnumAsByte<ELockType> LockEnum;

	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* MeshComp;

};