// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DoorInterface.generated.h"

UENUM(BlueprintType)
enum class ELockTypes
{
	VE_None UMETA(DisplayName = "No Lock"),
	VE_Key  UMETA(DisplayName = "Key Lock"),
	VE_Number  UMETA(DisplayName = "Number Lock"),
	VE_DeadBolt  UMETA(DisplayName = "Dead bolt Lock"),
	VE_Finger UMETA(DisplayName = "Finger Print Lock")
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UDoorInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODENAMELAB_API IDoorInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual void SetLock() = 0;

	virtual void TypeOfLock() = 0;
	
};
