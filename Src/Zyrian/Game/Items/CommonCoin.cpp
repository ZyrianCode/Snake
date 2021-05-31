#include "CommonCoin.h"
#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

void Snake::CommonCoin::GenerateCommonCoin()
{
	CommonCoinPos->X = rand->Next(10, 680 - 10);
	CommonCoinPos->Y = rand->Next(10, 530 - 10);

	CheckCollisionWithSnake();

	int tempX = CommonCoinPos->X % 10;
	CommonCoinPos->X -= tempX;

	int tempY = CommonCoinPos->Y % 10;
	CommonCoinPos->Y -= tempY;

	CommonCoinItem->Location = Point(CommonCoinPos->X, CommonCoinPos->Y);
}

void Snake::CommonCoin::CheckCollisionWithSnake()
{
	Snake^ snake = gcnew Snake();
	for (int i = 0; i < snake->gameStats->Score; i++)
	{
		if (CommonCoinPos->X == snake->SnakeEntity[i]->Location.X &&
			CommonCoinPos->Y == snake->SnakeEntity[i]->Location.Y)
		{
			GenerateCommonCoin();
		}
	}
}

void Snake::CommonCoin::AddBalance()
{
	Snake^ snake = gcnew Snake();
	snake->gameStats->Balance += 5;
}

void Snake::CommonCoin::Initialize()
{
	CommonCoinItem = gcnew PictureBox();
	CommonCoinItem->BackColor = Color::FromArgb(196, 164, 55);
	CommonCoinItem->Width = 12;
	CommonCoinItem->Height = 12;
	
}

void Snake::CommonCoin::Deconstruct()
{
	CommonCoinItem->Visible = false;
	CommonCoinItem = nullptr;
}
