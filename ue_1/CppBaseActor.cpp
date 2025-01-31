// Fill out your copyright notice in the Description page of Project Settings.


#include "CppBaseActor.h"

// Sets default values
ACppBaseActor::ACppBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppBaseActor::BeginPlay()
{
	Super::BeginPlay();
	ShowActorInformation();
	
}

// Called every frame
void ACppBaseActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACppBaseActor::ShowActorInformation() {
	FString ActorName = this->GetName();
	bool IsAlive = false;
	int EnemyNum = 10;

	UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *ActorName);
	UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), *EnemyNum); 
	UE_LOG(LogTemp, Display, TEXT("IsAlive: %s"), IsAlive ? TEXT("true") : TEXT("false"));
}
