// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "HomeIsCharacter.h"
#include "HomeIsProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Public/DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AHomeIsCharacter

AHomeIsCharacter::AHomeIsCharacter()
{
	_loadedAmmo = 10;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->RelativeRotation = FRotator(1.9f, -19.19f, 5.2f);
	Mesh1P->RelativeLocation = FVector(-0.5f, -4.4f, -155.7f);

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P, FP_Gun, and VR_Gun 
	// are set in the derived blueprint asset named MyCharacter to avoid direct content references in C++.

	// Create VR Controllers.
	R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
	R_MotionController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
	R_MotionController->SetupAttachment(RootComponent);
	L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
	L_MotionController->SetupAttachment(RootComponent);

	// Create a gun and attach it to the right-hand VR controller.
	// Create a gun mesh component
	VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
	VR_Gun->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	VR_Gun->bCastDynamicShadow = false;
	VR_Gun->CastShadow = false;
	VR_Gun->SetupAttachment(R_MotionController);
	VR_Gun->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
	VR_MuzzleLocation->SetupAttachment(VR_Gun);
	VR_MuzzleLocation->SetRelativeLocation(FVector(0.000004, 53.999992, 10.000000));
	VR_MuzzleLocation->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));		// Counteract the rotation of the VR gun model.

	// Uncomment the following line to turn motion controllers on by default:
	//bUsingMotionControllers = true;
}

void AHomeIsCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// Show or hide the two versions of the gun based on whether or not we're using motion controllers.
	if (bUsingMotionControllers)
	{
		VR_Gun->SetHiddenInGame(false, true);
		Mesh1P->SetHiddenInGame(true, true);
	}
	else
	{
		VR_Gun->SetHiddenInGame(true, true);
		Mesh1P->SetHiddenInGame(false, true);
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AHomeIsCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//SPRINT
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &AHomeIsCharacter::ToggleSprint);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &AHomeIsCharacter::ToggleSprint);


	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AHomeIsCharacter::OnFire);
	//RELOAD
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AHomeIsCharacter::Reload);
	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AHomeIsCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AHomeIsCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AHomeIsCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AHomeIsCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AHomeIsCharacter::LookUpAtRate);
}

void AHomeIsCharacter::OnFire()
{
	if (_loadedAmmo > 0)
	{
		_loadedAmmo--;

		FHitResult iHit;
		float length = _bulletRange;
		FVector startLocation = GetFirstPersonCameraComponent()->GetComponentLocation();
		FVector endLocation = startLocation + (GetFirstPersonCameraComponent()->GetForwardVector() * length);
		FCollisionQueryParams collisionParams;
		ActorLineTraceSingle(iHit, startLocation, endLocation, ECollisionChannel::ECC_WorldDynamic, collisionParams);
		DrawDebugLine(GetWorld(), startLocation, endLocation, FColor::Red, true, -1.0f, 0, 1.0f);
		if (iHit.GetActor() != nullptr)
		{
			ManageBulletCollision(iHit);
		}
		// Legacy Code
		//////////////////////////////////////if (ProjectileClass != NULL)
		//////////////////////////////////////{
		//////////////////////////////////////	UWorld* const World = GetWorld();
		//////////////////////////////////////	if (World != NULL)
		//////////////////////////////////////	{
		//////////////////////////////////////		if (bUsingMotionControllers)
		//////////////////////////////////////		{
		//////////////////////////////////////			const FRotator SpawnRotation = VR_MuzzleLocation->GetComponentRotation();
		//////////////////////////////////////			const FVector SpawnLocation = VR_MuzzleLocation->GetComponentLocation();
		//////////////////////////////////////			World->SpawnActor<AHomeIsProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		//////////////////////////////////////		}
		//////////////////////////////////////		else
		//////////////////////////////////////		{
		//////////////////////////////////////			const FRotator SpawnRotation = GetControlRotation();
		//////////////////////////////////////			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		//////////////////////////////////////			const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

		//////////////////////////////////////			//Set Spawn Collision Handling Override
		//////////////////////////////////////			FActorSpawnParameters ActorSpawnParams;
		//////////////////////////////////////			ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

		//////////////////////////////////////			// spawn the projectile at the muzzle
		//////////////////////////////////////			World->SpawnActor<AHomeIsProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		//////////////////////////////////////		}
		//////////////////////////////////////	}
		//////////////////////////////////////}

		// try and play the sound if specified
		if (FireSound != NULL)
		{
			UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
		}

		// try and play a firing animation if specified
		if (FireAnimation != NULL)
		{
			// Get the animation object for the arms mesh
			UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
			if (AnimInstance != NULL)
			{
				AnimInstance->Montage_Play(FireAnimation, 1.f);
			}
		}
	}
	else
	{
		Reload();
	}
}

void AHomeIsCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AHomeIsCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AHomeIsCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AHomeIsCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AHomeIsCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AHomeIsCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AHomeIsCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AHomeIsCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AHomeIsCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AHomeIsCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AHomeIsCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AHomeIsCharacter::TouchUpdate);
		return true;
	}
	
	return false;
}

void AHomeIsCharacter::ToggleSprint()
{
	if (_sprinting)
	{
		GetCharacterMovement()->MaxWalkSpeed *= 0.5;
	}
	else
	{
		GetCharacterMovement()->MaxWalkSpeed *= 2;
	}

	_sprinting = !_sprinting;
}
void AHomeIsCharacter::Reload()
{
	if (_loadedAmmo < _ammoMax)
	{
		int ammoNeeded = _ammoMax - _loadedAmmo;
		if (_spareAmmo < ammoNeeded)
		{
			ammoNeeded = _spareAmmo;
		}
		_spareAmmo -= ammoNeeded;
		_loadedAmmo += ammoNeeded;
	}
}
#pragma region Gets


const float AHomeIsCharacter::GetHealth() const
{
	return _health;
}
const bool AHomeIsCharacter::GetSprintState() const
{
	return _sprinting;
}
const int AHomeIsCharacter::GetLoadedAmmo() const
{
	return _loadedAmmo;
}
const int AHomeIsCharacter::GetSpareAmmo() const
{
	return _spareAmmo;
}
const int AHomeIsCharacter::GetTotalAmmo() const
{
	return _loadedAmmo + _spareAmmo;
}
const int AHomeIsCharacter::GetGunCapacity() const
{
	return _ammoMax;
}
const float AHomeIsCharacter::GetPlayerDamage() const
{
	return _damage;
}
#pragma endregion

void AHomeIsCharacter::DealDamage(float damageDealt)
{
	_health -= damageDealt;
	if (_health <= 0)
	{
		//GAME OVER????
	}
}

void AHomeIsCharacter::ManageBulletCollision(FHitResult collided)
{
	if (Cast<IIAttackable>(collided.GetActor()))
	{
		IIAttackable* iCollidedWith = Cast<IIAttackable>(collided.GetActor());
		if (iCollidedWith->_type != Type::PLAYER)
		{
			iCollidedWith->DealDamage(_damage);
		}
	}
}

