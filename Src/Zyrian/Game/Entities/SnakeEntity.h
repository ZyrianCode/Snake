#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"
#include "Src/Zyrian/Game/Lists/Items.h"

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
		array<PictureBox^>^ SnakeEntity;
		//Items^ items = gcnew Items();
		//GameStats^ gameStats = gcnew GameStats();
		
		/*bool IsAnyObjectWasEaten = false;
		bool WasBorderCollision = false;*/
		int Step = 10;
		
		void Initialize();
		void Deconstruct();
		void MoveForward();
		void MoveBackward();
		void MoveRight();
		void MoveLeft();
		void Move();
		void Eat();
		bool SelfEat();
		Vector2^ GetDirection();
		void SetOppositDirection();

		int GetLength();
		void SetLength(int Length);
		
	private:
		Vector2^ direction = gcnew Vector2();
		int _snakeLength;
		
		void StartGrowth();
	};
}