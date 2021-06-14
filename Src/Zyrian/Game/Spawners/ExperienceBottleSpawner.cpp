#include "ExperienceBottleSpawner.h"
#include "Src/Zyrian/Game/Items/ExperienceBottle.h"
#include <math.h>

void Snake::ExperienceBottleSpawner::SpawnerInitialize()
{
    SpawnColdown->Interval = 12000;
    SpawnColdown->Tick += gcnew System::EventHandler(this, &ExperienceBottleSpawner::GenerateExpBottles);
}

void Snake::ExperienceBottleSpawner::SpawnExpBottles()
{
    SpawnColdown->Start();
}

void Snake::ExperienceBottleSpawner::Pause()
{
    SpawnColdown->Stop();
    TimeAlive->Stop();
}

void Snake::ExperienceBottleSpawner::Continue()
{
    TimeAlive->Start();
    SpawnExpBottles();
}

void Snake::ExperienceBottleSpawner::GenerateExpBottles(System::Object^ sender, System::EventArgs^ e)
{
    Random^ rand = gcnew Random();
    int a = rand->Next(5, 11);
    float NumToCompare = 1.5f;
    if ((log(a) + sin(a)) >= NumToCompare)
    {
        SpawnColdown->Stop();
        GenerateExperienceBottle();
        isAbleToAdd = true;
    }
    else { return; }
}
