#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"
#include "Src/Zyrian/Game/Statistics/GameStats.h"
//#include "Src/Zyrian/Game/Entities/SnakeEntity.h"

namespace Snake {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Snake;
	
	public ref class CommonCoin
	{
		public:
		PictureBox^ CommonCoinItem = gcnew PictureBox();
		Vector2^ CommonCoinPos = gcnew Vector2();
		Timer^ TimeAlive = gcnew Timer();
		bool isAbleToRemove;
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);
		void GenerateCommonCoin();
		void CheckCollisionWithSnake();
		int AddBalance();
		int SetInterval();
		void Initialize();
		void Deconstruct();
	};
}
