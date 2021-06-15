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
		array<PictureBox^>^ SnakeEntity; //������

		Timer^ Invincibility = gcnew Timer(); //������������ �� ������
		Timer^ HungerPeriod = gcnew Timer(); //�����
		Timer^ HealthDecreasePeriod = gcnew Timer(); //�������� �� ������
		
		Timer^ HealPeriod = gcnew Timer(); //�����������
		
		SnakeStatements^ snakeStatements = gcnew SnakeStatements(); 
		
		bool isAlive; //��������� ����� ������
		bool isDead; //��������� ������ ������

		float normalSpeed = _normalSpeed; //������� �������� ������������ ������
		
		void Initialize(); 
		void Deconstruct();
		
		//��������� ������������ � ������
		void StartHungerResistancePeriod();
		
		//��������� ��������� ���������� �������� ������ (����� ��� �������� ����� �����)
		void CheckStatements();
		
		//������ ��������� ����������� ������
		//���������� �����
		void MoveForward();
		//���������� �����
		void MoveBackward();
		//���������� ������
		void MoveRight();
		//���������� �����
		void MoveLeft();
		//��������� �������������
		void Move();

		//��������� ����
		void Eat();

		//��������� ����������������
		bool SelfEat();

		Vector2^ GetDirection();
		void SetOppositDirection();
		
		//��������� ����� �� ����������� �������
		void AddSaturation(float saturationToAdd);
		
		//�������� ������� �� ����������� �������
		void DecreaseSaturation(float saturationToRemove);
		
		//����������� �������� �� ����������� �������
		void IncreaseSpeed(float speedAmountToAdd);
		
		//�������� �������� �� ����������� �������
		void DecreaseSpeed(float speedAmountToRemove);
		
		//����� �� ����������� ���������� ��
		void Heal(float healthAmount);

		//��������� ���� 
		void TakeDamage(float damageToTake);

		//������������� �����
		void HungerRestart();

		//������������� ������� ������
		void StopSnakeTimers();
		
		//���������� �������� ������ ������
		int GetLength();

		//���������� ��������
		float GetSpeed();

		//���������� ���������� ��
		float GetHealth();

		//���������� ���������� ������
		float GetSaturation();

		//������������� ������ ������
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

		//��������� ���� ������
		void StartGrowth();

		//���������� ����� ������������� ������ ������������ �� ������
		void OnInvincibilityEnd(System::Object^ sender, System::EventArgs^ e);

		//���������� ��� ���������
		void OnHungerPeriod(System::Object^ sender, System::EventArgs^ e);

		//���������� ��� ���������� �� �� ������
		void OnHealthDecreasePeriod(System::Object^ sender, System::EventArgs^ e);

		//���������� ��� �����������
		void OnHealPeriod(System::Object^ sender, System::EventArgs^ e);
	};

}