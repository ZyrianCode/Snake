#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"
#include "Src/Zyrian/Game/Statistics/GameStats.h"
namespace Snake {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Snake
	{
	public:
		~Snake()
		{
			//delete this;
		}
		array<PictureBox^>^ SnakeEntity;
		//PictureBox^ SnakeHead;
		int Step = 10;
		void Initialize();
		void Deinitialize();
		void MoveForward();
		void MoveBackward();
		void MoveRight();
		void MoveLeft();
		void Move();
		void Eat();
		Vector2^ GetDirection();
		void SetOppositDirection();
		
	private:
		Vector2^ direction = gcnew Vector2();
	};
}