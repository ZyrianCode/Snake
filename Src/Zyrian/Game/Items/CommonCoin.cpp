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
	//Snake^ snake = gcnew Snake();
	//GameStats^ gameStats = gcnew GameStats();
	//gameStats->Balance += 5;
	Random^ rand = gcnew Random();
	int CoinsToAdd = rand->Next(5, 10);
	return CoinsToAdd;
}

void Snake::CommonCoin::Initialize()
{
	CommonCoinItem = gcnew PictureBox();
	CommonCoinItem->BackColor = Color::FromArgb(196, 164, 55);
	CommonCoinItem->Width = 12;
	CommonCoinItem->Height = 12;
	TimeAlive->Interval = 10000;
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
