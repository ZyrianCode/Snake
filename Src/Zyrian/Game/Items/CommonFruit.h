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
		PictureBox^ CommonFruitItem = gcnew PictureBox(); //Сам фрукт
		Vector2^ FruitPos = gcnew Vector2(); //Позиция фрукта

		//Генерирует фрукт
		void GenerateCommonFruit();
		
		//Проверяет коллизию с позицией змейки на поле (Если коллизия есть, объект будет сгенерирован в другом месте)
		void CheckCollisionWithSnake();

		//Метод для инициализации свойств фрукта
		void Initialize();

		//Метод для уничтожения фрукта
		void Deconstruct();

		//Возвращает насыщение
		float GetSaturation();
	
	private:
		float _saturation = 2.5f; //Насыщение
	};


}