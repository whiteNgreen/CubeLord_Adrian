// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CubeLord_Adrian/BasePawn.h"
#include "PlayerPawn.generated.h"


UCLASS()
class CUBELORD_ADRIAN_API APlayerPawn : public ABasePawn
{
	GENERATED_BODY()

public:
	APlayerPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 	Prøvde å legge til et Camera som kan justeres etter som vi vil 
	// UPROPERTY(EditAnywhere)
	// class UCameraSceneComponent* Camera; 
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MoveSpeed{ 200.f };
	float MoveForward{ 0.f };
	float MoveRight{ 0.f };
	FVector MoveDirection;

	FRotator RotationDirection;
	// FQuat RotationDirection;
	float CurrentRotation{ 0.f };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float TargetRotation{ 0.f };
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float RotationSpeed{ 20.f };
	
	void CalculateMoveInputForward(float Value);
	void CalculateMoveInputRight(float Value);
	void Move();
	void RotateActor(float Deltatime);
	void FixRotation();

	//	TankControls for testing
	bool bTankControls{ false };
	
	void CamMode1();
	void CamMode2();

	// UPROPERTY(EditAnywhere, Category = "Camera")
	// AActor* CameraActor{ nullptr };
};
