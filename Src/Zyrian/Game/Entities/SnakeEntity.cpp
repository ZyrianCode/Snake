#include "SnakeEntity.h"

void Snake::Snake::Initialize()
{
	Random^ _rand = gcnew Random();
	int X, Y;
	X = _rand->Next(100, 680 - 50);
	Y = _rand->Next(100, 530 - 50);
	int tempX = X % 10;
	X -= tempX;
	int tempY = Y % 10;
	Y -= tempY;

	SnakeEntity = gcnew array<PictureBox^, 1>(400);
	SnakeEntity[0] = gcnew PictureBox();
	Step = 10;
	_snakeLength = 0;
	SnakeEntity[0]->Location = Point(X, Y);
	SnakeEntity[0]->BackColor = Color::DarkGreen;
	SnakeEntity[0]->Width = 10;
	SnakeEntity[0]->Height = 10;
}

void Snake::Snake::Deconstruct()
{
	for (int i = 0; i <= _snakeLength; i++)
	{
		SnakeEntity[i]->Visible = false;
		SnakeEntity[i] = nullptr;
	}
}

void Snake::Snake::MoveForward()
{
	direction->X = 0;
	direction->Y = -1;
}

void Snake::Snake::MoveBackward()
{
	direction->X = 0;
	direction->Y = 1;
}

void Snake::Snake::MoveRight()
{
	direction->X = 1;
	direction->Y = 0;
}

void Snake::Snake::MoveLeft()
{
	direction->X = -1;
	direction->Y = 0;
}

void Snake::Snake::Move()
{
	//gameStats = gcnew GameStats();

	for (int i = _snakeLength; i >= 1; i--)
	{
		SnakeEntity[i]->Location = SnakeEntity[i - 1]->Location;
		
	}

	SnakeEntity[0]->Location = Point(SnakeEntity[0]->Location.X + direction->X * Step, SnakeEntity[0]->Location.Y + direction->Y * Step);
}

void Snake::Snake::Eat()
{
	StartGrowth();
	//if (SnakeEntity[0]->Bounds.IntersectsWith(/*items->commonFruit->CommonFruitItem->Bounds*/))
	//{
	//	++gameStats->Score;
	//	gameStats->WasScoreChanged = true;
	//	IsAnyObjectWasEaten = true;
	//	StartGrowth();
	//	items->commonFruit->Deconstruct();
	//	items->commonFruit = gcnew CommonFruit();
	//	items->commonFruit->Initialize();
	//	items->commonFruit->GenerateCommonFruit();
	//}
	////if ((SnakeEntity[0]->Location.X == items->commonCoin->CommonCoinPos->X) &&
	//	//(SnakeEntity[0]->Location.Y == items->commonCoin->CommonCoinPos->Y))
	//if (SnakeEntity[0]->Bounds.IntersectsWith(items->commonCoin->CommonCoinItem->Bounds))
	//{
	//	gameStats->Balance += 5;
	//	gameStats->WasBalanceChanged = true;
	//	IsAnyObjectWasEaten = true;
	//	items->commonCoin->Deconstruct();
	//	items->commonCoin = gcnew CommonCoin();
	//	items->commonCoin->Initialize();
	//	items->commonCoin->GenerateCommonCoin();
	//}
}

bool Snake::Snake::SelfEat()
{
	for (int i = 2; i < _snakeLength; i++)
	{
		if (SnakeEntity[0]->Location == SnakeEntity[i]->Location)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void Snake::Snake::StartGrowth()
{
	SnakeEntity[_snakeLength] = gcnew PictureBox();
	SnakeEntity[_snakeLength]->Location = Point(SnakeEntity[_snakeLength - 1]->Location.X + (Step *direction->X), SnakeEntity[_snakeLength - 1]->Location.Y - (Step * direction->Y));
	SnakeEntity[_snakeLength]->BackColor = Color::FromArgb(55, 120, 86);
	SnakeEntity[_snakeLength]->Width = 8;
	SnakeEntity[_snakeLength]->Height = 8;
}

Snake::Vector2^ Snake::Snake::GetDirection()
{
	Vector2^ direction = gcnew Vector2();
	return direction;
}

void Snake::Snake::SetOppositDirection()
{
	if (direction->X == 0 && direction->Y == -1) { MoveBackward(); }
	else if (direction->X == 0 && direction->Y == 1) { MoveForward(); }
	else if (direction->X == 1 && direction->Y == 0) { MoveLeft(); }
	else if (direction->X == -1 && direction->Y == 0) { MoveRight(); }
}

int Snake::Snake::GetLength()
{
	return _snakeLength;
}

void Snake::Snake::SetLength(int Length)
{
	_snakeLength = Length;
}





