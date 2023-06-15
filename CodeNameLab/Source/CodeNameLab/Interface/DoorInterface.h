// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DoorInterface.generated.h"

UENUM(BlueprintType)
enum ELockType
{
	VE_None 		UMETA(DisplayName = "No Lock"),
	VE_Never 		UMETA(DisplayName = "Never Opens"),
	VE_Key  		UMETA(DisplayName = "Key Lock"),
	VE_KeyCard  	UMETA(DisplayName = "KeyCard Lock"),
	VE_Number  		UMETA(DisplayName = "Number Lock")
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

	virtual ELockType FindTypeOfLock() = 0;
	
};
