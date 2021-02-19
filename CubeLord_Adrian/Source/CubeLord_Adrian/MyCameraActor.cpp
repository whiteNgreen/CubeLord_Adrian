// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCameraActor.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMyCameraActor::AMyCameraActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Target"));
	RootComponent = Capsule;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);	

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void AMyCameraActor::BeginPlay()
{
	Super::BeginPlay();
	// UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTarget(Camera);
}

// Called every frame
void AMyCameraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyCameraActor::CamMode1() 
{
	UE_LOG(LogTemp, Warning, TEXT("CamMode1"));
}

