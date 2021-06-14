#include "SpeedPotionSpawner.h"
#include "Src/Zyrian/Game/Items/SpeedPotion.h"
#include "Src/Zyrian/Game/Game.h"
#include <math.h>

void Snake::SpeedPotionSpawner::SpawnerInitialize()
{
    SpawnColdown->Interval = 8000;
    SpawnColdown->Tick += gcnew System::EventHandler(this, &SpeedPotionSpawner::GenerateSpeedPotions);
}

void Snake::SpeedPotionSpawner::SpawnSpeedPotions()
{
    SpawnColdown->Start();
}

void Snake::SpeedPotionSpawner::Pause()
{
    SpawnColdown->Stop();
    TimeAlive->Stop();
    Duration->Stop();
}

void Snake::SpeedPotionSpawner::Continue()
{
    TimeAlive->Start();
    Duration->Start();
    SpawnSpeedPotions();
}

void Snake::SpeedPotionSpawner::GenerateSpeedPotions(System::Object^ sender, System::EventArgs^ e)
{
    Random^ rand = gcnew Random();
    int a = rand->Next(5, 11);
    float NumToCompare = 1.0f;
    if ((log(a) + sin(a)) >= NumToCompare)
    {
        SpawnColdown->Stop();
        GenerateSpeedPotion();
        isAbleToAdd = true;
    }
    else { return; }
}
