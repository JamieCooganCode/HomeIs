#include "Pickup.h"
#include "HomeIsCharacter.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector myLocation = this->GetActorLocation();

	ACharacter* character = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
	AHomeIsCharacter* hiCharacter = Cast<AHomeIsCharacter>(character);

	FVector playerLocation = hiCharacter->GetActorLocation();

	float x = myLocation.X - playerLocation.X;
	float y = myLocation.Y - playerLocation.Y;
	float z = myLocation.Z - playerLocation.Z;

	float distance = sqrt((x*x) + (y*y) + (z*z));

	if (distance < 300)
	{
		hiCharacter->DealDamage(-30.0f);
		hiCharacter->AddAmmo(60);
		Destroy();
	}


}

