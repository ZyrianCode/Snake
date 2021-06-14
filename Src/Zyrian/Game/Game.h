#pragma once
#include "Entities/SnakeEntity.h"
#include "Options/Options.h"
#include "Utilities/OptionsSaveSystem.h"
#include "Spawners/CommonCoinSpawner.h"
#include "Spawners/ExperienceBottleSpawner.h"
#include "Spawners/SpeedPotionSpawner.h"
#include "Items/CommonCoin.h"
//#include "Utilities/Settings/GlobalSettings.h"
//#include "Items/CommonFruit.h"

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// ������ ��� Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void);
		//{
		//	InitializeComponent();
		//	//
		//	//TODO: �������� ��� ������������
		//	//
		//}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlGameTopSide;
	private: System::Windows::Forms::Label^ lblGameTopSide;
	public: System::Windows::Forms::Panel^ pnlUpperBorder;
	private:
	public: System::Windows::Forms::Panel^ pnlLowerBorder;
	public: System::Windows::Forms::Panel^ pnlLeftBorder;
	public: System::Windows::Forms::Panel^ pnlRightBorder;




	public: System::Windows::Forms::Panel^ pnlGameArea;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameFormElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameFormDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSidePnlDragControl;
	private: System::Windows::Forms::Label^ lblGameCount;
	private: System::Windows::Forms::Timer^ GameTimer;
	private: System::Windows::Forms::Label^ lblGameExp;
	private: System::Windows::Forms::Label^ lblGameBalance;
	private: System::Windows::Forms::Panel^ pnlGameOver;
	private: System::Windows::Forms::Label^ lblGameOver;
	private: System::Windows::Forms::Timer^ CommonCoinSpawnTimer;
	private: System::Windows::Forms::Timer^ CommonCoinIdleTime;
	private: System::Windows::Forms::Label^ lblSpeedPotionEffect;
	private: System::Windows::Forms::Label^ lblSnakeHunger;
	private: System::Windows::Forms::Label^ lblSnakeHealth;

	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlGameTopSide = (gcnew System::Windows::Forms::Panel());
			this->lblGameTopSide = (gcnew System::Windows::Forms::Label());
			this->pnlUpperBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlLowerBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlRightBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlGameArea = (gcnew System::Windows::Forms::Panel());
			this->pnlGameOver = (gcnew System::Windows::Forms::Panel());
			this->lblGameOver = (gcnew System::Windows::Forms::Label());
			this->bunifuGameFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGameTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->lblGameCount = (gcnew System::Windows::Forms::Label());
			this->GameTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblGameBalance = (gcnew System::Windows::Forms::Label());
			this->lblGameExp = (gcnew System::Windows::Forms::Label());
			this->CommonCoinSpawnTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->CommonCoinIdleTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblSnakeHealth = (gcnew System::Windows::Forms::Label());
			this->lblSnakeHunger = (gcnew System::Windows::Forms::Label());
			this->lblSpeedPotionEffect = (gcnew System::Windows::Forms::Label());
			this->pnlGameTopSide->SuspendLayout();
			this->pnlGameArea->SuspendLayout();
			this->pnlGameOver->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlGameTopSide
			// 
			this->pnlGameTopSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGameTopSide->Controls->Add(this->lblGameTopSide);
			this->pnlGameTopSide->Location = System::Drawing::Point(0, -1);
			this->pnlGameTopSide->Name = L"pnlGameTopSide";
			this->pnlGameTopSide->Size = System::Drawing::Size(700, 50);
			this->pnlGameTopSide->TabIndex = 0;
			// 
			// lblGameTopSide
			// 
			this->lblGameTopSide->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameTopSide->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblGameTopSide->Location = System::Drawing::Point(293, 13);
			this->lblGameTopSide->Name = L"lblGameTopSide";
			this->lblGameTopSide->Size = System::Drawing::Size(100, 23);
			this->lblGameTopSide->TabIndex = 0;
			this->lblGameTopSide->Text = L"Snake";
			this->lblGameTopSide->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlUpperBorder
			// 
			this->pnlUpperBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->pnlUpperBorder->Location = System::Drawing::Point(0, 150);
			this->pnlUpperBorder->Name = L"pnlUpperBorder";
			this->pnlUpperBorder->Size = System::Drawing::Size(700, 10);
			this->pnlUpperBorder->TabIndex = 1;
			// 
			// pnlLowerBorder
			// 
			this->pnlLowerBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->pnlLowerBorder->Location = System::Drawing::Point(0, 690);
			this->pnlLowerBorder->Name = L"pnlLowerBorder";
			this->pnlLowerBorder->Size = System::Drawing::Size(700, 10);
			this->pnlLowerBorder->TabIndex = 2;
			// 
			// pnlLeftBorder
			// 
			this->pnlLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->pnlLeftBorder->Location = System::Drawing::Point(0, 160);
			this->pnlLeftBorder->Name = L"pnlLeftBorder";
			this->pnlLeftBorder->Size = System::Drawing::Size(10, 530);
			this->pnlLeftBorder->TabIndex = 3;
			// 
			// pnlRightBorder
			// 
			this->pnlRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->pnlRightBorder->Location = System::Drawing::Point(689, 160);
			this->pnlRightBorder->Name = L"pnlRightBorder";
			this->pnlRightBorder->Size = System::Drawing::Size(10, 530);
			this->pnlRightBorder->TabIndex = 4;
			// 
			// pnlGameArea
			// 
			this->pnlGameArea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGameArea->Controls->Add(this->pnlGameOver);
			this->pnlGameArea->Location = System::Drawing::Point(10, 160);
			this->pnlGameArea->Name = L"pnlGameArea";
			this->pnlGameArea->Size = System::Drawing::Size(680, 530);
			this->pnlGameArea->TabIndex = 5;
			// 
			// pnlGameOver
			// 
			this->pnlGameOver->Controls->Add(this->lblGameOver);
			this->pnlGameOver->Location = System::Drawing::Point(210, 72);
			this->pnlGameOver->Name = L"pnlGameOver";
			this->pnlGameOver->Size = System::Drawing::Size(228, 126);
			this->pnlGameOver->TabIndex = 0;
			this->pnlGameOver->Visible = false;
			// 
			// lblGameOver
			// 
			this->lblGameOver->Font = (gcnew System::Drawing::Font(L"JetBrains Mono", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameOver->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblGameOver->Location = System::Drawing::Point(14, 40);
			this->lblGameOver->Name = L"lblGameOver";
			this->lblGameOver->Size = System::Drawing::Size(203, 43);
			this->lblGameOver->TabIndex = 0;
			this->lblGameOver->Text = L"Game Over!";
			this->lblGameOver->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuGameFormElipse
			// 
			this->bunifuGameFormElipse->ElipseRadius = 25;
			this->bunifuGameFormElipse->TargetControl = this;
			// 
			// bunifuGameTopSideLblDragControl
			// 
			this->bunifuGameTopSideLblDragControl->Fixed = true;
			this->bunifuGameTopSideLblDragControl->Horizontal = true;
			this->bunifuGameTopSideLblDragControl->TargetControl = this->lblGameTopSide;
			this->bunifuGameTopSideLblDragControl->Vertical = true;
			// 
			// bunifuGameFormDragControl
			// 
			this->bunifuGameFormDragControl->Fixed = true;
			this->bunifuGameFormDragControl->Horizontal = true;
			this->bunifuGameFormDragControl->TargetControl = this;
			this->bunifuGameFormDragControl->Vertical = true;
			// 
			// bunifuGameTopSidePnlDragControl
			// 
			this->bunifuGameTopSidePnlDragControl->Fixed = true;
			this->bunifuGameTopSidePnlDragControl->Horizontal = true;
			this->bunifuGameTopSidePnlDragControl->TargetControl = this->pnlGameTopSide;
			this->bunifuGameTopSidePnlDragControl->Vertical = true;
			// 
			// lblGameCount
			// 
			this->lblGameCount->AutoSize = true;
			this->lblGameCount->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameCount->ForeColor = System::Drawing::Color::Red;
			this->lblGameCount->Location = System::Drawing::Point(523, 77);
			this->lblGameCount->Name = L"lblGameCount";
			this->lblGameCount->Size = System::Drawing::Size(100, 25);
			this->lblGameCount->TabIndex = 6;
			this->lblGameCount->Text = L"Count: 0";
			// 
			// GameTimer
			// 
			this->GameTimer->Tick += gcnew System::EventHandler(this, &Game::GameFormUpdate);
			// 
			// lblGameBalance
			// 
			this->lblGameBalance->AutoSize = true;
			this->lblGameBalance->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameBalance->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblGameBalance->Location = System::Drawing::Point(522, 52);
			this->lblGameBalance->Name = L"lblGameBalance";
			this->lblGameBalance->Size = System::Drawing::Size(122, 25);
			this->lblGameBalance->TabIndex = 7;
			this->lblGameBalance->Text = L"Balance: 0";
			// 
			// lblGameExp
			// 
			this->lblGameExp->AutoSize = true;
			this->lblGameExp->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameExp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblGameExp->Location = System::Drawing::Point(524, 102);
			this->lblGameExp->Name = L"lblGameExp";
			this->lblGameExp->Size = System::Drawing::Size(78, 25);
			this->lblGameExp->TabIndex = 8;
			this->lblGameExp->Text = L"Exp: 0";
			// 
			// CommonCoinSpawnTimer
			// 
			this->CommonCoinSpawnTimer->Interval = 5000;
			// 
			// lblSnakeHealth
			// 
			this->lblSnakeHealth->AutoSize = true;
			this->lblSnakeHealth->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSnakeHealth->ForeColor = System::Drawing::Color::Maroon;
			this->lblSnakeHealth->Location = System::Drawing::Point(12, 52);
			this->lblSnakeHealth->Name = L"lblSnakeHealth";
			this->lblSnakeHealth->Size = System::Drawing::Size(144, 25);
			this->lblSnakeHealth->TabIndex = 9;
			this->lblSnakeHealth->Text = L"Health: 10.0";
			// 
			// lblSnakeHunger
			// 
			this->lblSnakeHunger->AutoSize = true;
			this->lblSnakeHunger->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSnakeHunger->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblSnakeHunger->Location = System::Drawing::Point(12, 87);
			this->lblSnakeHunger->Name = L"lblSnakeHunger";
			this->lblSnakeHunger->Size = System::Drawing::Size(133, 25);
			this->lblSnakeHunger->TabIndex = 10;
			this->lblSnakeHunger->Text = L"Hunger: 5.0";
			// 
			// lblSpeedPotionEffect
			// 
			this->lblSpeedPotionEffect->AutoSize = true;
			this->lblSpeedPotionEffect->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblSpeedPotionEffect->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->lblSpeedPotionEffect->Location = System::Drawing::Point(263, 61);
			this->lblSpeedPotionEffect->Name = L"lblSpeedPotionEffect";
			this->lblSpeedPotionEffect->Size = System::Drawing::Size(155, 25);
			this->lblSpeedPotionEffect->TabIndex = 11;
			this->lblSpeedPotionEffect->Text = L"Speed: Active";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(700, 700);
			this->Controls->Add(this->lblSpeedPotionEffect);
			this->Controls->Add(this->lblSnakeHunger);
			this->Controls->Add(this->lblSnakeHealth);
			this->Controls->Add(this->lblGameExp);
			this->Controls->Add(this->lblGameBalance);
			this->Controls->Add(this->lblGameCount);
			this->Controls->Add(this->pnlGameArea);
			this->Controls->Add(this->pnlLeftBorder);
			this->Controls->Add(this->pnlRightBorder);
			this->Controls->Add(this->pnlLowerBorder);
			this->Controls->Add(this->pnlUpperBorder);
			this->Controls->Add(this->pnlGameTopSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->pnlGameTopSide->ResumeLayout(false);
			this->pnlGameArea->ResumeLayout(false);
			this->pnlGameOver->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: static Boolean IsRunning;
	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void GameOnInGameGui_Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);

	public: Vector2^ gameArea;
	//������
	//private: PictureBox^ superFruit;
		
	////������
	//private: PictureBox^ coin;
	//private: PictureBox^ timeCoin;
	////���������� �������
	//private: PictureBox^ bomb;
	//private: PictureBox^ potionOfSlowness;
	//private: PictureBox^ potionOfCoinDecrease;
	////���������� �������
	//private: PictureBox^ potionOfCoinIncrease;
	//private: PictureBox^ potionOfTimeFreeze;
	//private: PictureBox^ potionOfSpeed;
	
	private: Snake^ snake = gcnew Snake();
	private: GameStats^ gameStats = gcnew GameStats();
	private: Items^ items = gcnew Items();
	private: CommonCoinSpawner^ coinSpawner = gcnew CommonCoinSpawner();
	private: ExperienceBottleSpawner^ expBottleSpawner = gcnew ExperienceBottleSpawner();
	private: SpeedPotionSpawner^ speedPotionSpawner = gcnew SpeedPotionSpawner();
	private: OptionsSaveSystem^ optionsSaveSystem = gcnew OptionsSaveSystem();
	
	private: CommonFruit^ commonFruit = gcnew CommonFruit();
	private: CommonCoin^ commonCoin = gcnew CommonCoin();
	private: bool isDead = snake->isDead;
	private: bool isAlive = snake->isAlive;
	private: bool isPlayable;
	private: bool isCommonCoinGenerable;
	private: bool WasCommonCoinEaten;
	private: bool firstLaunch;
	//private: int step = 10;
	private: int updateInterval = 100;
	private: int updateSpeed;

	/// <summary>
	/// ��������� ��������� ����� ����
	/// </summary>
	private: void NewGame();
	/// <summary>
	/// ��������� ���� �� ������ ������
	/// </summary>
	private: void FirstLaunchCheck();
	/// <summary>
	/// ������� ������� �� ������� ����
	/// </summary>
	private: void RemoveObjects();
	/// <summary>
	/// ������� ���������� (����� ��� �������� ���������� ��� ����������� ����)
	/// ������ � RemoveObjects()
	/// </summary>
	private: void ResetStatistics();
	/// <summary>
	/// �������� ������
	/// </summary>
	private: void Movement();
		
	/// <summary>
	/// �������� �������� �������
	/// </summary>
	private: void Eating();
		
	/// <summary>
	/// ����������� ������������ ������
	/// </summary>
	private: void SelfEating();
		
	/// <summary>
	/// ��������� ��������� ��������� ����
	/// </summary>
	private: void GameOver();
		
	/// <summary>
	/// ������� ����������� ������ �������� ����
	/// </summary>
	private: void OnIntersectBorder();
		
	/// <summary>
	/// ���������� ������
	/// </summary>
	private: void GenerateCommonFruits();
		
	/// <summary>
	/// ���������� ������
	/// </summary>
	private: void GenerateCommonCoin();
		
	/// <summary>
	/// ���������� �������� �����
	/// </summary>
	private: void GenerateExperienceBottle();

	/// <summary>
	/// ���������� ����� ��������
	/// </summary>
	private: void GenerateSpeedPotion();
		
	/// <summary>
	/// �������� �������� ���������� ����
	/// </summary>
	private: void ChangeSpeed();
	private: void OnAbleToAddCoin();
	private: void OnAbleToRemoveCoin();
	private: void OnAbleToAddExpBottle();
	private: void OnAbleToRemoveExpBottle();
	private: void OnAbleToAddSpeedPotion();
	private: void OnAbleToRemoveSpeedPotion();

	private: void SnakeHealthHungerUpdate();
	
	private: System::Void GameFormUpdate(System::Object^ sender, System::EventArgs^ e);
};

	
	//__interface IFruit //������������� ����� ��������� �������
	//{
	//	public: void GenerateFruit();
	//};
	//

	//class CommonFruit : IFruit //��������� ���������� Exp � Score
	//{
	//public:
	//	
	//	int ExpAmount = 5; //��������� ����������� Exp
	//	int ScoreAmount = 1; //��������� ����������� score
	//	float Factor = 1.0f; //������� ��������� ������
	//	//void GenerateFruit();
	//	//void ApplyEffect(); //������������ ����� ��������� �������������� � ������� � ��������� ������ ��������� �������
	//private:
	//	//void AddScore();
	//	//void AddExp();
	//};

	//class SuperFruit : IFruit
	//{
	//public:
	//	
	//	int ExpAmount = 20; //���������� Exp
	//	int ScoreAmount = -10; //���������� �����
	//	int AmountOfTimeToAdd = 10;
	//	float Factor = 0.25f; //������� ��������� ������
	//	//void GenerateFruit();
	//	//void ApplyEffect(); //������������ ����� ��������� �������������� � ������� � ��������� ������ ��������� �������
	//private:
	//	//void IncreaseTime();
	//	//void AddScore();
	//	//void AddExp();
	//};


	//
	//__interface ICoin
	//{
	//	public: void GenerateCoin();
	//};
	//
	//class CommonCoin : ICoin //��������� ������ ������
	//{
	//public:

	//	int AmountOfCoinsToAdd = 10;
	//	//void GenerateCoin();
	//	//void AddToBalance();
	//private:
	//	//
	//};
	//
	//class TimeCoin : ICoin //���������� �����
	//{
	//public:
	//	int AmountOfTimeToAdd = 10;
	//	//void AddTime();
	//	//void GenerateCoin();
	//private:

	//};


	//
	//class Bomb //�������� ���� ����. ��� ���������� � ������� ���������, ���� ����� ���������.
	//{
	//public:
	//	
	//	int TimeToExplosion = 10;
	//	int DamageRadius = 4;
	//	float Factor = 0.35f;
	//	//void GenerateBomb();
	//	//void ApplyExplosion();
	//private:
	//	//void StartBombTimer();
	//	//void ExplodeBomb();
	//};

	//

	//__interface ICommonPotion 
	//{
	//	public: void GeneratePotion();
	//	public:	void ApplyEffect();		
	//};
	//__interface IRarePotion 
	//{
	//	public: void GeneratePotion();
	//	public: void ApplyEffect();
	//};
	//



	//class PotionOfSlowness : ICommonPotion  
	//{
	//public:
	//	int Duration = 20;
	//	float Multiplier = 1.2f;
	//	float Factor = 0.40f;
	//	//void CancelEffect();
	//private:
	//	//void GeneratePotion();
	//	//void StartPotionTimer();
	//	//void DecreaseStep(float Multiplier);
	//};


	//class PotionOfSpeed : ICommonPotion 
	//{
	//public:
	//	int Duration = 20; //����� ��������
	//	float Multiplier = 1.2f; //��������� ���������
	//	float Factor = 0.40f; //������� ���������
	//	//void ApplyEffect();
	//	//void CancelEffect();
	//private:
	//	//void GeneratePotion();
	//	//void SaveSpeedBeforeApplyEffect();
	//	//void StartPotionTimer();
	//	//void IncreaseStep(float Multiplier);
	//	//void PotionTimerReset();
	//	//void ReturnInitialSpeed();
	//};

	//class PotionOfTimeFreeze : IRarePotion 
	//{
	//public:
	//	
	//	int Duration = 10; //����� ��������
	//	float Factor = 0.25f; //������� ���������
	//	//void ApplyEffect();
	//	//void CancelEffect();
	//private:
	//	//void GeneratePotion();
	//	//void StartPotionTimer();
	//	//void GameTimeStop();
	//};

	/*public ref class Snake
	{
	public:

		array<PictureBox^>^ SnakeEntity;
	private:

	};*/
	

}
