#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"

namespace Snake {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Snake;
	
	public ref class SpeedPotion
	{
	public:
		PictureBox^ SpeedPotionBottle = gcnew PictureBox(); //Бутылёк зелья скорости
		Vector2^ SpeedPotionPos = gcnew Vector2(); //Позиция зелья скорости
		Timer^ TimeAlive = gcnew Timer(); //Время жизни зелья скорости
		Timer^ Duration = gcnew Timer(); //Продолжительность действия зелья скорости
		
		bool isAbleToRemove; //Позволяет определять когда можно удалять объект с игрового поля
		bool isAbleToRemoveSpeedEffect; //Позволяет определять когда можно удалять эффект у змейки

		//Метод для инициализации свойств зелья скорости
		void Initialize();

		//Метод для уничтожения бутылька с опытом
		void Deconstruct();

		//Запускает действие зелья с продолжительностью 
		void StartPotionEffectDuration();

		//Происходит, когда время жизни бутылька скорости заканчивается (автоматическое уничтожение бутылька скорости)
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);

		//Происходит, когда продолжительность действия зелья скорости заканчивается
		void OnDurationEnd(System::Object^ sender, System::EventArgs^ e);

		//Генерирует бутылёк зелья скорости на игровом поле
		void GenerateSpeedPotion();

		//Проверяет коллизию с позицией змейки на поле(Если коллизия есть, объект будет сгенерирован в другом месте)
		void CheckCollisionWithSnake();

		//Возвращает величину скорости, на которую надо изменить скорость змейки
		float GetSpeedAmount();
	
	private:
		float _speedAmount = 0.40f; //Величина на которую ускоряет зелье
	};

}