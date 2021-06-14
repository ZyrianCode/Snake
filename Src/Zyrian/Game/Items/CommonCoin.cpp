#include "CommonCoin.h"
#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

void Snake::CommonCoin::OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e)
{
	Deconstruct();
}

void Snake::CommonCoin::GenerateCommonCoin()
{
	Random^ rand = gcnew Random();
	CommonCoinPos->X = rand->Next(10, 680 - 10);
	CommonCoinPos->Y = rand->Next(10, 530 - 10);

	int tempX = CommonCoinPos->X % 10;
	CommonCoinPos->X -= tempX;

	int tempY = CommonCoinPos->Y % 10;
	CommonCoinPos->Y -= tempY;
	
	CheckCollisionWithSnake();
	//Здесь добавить проверку на совпадение позиции с позициями фруктов в разных реестрах
	CommonCoinItem->Location = Point(CommonCoinPos->X, CommonCoinPos->Y);
	TimeAlive->Start();
}

void Snake::CommonCoin::CheckCollisionWithSnake()
{
	Snake^ snake = gcnew Snake();
	for (int i = 0; i < snake->GetLength(); i++)
	{
		if (CommonCoinPos->X == snake->SnakeEntity[i]->Location.X &&
			CommonCoinPos->Y == snake->SnakeEntity[i]->Location.Y)
		{
			GenerateCommonCoin();
		}
	}
}

int Snake::CommonCoin::AddBalance()
{
	Random^ rand = gcnew Random();
	int CoinSize = CommonCoinItem->Width; //Поскольку монета квадрат - присваивать можно любой параметр из двух: длинна и ширина
	int CoinsToAdd = 0;
	switch (CoinSize)
	{
		case 12: case 13: case 14:
			CoinsToAdd = rand->Next(5, 15);
			break;
		
		case 15: case 16:
			CoinsToAdd = rand->Next(16, 30);
			break;
		
		case 17: case 18:
			CoinsToAdd = rand->Next(31, 50);
			break;
		
		case 19: case 20:
			CoinsToAdd = rand->Next(51, 100);
			break;
	default:
		break;
	}
	return CoinsToAdd;
}

int Snake::CommonCoin::SetInterval()
{
	int Interval = 0;
	
	int CoinSize = CommonCoinItem->Width;
	switch (CoinSize)
	{
	case 12: case 13: case 14:
		Interval = 15000;
		break;

	case 15: case 16:
		Interval = 10000;
		break;

	case 17: case 18:
		Interval = 8000;
		break;

	case 19: case 20:
		Interval = 6500;
		break;
	default:
		break;
	}
	return Interval;
}

void Snake::CommonCoin::Initialize()
{
	CommonCoinItem = gcnew PictureBox();
	CommonCoinItem->BackColor = Color::FromArgb(196, 164, 55);

	//Рандомно задаём Высоту и ширину монетки
	Random^ rand = gcnew Random();
	int RandAmount = rand->Next(12, 21);
	CommonCoinItem->Width = RandAmount;
	CommonCoinItem->Height = RandAmount;
	
	TimeAlive->Interval = SetInterval();
	TimeAlive->Tick += gcnew System::EventHandler(this, &CommonCoin::OnTimeAliveEnd);
	isAbleToRemove = false;
}

void Snake::CommonCoin::Deconstruct()
{
	CommonCoinItem->Visible = false;
	CommonCoinItem = nullptr;
	TimeAlive->Stop();
	TimeAlive->Tick -= gcnew System::EventHandler(this, &CommonCoin::OnTimeAliveEnd);
	isAbleToRemove = true;
}
