#include "CommonFruit.h"

void Snake::CommonFruit::GenerateCommonFruit()
{
	//Game^ game = gcnew Game();
	FruitPos->X = rand->Next(7, 680 - 7);
	FruitPos->Y = rand->Next(7, 530 - 7);
	
	CheckCollisionWithSnake();
	
	int tempX = FruitPos->X % 10;
	FruitPos->X -= tempX;

	int tempY = FruitPos->Y % 10;
	FruitPos->Y -= tempY;

	CommonFruitItem->Location = Point(FruitPos->X, FruitPos->Y);

	//CommonFruit->Controls->Add(CommonFruitItem);
}

void Snake::CommonFruit::CheckCollisionWithSnake()
{
	GameStats^ gameStats = gcnew GameStats();
	for (int i = 0; i < gameStats->Score; i++)
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
