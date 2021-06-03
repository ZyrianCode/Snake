#include "CommonCoinSpawner.h"

#include "Src/Zyrian/Game/Items/CommonCoin.h"
#include <math.h>
void Snake::CommonCoinSpawner::Initialize()
{
    SpawnColdown->Interval = 5000;
	SpawnColdown->Tick += gcnew System::EventHandler(this, &CommonCoinSpawner::GenerateCoins);
    
}

void Snake::CommonCoinSpawner::SpawnCoins()
{
	SpawnColdown->Start();	
}

void Snake::CommonCoinSpawner::Pause()
{
    SpawnColdown->Stop();
    commonCoin->TimeAlive->Stop();
}

void Snake::CommonCoinSpawner::Continue()
{
    commonCoin->TimeAlive->Start();
    SpawnCoins();
}

void Snake::CommonCoinSpawner::GenerateCoins(System::Object^ sender, System::EventArgs^ e)
{
    Random^ rand = gcnew Random();
    int a = rand->Next(5, 11);
    int NumToCompare = 10;
    if ((log(a) + sin(a)) >= 1)
    {
       // items->commonCoin = gcnew CommonCoin();
        SpawnColdown->Stop();
        //Items^ items = gcnew Items();
        //CommonCoin^ commonCoin = gcnew CommonCoin();
        //commonCoin->Initialize();
        commonCoin->GenerateCommonCoin();
       // ShouldSpawn += gcnew System::EventHandler(this, &Snake::CommonCoinSpawner::OnShouldSpawn);
        isAbleToAdd = true;
        //SpawnAction(this, e);
        //Game^ game = gcnew Game();
        //game->pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
        //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
        //isCommonCoinGenerable = true;
        //CommonCoinIdleTime->Start();
    }
    else
    {
        return;
    }
}

