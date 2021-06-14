#include "ExperienceBottle.h"
#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

void Snake::ExperienceBottle::Initialize()
{
	ExpBottle = gcnew PictureBox();
	ExpBottle->BackColor = Color::FromArgb(184, 230, 116);

	//Рандомно задаём Высоту и ширину монетки
	Random^ rand = gcnew Random();
	int RandAmount = rand->Next(12, 21);
	ExpBottle->Width = RandAmount;
	ExpBottle->Height = RandAmount;

	TimeAlive->Interval = SetInterval();
	TimeAlive->Tick += gcnew System::EventHandler(this, &ExperienceBottle::OnTimeAliveEnd);
	isAbleToRemove = false;
}

void Snake::ExperienceBottle::OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e)
{
	Deconstruct();
}

void Snake::ExperienceBottle::GenerateExperienceBottle()
{
	Random^ rand = gcnew Random();
	ExpBottlePos->X = rand->Next(10, 680 - 10);
	ExpBottlePos->Y = rand->Next(10, 530 - 10);

	int tempX = ExpBottlePos->X % 10;
	ExpBottlePos->X -= tempX;

	int tempY = ExpBottlePos->Y % 10;
	ExpBottlePos->Y -= tempY;

	CheckCollisionWithSnake();
	//Здесь добавить проверку на совпадение позиции с позициями фруктов в разных реестрах
	ExpBottle->Location = Point(ExpBottlePos->X, ExpBottlePos->Y);
	TimeAlive->Start();
}

void Snake::ExperienceBottle::CheckCollisionWithSnake()
{
	Snake^ snake = gcnew Snake();
	for (int i = 0; i < snake->GetLength(); i++)
	{
		if (ExpBottlePos->X == snake->SnakeEntity[i]->Location.X &&
			ExpBottlePos->Y == snake->SnakeEntity[i]->Location.Y)
		{
			GenerateExperienceBottle();
		}
	}
}

int Snake::ExperienceBottle::AddAmountOfExperience()
{
	Random^ rand = gcnew Random();
	int ExpBottleSize = ExpBottle->Width; //Поскольку монета квадрат - присваивать можно любой параметр из двух: длинна и ширина
	int AmountOfExperienceToAdd = 0;
	switch (ExpBottleSize)
	{
	case 12: case 13: case 14:
		AmountOfExperienceToAdd = rand->Next(5, 15);
		break;

	case 15: case 16:
		AmountOfExperienceToAdd = rand->Next(16, 30);
		break;

	case 17: case 18:
		AmountOfExperienceToAdd = rand->Next(31, 50);
		break;

	case 19: case 20:
		AmountOfExperienceToAdd = rand->Next(51, 100);
		break;
	default:
		break;
	}
	return AmountOfExperienceToAdd;
}

int Snake::ExperienceBottle::SetInterval()
{
	int Interval = 0;

	int ExpBottleSize = ExpBottle->Width;
	switch (ExpBottleSize)
	{
	case 12: case 13: case 14:
		Interval = 15000;
		break;

	case 15: case 16:
		Interval = 10000;
		break;

	case 17: case 18:
		Interval = 7500;
		break;

	case 19: case 20:
		Interval = 6000;
		break;
	default:
		break;
	}
	return Interval;
}

void Snake::ExperienceBottle::Deconstruct()
{
	ExpBottle->Visible = false;
	ExpBottle = nullptr;
	TimeAlive->Stop();
	TimeAlive->Tick -= gcnew System::EventHandler(this, &ExperienceBottle::OnTimeAliveEnd);
	isAbleToRemove = true;
}
