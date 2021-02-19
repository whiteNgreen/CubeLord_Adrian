// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"
#include "CubeLord_Adrian/MyCameraPawn.h"
#include "Engine/World.h"
// #include "GameFramework/Controller.h"
// #include "CubeLord_Adrian/MyCameraActor.h"

APlayerPawn::APlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;

    
}
// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    Move();
    //  Rotate Actor function
    RotateActor(DeltaTime);
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("Forward", this, &APlayerPawn::CalculateMoveInputForward);
    PlayerInputComponent->BindAxis("Right", this, &APlayerPawn::CalculateMoveInputRight);
    PlayerInputComponent->BindAction("CamMode1", IE_Pressed, this, &APlayerPawn::CamMode1);
    PlayerInputComponent->BindAction("CamMode2", IE_Pressed, this, &APlayerPawn::CamMode2);
}

void APlayerPawn::CalculateMoveInputForward(float Value)
{
    if(Value == 1)
    {
        // UE_LOG(LogTemp, Warning, TEXT("1"));
        TargetRotation = 180.f;
    }
    else if (Value == -1)
    {
        // UE_LOG(LogTemp, Warning, TEXT("-1"));
        // if(TargetRotation > 180.f)
        // {
        //     TargetRotation = 360.f;
        // }
        // else
        // {
        //     TargetRotation = 0.f;
        // }
        TargetRotation = 0.f;
    }
    MoveForward = Value * MoveSpeed * GetWorld()->DeltaTimeSeconds;

    // if ((Controller != NULL) && (Value != 0.0f))
	// {
	// 	// find out which way is forward
	// 	const FRotator Rotation = Controller->GetControlRotation();
	// 	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// 	// get forward vector
	// 	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	// 	AddMovementInput(Direction, Value);
	// }
}
void APlayerPawn::CalculateMoveInputRight(float Value)
{
    if(Value == 1)
    {
        // UE_LOG(LogTemp, Warning, TEXT("1"));
        TargetRotation = 270.f;
    }
    else if (Value == -1)
    {
        // UE_LOG(LogTemp, Warning, TEXT("-1"));
        TargetRotation = 90.f;
    }
    MoveRight = Value * MoveSpeed * GetWorld()->DeltaTimeSeconds;

    // if ( (Controller != NULL) && (Value != 0.0f) )
	// {
	// 	// find out which way is right
	// 	const FRotator Rotation = Controller->GetControlRotation();
	// 	const FRotator YawRotation(0, Rotation.Yaw, 0);
	
	// 	// get right vector 
	// 	const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
	// 	// add movement in that direction
	// 	AddMovementInput(Direction, Value);
	// }
}

void APlayerPawn::Move() 
{
    MoveDirection = FVector(MoveForward, MoveRight, 0);
    AddActorWorldOffset(MoveDirection, true);
}

// RotateActor(float deltatime)
void APlayerPawn::RotateActor(float Deltatime) 
{
    //      Bruker FRotator
    // UE_LOG(LogTemp, Warning, TEXT("Rotation: %s"), *GetActorRotation().ToString());
    // UE_LOG(LogTemp, Warning, TEXT("Rotation: %f"), CurrentRotation);
    // CurrentRotation = FMath::FInterpTo(CurrentRotation, TargetRotation, Deltatime, RotationSpeed);
	// RotationDirection = GetActorRotation();
    RotationDirection.Yaw = TargetRotation;
    SetActorRotation(RotationDirection);

    // FixRotation();
    
    //      Bruker FQuat
    // CurrentRotation = FMath::FInterpTo(CurrentRotation, TargetRotation, Deltatime, RotationSpeed);
    // FRotator Rotation = FRotator(0.f, CurrentRotation, 0.f);
    // RotationDirection = FQuat(Rotation);

    // AddActorLocalRotation(RotationDirection, true);

    // UE_LOG(LogTemp, Warning, TEXT("FQuat Angle: %s"), *RotationDirection.Rotator().ToString());

}

void APlayerPawn::FixRotation() 
{
    if (TargetRotation > 359.f && TargetRotation < 361.f)
    {
        TargetRotation = 0.f;
    }
}

void APlayerPawn::CamMode1() 
{
    AMyCameraPawn* ActorClass = Cast<AMyCameraPawn>(this->GetClass());
    ActorClass->CamMode1();
}

void APlayerPawn::CamMode2() 
{
    AMyCameraPawn* ActorClass = Cast<AMyCameraPawn>(this->GetClass());
    ActorClass->CamMode2();
}

