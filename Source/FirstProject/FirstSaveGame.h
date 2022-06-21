// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FirstSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStats
{
	GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	float Health;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	float MaxHealth;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	float Stamina;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	float MaxStamina;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	int32 Coins;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	FVector Location;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	FRotator Rotation;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	FString WeaponName;

	UPROPERTY(VisibleAnywhere, Category = "SaveGameDate")
	FString LevelName;
};

/**
 * 
 */
UCLASS()
class FIRSTPROJECT_API UFirstSaveGame : public USaveGame
{
	GENERATED_BODY()
public:
	UFirstSaveGame();

	UPROPERTY(VisibleAnywhere, Category = "Basic")
		FString PlayerName;

	UPROPERTY(VisibleAnywhere, Category = "Basic")
		uint32 UserIndex;

	UPROPERTY(VisibleAnywhere, Category = "Basic")
		FCharacterStats CharacterStas;
	
};
