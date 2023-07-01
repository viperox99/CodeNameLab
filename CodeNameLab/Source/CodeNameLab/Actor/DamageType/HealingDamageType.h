// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "HealingDamageType.generated.h"

UENUM(BlueprintType)
enum EDamageType
{
	VE_Healing,
	VE_Damage
};

/**
 * 
 */
UCLASS()
class CODENAMELAB_API UHealingDamageType : public UDamageType
{
	GENERATED_BODY()

	UPROPERTY()
	TEnumAsByte<EDamageType> AffectOnActor;
	
};
