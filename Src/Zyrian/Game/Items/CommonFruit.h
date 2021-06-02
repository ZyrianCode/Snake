#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"
#include "Src/Zyrian/Game/Statistics/GameStats.h"
//#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

namespace Snake
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Snake;
	
	public ref class CommonFruit
	{
	public:
		PictureBox^ CommonFruitItem = gcnew PictureBox();
		Vector2^ FruitPos = gcnew Vector2();
		
		void GenerateCommonFruit();
		void CheckCollisionWithSnake();
		void Initialize();
		void Deconstruct();
	private:
		
	};


}