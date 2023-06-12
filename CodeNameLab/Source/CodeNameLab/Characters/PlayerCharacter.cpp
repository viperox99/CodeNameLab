// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UObject/ConstructorHelpers.h"

#include "CodeNameLab\Interface\InteractInterface.h"
#include "CodeNameLab/Interface/DoorInterface.h"
#include "CodeNameLab/Interface/KeyInterface.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);

		//Interacting
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &APlayerCharacter::Interact);
		
		//Unlocking
		EnhancedInputComponent->BindAction(UnlockAction, ETriggerEvent::Started, this, &APlayerCharacter::Unlock);
	}

}

void APlayerCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void APlayerCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

bool APlayerCharacter::SetupLineTrace(FHitResult& Hit) 
{
	FVector StartLocation = GetActorLocation() + FirstPersonCameraComponent->GetRelativeLocation();
	FVector EndLocation = StartLocation + (FirstPersonCameraComponent->GetForwardVector() * Range);

	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);

	return GetWorld()->LineTraceSingleByChannel(Hit,
		StartLocation, 
		EndLocation, 
		ECollisionChannel::ECC_WorldStatic, 
		QueryParams);
}

void APlayerCharacter::Interact() 
{
	UE_LOG(LogTemp, Error, TEXT("Interact Called"));
	FHitResult Hit;

	bool bSuccess = SetupLineTrace(Hit);
	if(bSuccess)
	{
		InterfaceCall(Hit);
	}
}

void APlayerCharacter::InterfaceCall(FHitResult Hit) 
{
	IInteractInterface* Interface = Cast<IInteractInterface>(Hit.GetActor());
	if (Interface)
	{
		Interface->Interact();
		UE_LOG(LogTemp, Error, TEXT("Interface"));
		AActor* Item = Interface->FindItemForPickup();
		if(Item != nullptr)
		{
			Inventory.Add(Item);
			Item->Destroy();
		}
	}
}

void APlayerCharacter::Unlock() 
{
	UE_LOG(LogTemp, Error, TEXT("Unlock Called"));
	FHitResult Hit;

	bool bSuccess = SetupLineTrace(Hit);
	if(bSuccess)
	{
		UnlockItem(Hit);
	}
}

void APlayerCharacter::UnlockItem(FHitResult Hit) 
{
	IDoorInterface* DoorInterface = Cast<IDoorInterface>(Hit.GetActor());
	if (DoorInterface)
	{
		for (AActor* ItemInstance : Inventory)
		{
			IKeyInterface* KeyInterface = Cast<IKeyInterface>(ItemInstance);
			if(KeyInterface)
			{
				EKeyType KeyType;
				bool bSuccess = KeyInterface->FindKeyType(KeyType);
				if(bSuccess)
				{
					LockCheck(DoorInterface, KeyType, ItemInstance);
				}
			}
		}
	}
}

void APlayerCharacter::LockCheck(IDoorInterface* DoorInterface, EKeyType KeyType, AActor* Item) 
{
	ELockType LockType = DoorInterface->FindTypeOfLock();
	if (KeyType == EKeyType::VE_NumberKey && LockType == VE_Number )
	{
		DoorInterface->SetLock();
		Inventory.RemoveAt(Inventory.Find(Item));
	}
	else if (KeyType == EKeyType::VE_Keycard && LockType == VE_KeyCard)
	{
		DoorInterface->SetLock();
		Inventory.RemoveAt(Inventory.Find(Item));
	}
	else if (KeyType == EKeyType::VE_Physical && LockType == VE_Key)
	{
		DoorInterface->SetLock();
		Inventory.RemoveAt(Inventory.Find(Item));
	}
}

