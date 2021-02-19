// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCameraPawn.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

// Sets default values
AMyCameraPawn::AMyCameraPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	RootComponent = Capsule;
}

// Called when the game starts or when spawned
void AMyCameraPawn::BeginPlay()
{
	Super::BeginPlay();
	
	// InputComponent = NewObject<UInputComponent>(this);
	// InputComponent->RegisterComponent();
	// if(InputComponent)
	// {
	// 	EnableInput(GetWorld()->GetFirstPlayerController());
	// }
}

// Called every frame
void AMyCameraPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	// RotateCamera(DeltaTime);
}

// Called to bind functionality to input
void AMyCameraPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	// PlayerInputComponent->BindAction("CamMode1", EInputEvent::IE_Pressed, this, &AMyCameraPawn::CamMode1);
}

void AMyCameraPawn::CamMode1() 
{
	UE_LOG(LogTemp, Warning, TEXT("CamMode1"));

	// TargetYaw = 45.f;
}

void AMyCameraPawn::CamMode2()
{
	UE_LOG(LogTemp, Warning, TEXT("CamMode2"));
	Test();
}

void AMyCameraPawn::Test()
{
	UE_LOG(LogTemp, Warning, TEXT("Testing works"));
	// TargetYaw = 45.f;
	// bCamMode1 = true;
}

void AMyCameraPawn::RotateCamera(float DeltaTime) 
{
	CurrentYaw = FMath::FInterpTo(CurrentYaw, TargetYaw, DeltaTime, 4.f);
	FRotator DoorRotation = GetOwner()->GetActorRotation();
	DoorRotation.Yaw = CurrentYaw;
	GetOwner()->SetActorRotation(DoorRotation);
}

