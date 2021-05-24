#pragma once
#include "Src/Zyrian/Game/CustomTypes/Vector2.h"

public ref class MovePacket
{
public:
	MovePacket(Snake::Vector2^ Direction)
	{
		direction = Direction;
	}
private:
	Snake::Vector2^ direction;
};
