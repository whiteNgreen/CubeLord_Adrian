// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "MyCameraPawn.generated.h"

UCLASS()
class CUBELORD_ADRIAN_API AMyCameraPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyCameraPawn();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void CamMode1();
	void CamMode2();

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float TargetYaw{ 0.f };

	bool bCamMode1{ false };

	float CurrentYaw{ 0.f };
	void RotateCamera(float DeltaTime);

	void Test();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private: 	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UCapsuleComponent* Capsule;

};
