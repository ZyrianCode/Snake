#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"
#include "Src/Zyrian/Game/Statistics/GameStats.h"
#include "Src/Zyrian/Game/Lists/Items.h"
//#include "Src/Zyrian/Game/Items/CommonFruit.h"
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
		//CommonFruit^ commonFruit = gcnew CommonFruit();
		Items^ items = gcnew Items();
		GameStats^ gameStats = gcnew GameStats();
		//PictureBox^ SnakeHead;
		bool IsAnyObjectWasEaten = false;
		int Step = 10;
		void Initialize();
		void Deconstruct();
		void MoveForward();
		void MoveBackward();
		void MoveRight();
		void MoveLeft();
		void Move();
		void Eat();
		void StartGrowth();
		Vector2^ GetDirection();
		void SetOppositDirection();
		
	private:
		Vector2^ direction = gcnew Vector2();
	};
}