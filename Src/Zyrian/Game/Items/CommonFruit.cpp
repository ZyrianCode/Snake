#include "CommonFruit.h"
#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

void Snake::CommonFruit::GenerateCommonFruit()
{
	Random^ rand = gcnew Random();
	FruitPos->X = rand->Next(8, 680 - 8);
	FruitPos->Y = rand->Next(8, 530 - 8);
	
	CheckCollisionWithSnake();
	
	int tempX = FruitPos->X % 10;
	FruitPos->X -= tempX;

	int tempY = FruitPos->Y % 10;
	FruitPos->Y -= tempY;

	CommonFruitItem->Location = Point(FruitPos->X, FruitPos->Y);
}

void Snake::CommonFruit::CheckCollisionWithSnake()
{
	Snake^ snake = gcnew Snake();
	for (int i = 0; i < snake->GetLength(); i++)
	{
		if (FruitPos->X == snake->SnakeEntity[i]->Location.X &&
			FruitPos->Y == snake->SnakeEntity[i]->Location.Y)
		{
			GenerateCommonFruit();
		}
	}
}

void Snake::CommonFruit::Initialize()
{
	CommonFruitItem = gcnew PictureBox();
	CommonFruitItem->BackColor = Color::Yellow;
	CommonFruitItem->Width = 10;
	CommonFruitItem->Height = 10;
}

void Snake::CommonFruit::Deconstruct()
{
	CommonFruitItem->Visible = false;
	CommonFruitItem = nullptr;
}
