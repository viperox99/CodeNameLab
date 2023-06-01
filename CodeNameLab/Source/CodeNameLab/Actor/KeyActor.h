// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeNameLab\Interface\InteractInterface.h"
#include "CodeNameLab/Interface/KeyInterface.h"
#include "KeyActor.generated.h"

UCLASS()
class CODENAMELAB_API AKeyActor : public AActor, public IInteractInterface, public IKeyInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKeyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Interact() override;

	virtual AActor* FindItemForPickup() override;

	virtual bool FindKeyType(EKeyType& KeyType) override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = KeyType, meta=(AllowPrivateAccess = true))
	TEnumAsByte<EKeyType> KeyEnum;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = true))
	class UStaticMeshComponent* MeshComp;

};
