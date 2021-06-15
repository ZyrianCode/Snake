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
		PictureBox^ CommonCoinItem = gcnew PictureBox(); //Монета
		Vector2^ CommonCoinPos = gcnew Vector2(); //Позиция монеты
		Timer^ TimeAlive = gcnew Timer(); //Время жизни монеты
		bool isAbleToRemove; //Позволяет определять когда можно удалять объект с игрового поля

		//Происходит, когда время жизни монеты заканчивается (автоматическое уничтожение монеты)
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);

		//Генерирует монету
		void GenerateCommonCoin();

		//Проверяет коллизию с позицией змейки на поле (Если коллизия есть, объект будет сгенерирован в другом месте)
		void CheckCollisionWithSnake();

		//Пополняет баланс
		int AddBalance();

		//Устанавливает интервал для времени жизни монеты
		int SetInterval();

		//Метод для инициализации свойств монеты
		void Initialize();
		
		//Метод для уничтожения фрукта
		void Deconstruct();
	};
}
