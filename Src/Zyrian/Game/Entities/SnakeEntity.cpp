#include "SnakeEntity.h"


void Snake::Snake::Initialize()
{
	SnakeEntity = gcnew array<PictureBox^, 1>(400);
	SnakeEntity[0] = gcnew PictureBox();
	Step = 10;
	SnakeEntity[0]->Location = Point(300, 200);
	SnakeEntity[0]->BackColor = Color::DarkGreen;
	SnakeEntity[0]->Width = Step;
	SnakeEntity[0]->Height = Step;
}

void Snake::Snake::Deinitialize()
{
	SnakeEntity[0]->Visible = false;
	SnakeEntity[0] = nullptr;
	SnakeEntity = nullptr;
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
	GameStats^ gameStats = gcnew GameStats();

	for (int i = gameStats->Score; i >= 1; i--)
	{
		SnakeEntity[i]->Location = SnakeEntity[i - 1]->Location;
	}

	SnakeEntity[0]->Location = Point(SnakeEntity[0]->Location.X + direction->X * Step, SnakeEntity[0]->Location.Y + direction->Y * Step);
}

void Snake::Snake::Eat()
{
	throw gcnew System::NotImplementedException();
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




