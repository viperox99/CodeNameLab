// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KeyInterface.generated.h"

UENUM(BlueprintType)
enum EKeyType
{
	VE_NumberKey 	UMETA(DisplayName = "Number Key"),
	VE_Physical 	UMETA(DisplayName = "Key"),
	VE_Keycard 		UMETA(DisplayName = "Keycard"),
	VE_NoKey		UMETA(DisplayName = "Not A Key")
};

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UKeyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class CODENAMELAB_API IKeyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual bool FindKeyType(EKeyType& KeyType) = 0;
};
