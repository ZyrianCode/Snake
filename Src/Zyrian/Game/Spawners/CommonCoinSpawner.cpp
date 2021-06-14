#include "CommonCoinSpawner.h"

#include "Src/Zyrian/Game/Items/CommonCoin.h"
#include <math.h>
void Snake::CommonCoinSpawner::SpawnerInitialize()
{
    SpawnColdown->Interval = 9000;
	SpawnColdown->Tick += gcnew System::EventHandler(this, &CommonCoinSpawner::GenerateCoins);   
}

void Snake::CommonCoinSpawner::SpawnCoins()
{
	SpawnColdown->Start();	
}

void Snake::CommonCoinSpawner::Pause()
{
    SpawnColdown->Stop();
    TimeAlive->Stop();
}

void Snake::CommonCoinSpawner::Continue()
{
    TimeAlive->Start();
    SpawnCoins();
}

void Snake::CommonCoinSpawner::GenerateCoins(System::Object^ sender, System::EventArgs^ e)
{
    Random^ rand = gcnew Random();
    int a = rand->Next(5, 11);
    float NumToCompare = 1.00f;
    if ((log(a) + sin(a)) >= NumToCompare)
    {
        SpawnColdown->Stop();
        GenerateCommonCoin();
        isAbleToAdd = true;
    }
    else{ return; }
}

