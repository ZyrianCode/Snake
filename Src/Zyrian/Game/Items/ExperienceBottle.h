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
		PictureBox^ ExpBottle = gcnew PictureBox(); //Бутылёк опыта
		Vector2^ ExpBottlePos = gcnew Vector2(); //Позиция бутылька опыта
		Timer^ TimeAlive = gcnew Timer(); //Время жизни бутылька опыта
		bool isAbleToRemove; //Позволяет определять когда можно удалять объект с игрового поля
		
		//Метод для инициализации свойств монеты
		void Initialize();

		//Происходит, когда время жизни бутылька с опытом заканчивается (автоматическое уничтожение бутылька с опытом)
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);

		//Генерирует бутылёк опыта
		void GenerateExperienceBottle();

		//Проверяет коллизию с позицией змейки на поле (Если коллизия есть, объект будет сгенерирован в другом месте)
		void CheckCollisionWithSnake();

		//Добавляет количество опыта в зависимости от характеристик бутылька с опытом
		int AddAmountOfExperience();

		//Устанавливает время жизни бутылька с опытом
		int SetInterval();

		//Метод для уничтожения бутылька с опытом
		void Deconstruct();
	};
}
