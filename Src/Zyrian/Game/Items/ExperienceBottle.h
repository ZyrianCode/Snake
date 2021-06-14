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
	using namespace Snake;
	
	public ref class ExperienceBottle
	{
	public:
		PictureBox^ ExpBottle = gcnew PictureBox();
		Vector2^ ExpBottlePos = gcnew Vector2();
		Timer^ TimeAlive = gcnew Timer();
		bool isAbleToRemove;
		void Initialize();
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);
		void GenerateExperienceBottle();
		void CheckCollisionWithSnake();
		int AddAmountOfExperience();
		int SetInterval();
		void Deconstruct();
	};
}
