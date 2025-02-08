#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppBaseActor.generated.h"

UCLASS()
class B_CXX_P1_API ACppBaseActor : public AActor
{
    GENERATED_BODY()

public:
    ACppBaseActor();

protected:
    virtual void BeginPlay() override;
	void ShowActorInformation();

public:
    virtual void Tick(float DeltaTime) override;
	
private:
    UPROPERTY(EditDefaultsOnly, Category = "Actor Properties")
    bool IsAlive;

    UPROPERTY(EditInstanceOnly, Category = "Actor Properties", meta = (DisplayName = "Enemy Count"))
    int32 EnemyNum;
};