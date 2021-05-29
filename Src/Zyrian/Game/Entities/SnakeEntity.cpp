#include "SnakeEntity.h"


void Snake::Snake::Initialize()
{
	SnakeEntity = gcnew array<PictureBox^, 1>(400);
	SnakeEntity[0] = gcnew PictureBox();
	Step = 10;
	SnakeEntity[0]->Location = Point(300, 200);
	SnakeEntity[0]->BackColor = Color::DarkGreen;
	SnakeEntity[0]->Width = 10;
	SnakeEntity[0]->Height = 10;
}

void Snake::Snake::Deconstruct()
{
	for (int i = 0; i <= gameStats->Score; i++)
	{
		SnakeEntity[i]->Visible = false;
		SnakeEntity[i] = nullptr;
	}
}

void Snake::Snake::MoveForward()
{
	//Vector2^ direction = gcnew Vector2();
	direction->X = 0;
	direction->Y = -1;
}

void Snake::Snake::MoveBackward()
{
	//Vector2^ direction = gcnew Vector2();
	direction->X = 0;
	direction->Y = 1;
}

void Snake::Snake::MoveRight()
{
	//Vector2^ direction = gcnew Vector2();
	direction->X = 1;
	direction->Y = 0;
}

void Snake::Snake::MoveLeft()
{
	//Vector2^ direction = gcnew Vector2();
	direction->X = -1;
	direction->Y = 0;
}

void Snake::Snake::Move()
{
	//gameStats = gcnew GameStats();

	for (int i = gameStats->Score; i >= 1; i--)
	{
		SnakeEntity[i]->Location = SnakeEntity[i - 1]->Location;
	}

	SnakeEntity[0]->Location = Point(SnakeEntity[0]->Location.X + direction->X * Step, SnakeEntity[0]->Location.Y + direction->Y * Step);
}

void Snake::Snake::Eat()
{
	if (SnakeEntity[0]->Location.X == items->commonFruit->FruitPos->X && SnakeEntity[0]->Location.Y == items->commonFruit->FruitPos->Y)
	{
		++gameStats->Score;
		gameStats->WasScoreChanged = true;
		IsAnyObjectWasEaten = true;
		StartGrowth();
		items->commonFruit->Deconstruct();
		items->commonFruit = gcnew CommonFruit();
		items->commonFruit->Initialize();
		items->commonFruit->GenerateCommonFruit();
	}
	if (SnakeEntity[0]->Location.X == items->commonCoin->CommonCoinPos->X && SnakeEntity[0]->Location.Y == items->commonCoin->CommonCoinPos->Y)
	{
		//items->commonCoin->AddBalance();
		gameStats->Balance += 5;
		gameStats->WasBalanceChanged = true;
		IsAnyObjectWasEaten = true;
		items->commonCoin->Deconstruct();
		items->commonCoin = gcnew CommonCoin();
		items->commonCoin->Initialize();
		items->commonCoin->GenerateCommonCoin();
	}
}

void Snake::Snake::StartGrowth()
{
	SnakeEntity[gameStats->Score] = gcnew PictureBox();
	SnakeEntity[gameStats->Score]->Location = Point(SnakeEntity[gameStats->Score - 1]->Location.X + (Step - 2) * direction->X, SnakeEntity[gameStats->Score - 1]->Location.Y - (Step - 2) * direction->Y);
	SnakeEntity[gameStats->Score]->BackColor = Color::FromArgb(55, 120, 86);
	SnakeEntity[gameStats->Score]->Width = 8;
	SnakeEntity[gameStats->Score]->Height = 8;
}

Snake::Vector2^ Snake::Snake::GetDirection()
{
	Vector2^ direction = gcnew Vector2();
	return direction;
}

void Snake::Snake::SetOppositDirection()
{
	if (direction->X == 0 && direction->Y == -1)
	{
		MoveBackward();
	}
	else if (direction->X == 0 && direction->Y == 1)
	{
		MoveForward();
	}
	else if (direction->X == 1 && direction->Y == 0)
	{
		MoveLeft();
	}
	else if (direction->X == -1 && direction->Y == 0)
	{
		MoveRight();
	}
}




