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
	
	public ref class SnakeStatements
	{
	public:
		int InvincibilityStatus;
		int HungerPeriodStatus;
		int HealthDecreasePeriodStatus;

		int HealPeriodStatus;
		
		void StatementsRestart(); 
		
		void SetDefault(int Period);
		void Activate(int Period);
		void Deactivate(int Period);
	private:
		int _default = 0;
		int _active = 1;
		int _disactivated = 2;
	};

	public ref class Snake
	{
	public:
		array<PictureBox^>^ SnakeEntity;

		Timer^ Invincibility = gcnew Timer(); //Неуязвимость от голода
		Timer^ HungerPeriod = gcnew Timer(); //Голод
		Timer^ HealthDecreasePeriod = gcnew Timer(); //Умирание от голода
		
		Timer^ HealPeriod = gcnew Timer(); //Регенерация
		
		SnakeStatements^ snakeStatements = gcnew SnakeStatements(); //
		
		bool isAlive; //Состояние жизни змейки
		bool isDead; //Состояние смерти

		float normalSpeed = _normalSpeed;
		
		void Initialize(); 
		void Deconstruct();
		
		//Запускает неуязвимость к голоду
		void StartHungerResistancePeriod();
		
		//Проверяет состояния негативных эффектов голода (нужна для проверки после паузы)
		void CheckStatements();
		
		void MoveForward();
		void MoveBackward();
		void MoveRight();
		void MoveLeft();
		void Move();
		
		void Eat();
		bool SelfEat();

		Vector2^ GetDirection();
		void SetOppositDirection();
		
		//Пополняет голод на принимаемую единицу
		void AddSaturation(float saturationToAdd);
		
		//Отнимает сытость на принимаемую единицу
		void DecreaseSaturation(float saturationToRemove);
		
		//Увеличивает скорость на принимаемую единицу
		void IncreaseSpeed(float speedAmountToAdd);
		
		//Отнимает скорость на принимаемую единицу
		void DecreaseSpeed(float speedAmountToRemove);
		
		//Хилит на принимаемое количество хп
		void Heal(float healthAmount);

		//Принимает урон 
		void TakeDamage(float damageToTake);

		//Перезапускает голод
		void HungerRestart();

		//Останавливает эффекты голода
		void StopSnakeTimers();
		
		//Возвращает значение длинны змейки
		int GetLength();

		//Возвращает скорость
		float GetSpeed();

		//Возвращает количество хп
		float GetHealth();

		//Возвращает количество голода
		float GetSaturation();

		//Устанавливает длинну змейки
		void SetLength(int Length);
		
	private:
		Vector2^ direction = gcnew Vector2();
		
		int _invincibilityPeriod = 0;
		int _hungerPeriod = 1;
		int _healthDecreaseByHungerPeriod = 2;
		int _healingPeriod = 3;
		
		float _maxSpeed = 1.50f;
		float _maxHealth = 10.0f;
		float _maxSaturation = 5.0f;

		float _normalSpeed = 1.10f;
		int _snakeLength;
		int _step = 10;
		float _speed = 1.0f;
		float _health = _maxHealth;
		float _saturation = _maxSaturation;


		float _minSpeed = 0.8f;
		float _minHealth = 0.0f;
		float _minSaturation = 0.0f;

		//Запускает рост змейки
		void StartGrowth();

		//Происходит когда заканчивается период неуязвимости от голода
		void OnInvincibilityEnd(System::Object^ sender, System::EventArgs^ e);

		//Происходит при голодании
		void OnHungerPeriod(System::Object^ sender, System::EventArgs^ e);

		//Происходит при уменьшении хп от голода
		void OnHealthDecreasePeriod(System::Object^ sender, System::EventArgs^ e);

		//Происходит при регенерации
		void OnHealPeriod(System::Object^ sender, System::EventArgs^ e);
	};

}