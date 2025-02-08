#include "CppBaseActor.h"

ACppBaseActor::ACppBaseActor()
{
    PrimaryActorTick.bCanEverTick = true;

    IsAlive = false;
    EnemyNum = 10;
}

void ACppBaseActor::BeginPlay()
{
    Super::BeginPlay();
    ShowActorInformation();
}

void ACppBaseActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ACppBaseActor::ShowActorInformation()
{
    FString ActorName = GetName();
    
    UE_LOG(LogTemp, Display, TEXT("Instance name: %s"), *ActorName);
    UE_LOG(LogTemp, Display, TEXT("EnemyNum: %d"), EnemyNum);
    UE_LOG(LogTemp, Display, TEXT("IsAlive: %s"), IsAlive ? TEXT("true") : TEXT("false"));
}