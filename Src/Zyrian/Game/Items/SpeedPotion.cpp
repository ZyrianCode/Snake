#include "SpeedPotion.h"
#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

void Snake::SpeedPotion::Initialize()
{
	SpeedPotionBottle = gcnew PictureBox();
	SpeedPotionBottle->BackColor = Color::FromArgb(114, 234, 242);
	
	SpeedPotionBottle->Width = 15;
	SpeedPotionBottle->Height = 20;

	TimeAlive->Interval = 10000;
	TimeAlive->Tick += gcnew System::EventHandler(this, &SpeedPotion::OnTimeAliveEnd);
	isAbleToRemove = false;
	isAbleToRemoveSpeedEffect = false;
}

void Snake::SpeedPotion::Deconstruct()
{
	SpeedPotionBottle->Visible = false;
	SpeedPotionBottle = nullptr;
	TimeAlive->Stop();
	TimeAlive->Tick -= gcnew System::EventHandler(this, &SpeedPotion::OnTimeAliveEnd);
	isAbleToRemove = true;
}

void Snake::SpeedPotion::StartPotionEffectDuration()
{
	Duration->Interval = 15000;
	Duration->Tick += gcnew System::EventHandler(this, &SpeedPotion::OnDurationEnd);
	Duration->Start();
}

void Snake::SpeedPotion::OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e)
{
	Deconstruct();
}

void Snake::SpeedPotion::OnDurationEnd(System::Object^ sender, System::EventArgs^ e)
{
	Snake^ snake = gcnew Snake();
	Duration->Tick -= gcnew System::EventHandler(this, &SpeedPotion::OnDurationEnd);
	Duration->Stop();
	isAbleToRemoveSpeedEffect = true;
}

void Snake::SpeedPotion::GenerateSpeedPotion()
{
	Random^ rand = gcnew Random();
	SpeedPotionPos->X = rand->Next(10, 680 - 10);
	SpeedPotionPos->Y = rand->Next(10, 530 - 10);

	int tempX = SpeedPotionPos->X % 10;
	SpeedPotionPos->X -= tempX;

	int tempY = SpeedPotionPos->Y % 10;
	SpeedPotionPos->Y -= tempY;

	CheckCollisionWithSnake();
	//Здесь добавить проверку на совпадение позиции с позициями фруктов в разных реестрах
	SpeedPotionBottle->Location = Point(SpeedPotionPos->X, SpeedPotionPos->Y);
	TimeAlive->Start();
}

void Snake::SpeedPotion::CheckCollisionWithSnake()
{
	Snake^ snake = gcnew Snake();
	for (int i = 0; i < snake->GetLength(); i++)
	{
		if (SpeedPotionPos->X == snake->SnakeEntity[i]->Location.X &&
			SpeedPotionPos->Y == snake->SnakeEntity[i]->Location.Y)
		{
			GenerateSpeedPotion();
		}
	}
}

float Snake::SpeedPotion::GetSpeedAmount()
{
	return _speedAmount;
}

