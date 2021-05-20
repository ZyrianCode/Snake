#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InGameGUI
	/// </summary>
	public ref class InGameGUI : public System::Windows::Forms::Form
	{
	public:
		InGameGUI(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		static Boolean isInGameGUIVisible;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InGameGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlInGameGUITopSide;
	protected:
	private: System::Windows::Forms::Label^ lblInGameGUI;
	private: System::Windows::Forms::Panel^ pnlMenuIGNewGame;

	private: System::Windows::Forms::Label^ lblMenuIGNewGame;
	private: System::Windows::Forms::Button^ btnMenuIGNewGame;
	private: System::Windows::Forms::Panel^ pnlMenuIGSettings;
	private: System::Windows::Forms::Label^ lblMenuIGSettings;
	private: System::Windows::Forms::Button^ btnMenuIGSettings;
	private: System::Windows::Forms::Panel^ pnlMenuIGAbout;
	private: System::Windows::Forms::Label^ lblMenuIGAbout;
	private: System::Windows::Forms::Button^ btnMenuIGAbout;
	private: System::Windows::Forms::Panel^ pnlMenuIGBackToGame;


	private: System::Windows::Forms::Label^ lblMenuIGBackToGame;

	private: System::Windows::Forms::Button^ btnMenuIGBackToGame;

	private: System::Windows::Forms::Panel^ pnlMenuIGAuthor;

	private: System::Windows::Forms::Label^ lblMenuIGAuthor;

	private: System::Windows::Forms::Button^ btnMenuIGAuthor;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGUIIGElipse;
	private: System::Windows::Forms::Panel^ pnlMenuIGBackToMenu;
	private: System::Windows::Forms::Label^ lblMenuIGBackToMenu;
	private: System::Windows::Forms::Button^ btnMenuIGBackToMenu;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGBackToGameBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGBackToGamePnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGNewGamePnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGNewGameBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGSettingsBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGAboutPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGAboutBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGAuthorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGAuthorBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGBackToMenuPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuIGBackToMenuBtnElipse;




	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlInGameGUITopSide = (gcnew System::Windows::Forms::Panel());
			this->lblInGameGUI = (gcnew System::Windows::Forms::Label());
			this->pnlMenuIGNewGame = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGNewGame = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGNewGame = (gcnew System::Windows::Forms::Button());
			this->pnlMenuIGSettings = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGSettings = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGSettings = (gcnew System::Windows::Forms::Button());
			this->pnlMenuIGAbout = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGAbout = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGAbout = (gcnew System::Windows::Forms::Button());
			this->pnlMenuIGBackToGame = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGBackToGame = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGBackToGame = (gcnew System::Windows::Forms::Button());
			this->pnlMenuIGAuthor = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGAuthor = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGAuthor = (gcnew System::Windows::Forms::Button());
			this->bunifuGUIIGElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGBackToGameBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGBackToGamePnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGNewGamePnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGNewGameBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGAboutPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGAboutBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGAuthorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGAuthorBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->pnlMenuIGBackToMenu = (gcnew System::Windows::Forms::Panel());
			this->lblMenuIGBackToMenu = (gcnew System::Windows::Forms::Label());
			this->btnMenuIGBackToMenu = (gcnew System::Windows::Forms::Button());
			this->bunifuMenuIGBackToMenuPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuIGBackToMenuBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->pnlInGameGUITopSide->SuspendLayout();
			this->pnlMenuIGNewGame->SuspendLayout();
			this->pnlMenuIGSettings->SuspendLayout();
			this->pnlMenuIGAbout->SuspendLayout();
			this->pnlMenuIGBackToGame->SuspendLayout();
			this->pnlMenuIGAuthor->SuspendLayout();
			this->pnlMenuIGBackToMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlInGameGUITopSide
			// 
			this->pnlInGameGUITopSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlInGameGUITopSide->Controls->Add(this->lblInGameGUI);
			this->pnlInGameGUITopSide->Location = System::Drawing::Point(0, 0);
			this->pnlInGameGUITopSide->Name = L"pnlInGameGUITopSide";
			this->pnlInGameGUITopSide->Size = System::Drawing::Size(420, 50);
			this->pnlInGameGUITopSide->TabIndex = 1;
			// 
			// lblInGameGUI
			// 
			this->lblInGameGUI->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInGameGUI->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblInGameGUI->Location = System::Drawing::Point(119, 9);
			this->lblInGameGUI->Name = L"lblInGameGUI";
			this->lblInGameGUI->Size = System::Drawing::Size(209, 23);
			this->lblInGameGUI->TabIndex = 0;
			this->lblInGameGUI->Text = L"GUI In Game";
			this->lblInGameGUI->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlMenuIGNewGame
			// 
			this->pnlMenuIGNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGNewGame->Controls->Add(this->lblMenuIGNewGame);
			this->pnlMenuIGNewGame->Controls->Add(this->btnMenuIGNewGame);
			this->pnlMenuIGNewGame->Location = System::Drawing::Point(147, 74);
			this->pnlMenuIGNewGame->Name = L"pnlMenuIGNewGame";
			this->pnlMenuIGNewGame->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGNewGame->TabIndex = 2;
			// 
			// lblMenuIGNewGame
			// 
			this->lblMenuIGNewGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMenuIGNewGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGNewGame->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGNewGame->Name = L"lblMenuIGNewGame";
			this->lblMenuIGNewGame->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGNewGame->TabIndex = 1;
			this->lblMenuIGNewGame->Text = L"New Game";
			this->lblMenuIGNewGame->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGNewGame
			// 
			this->btnMenuIGNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGNewGame->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGNewGame->FlatAppearance->BorderSize = 0;
			this->btnMenuIGNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGNewGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMenuIGNewGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGNewGame->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGNewGame->Name = L"btnMenuIGNewGame";
			this->btnMenuIGNewGame->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGNewGame->TabIndex = 0;
			this->btnMenuIGNewGame->Text = L"New Game";
			this->btnMenuIGNewGame->UseVisualStyleBackColor = false;
			this->btnMenuIGNewGame->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGNewGame_Click);
			// 
			// pnlMenuIGSettings
			// 
			this->pnlMenuIGSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGSettings->Controls->Add(this->lblMenuIGSettings);
			this->pnlMenuIGSettings->Controls->Add(this->btnMenuIGSettings);
			this->pnlMenuIGSettings->Location = System::Drawing::Point(284, 74);
			this->pnlMenuIGSettings->Name = L"pnlMenuIGSettings";
			this->pnlMenuIGSettings->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGSettings->TabIndex = 3;
			// 
			// lblMenuIGSettings
			// 
			this->lblMenuIGSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMenuIGSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGSettings->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGSettings->Name = L"lblMenuIGSettings";
			this->lblMenuIGSettings->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGSettings->TabIndex = 1;
			this->lblMenuIGSettings->Text = L"Settings";
			this->lblMenuIGSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGSettings
			// 
			this->btnMenuIGSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGSettings->FlatAppearance->BorderSize = 0;
			this->btnMenuIGSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMenuIGSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGSettings->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGSettings->Name = L"btnMenuIGSettings";
			this->btnMenuIGSettings->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGSettings->TabIndex = 0;
			this->btnMenuIGSettings->Text = L"Settings";
			this->btnMenuIGSettings->UseVisualStyleBackColor = false;
			this->btnMenuIGSettings->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGSettings_Click);
			// 
			// pnlMenuIGAbout
			// 
			this->pnlMenuIGAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGAbout->Controls->Add(this->lblMenuIGAbout);
			this->pnlMenuIGAbout->Controls->Add(this->btnMenuIGAbout);
			this->pnlMenuIGAbout->Location = System::Drawing::Point(147, 222);
			this->pnlMenuIGAbout->Name = L"pnlMenuIGAbout";
			this->pnlMenuIGAbout->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGAbout->TabIndex = 4;
			// 
			// lblMenuIGAbout
			// 
			this->lblMenuIGAbout->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMenuIGAbout->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGAbout->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGAbout->Name = L"lblMenuIGAbout";
			this->lblMenuIGAbout->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGAbout->TabIndex = 1;
			this->lblMenuIGAbout->Text = L"About";
			this->lblMenuIGAbout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGAbout
			// 
			this->btnMenuIGAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGAbout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGAbout->FlatAppearance->BorderSize = 0;
			this->btnMenuIGAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGAbout->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMenuIGAbout->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGAbout->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGAbout->Name = L"btnMenuIGAbout";
			this->btnMenuIGAbout->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGAbout->TabIndex = 0;
			this->btnMenuIGAbout->Text = L"About";
			this->btnMenuIGAbout->UseVisualStyleBackColor = false;
			this->btnMenuIGAbout->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGAbout_Click);
			// 
			// pnlMenuIGBackToGame
			// 
			this->pnlMenuIGBackToGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGBackToGame->Controls->Add(this->lblMenuIGBackToGame);
			this->pnlMenuIGBackToGame->Controls->Add(this->btnMenuIGBackToGame);
			this->pnlMenuIGBackToGame->Location = System::Drawing::Point(11, 74);
			this->pnlMenuIGBackToGame->Name = L"pnlMenuIGBackToGame";
			this->pnlMenuIGBackToGame->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGBackToGame->TabIndex = 7;
			// 
			// lblMenuIGBackToGame
			// 
			this->lblMenuIGBackToGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblMenuIGBackToGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGBackToGame->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGBackToGame->Name = L"lblMenuIGBackToGame";
			this->lblMenuIGBackToGame->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGBackToGame->TabIndex = 1;
			this->lblMenuIGBackToGame->Text = L"Back";
			this->lblMenuIGBackToGame->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGBackToGame
			// 
			this->btnMenuIGBackToGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGBackToGame->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGBackToGame->FlatAppearance->BorderSize = 0;
			this->btnMenuIGBackToGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGBackToGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnMenuIGBackToGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGBackToGame->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGBackToGame->Name = L"btnMenuIGBackToGame";
			this->btnMenuIGBackToGame->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGBackToGame->TabIndex = 0;
			this->btnMenuIGBackToGame->Text = L"Back To Game";
			this->btnMenuIGBackToGame->UseVisualStyleBackColor = false;
			this->btnMenuIGBackToGame->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGBackToGame_Click);
			// 
			// pnlMenuIGAuthor
			// 
			this->pnlMenuIGAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGAuthor->Controls->Add(this->lblMenuIGAuthor);
			this->pnlMenuIGAuthor->Controls->Add(this->btnMenuIGAuthor);
			this->pnlMenuIGAuthor->Location = System::Drawing::Point(284, 222);
			this->pnlMenuIGAuthor->Name = L"pnlMenuIGAuthor";
			this->pnlMenuIGAuthor->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGAuthor->TabIndex = 6;
			// 
			// lblMenuIGAuthor
			// 
			this->lblMenuIGAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMenuIGAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGAuthor->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGAuthor->Name = L"lblMenuIGAuthor";
			this->lblMenuIGAuthor->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGAuthor->TabIndex = 1;
			this->lblMenuIGAuthor->Text = L"Author";
			this->lblMenuIGAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGAuthor
			// 
			this->btnMenuIGAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGAuthor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGAuthor->FlatAppearance->BorderSize = 0;
			this->btnMenuIGAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMenuIGAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGAuthor->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGAuthor->Name = L"btnMenuIGAuthor";
			this->btnMenuIGAuthor->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGAuthor->TabIndex = 0;
			this->btnMenuIGAuthor->Text = L"Author";
			this->btnMenuIGAuthor->UseVisualStyleBackColor = false;
			this->btnMenuIGAuthor->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGAuthor_Click);
			// 
			// bunifuGUIIGElipse
			// 
			this->bunifuGUIIGElipse->ElipseRadius = 25;
			this->bunifuGUIIGElipse->TargetControl = this;
			// 
			// bunifuMenuIGBackToGameBtnElipse
			// 
			this->bunifuMenuIGBackToGameBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGBackToGameBtnElipse->TargetControl = this->btnMenuIGBackToGame;
			// 
			// bunifuMenuIGBackToGamePnlElipse
			// 
			this->bunifuMenuIGBackToGamePnlElipse->ElipseRadius = 20;
			this->bunifuMenuIGBackToGamePnlElipse->TargetControl = this->pnlMenuIGBackToGame;
			// 
			// bunifuMenuIGNewGamePnlElipse
			// 
			this->bunifuMenuIGNewGamePnlElipse->ElipseRadius = 25;
			this->bunifuMenuIGNewGamePnlElipse->TargetControl = this->pnlMenuIGNewGame;
			// 
			// bunifuMenuIGNewGameBtnElipse
			// 
			this->bunifuMenuIGNewGameBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGNewGameBtnElipse->TargetControl = this->btnMenuIGNewGame;
			// 
			// bunifuMenuIGSettingsPnlElipse
			// 
			this->bunifuMenuIGSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuMenuIGSettingsPnlElipse->TargetControl = this->pnlMenuIGSettings;
			// 
			// bunifuMenuIGSettingsBtnElipse
			// 
			this->bunifuMenuIGSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGSettingsBtnElipse->TargetControl = this->btnMenuIGSettings;
			// 
			// bunifuMenuIGAboutPnlElipse
			// 
			this->bunifuMenuIGAboutPnlElipse->ElipseRadius = 20;
			this->bunifuMenuIGAboutPnlElipse->TargetControl = this->pnlMenuIGAbout;
			// 
			// bunifuMenuIGAboutBtnElipse
			// 
			this->bunifuMenuIGAboutBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGAboutBtnElipse->TargetControl = this->btnMenuIGAbout;
			// 
			// bunifuMenuIGAuthorPnlElipse
			// 
			this->bunifuMenuIGAuthorPnlElipse->ElipseRadius = 20;
			this->bunifuMenuIGAuthorPnlElipse->TargetControl = this->pnlMenuIGAuthor;
			// 
			// bunifuMenuIGAuthorBtnElipse
			// 
			this->bunifuMenuIGAuthorBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGAuthorBtnElipse->TargetControl = this->btnMenuIGAuthor;
			// 
			// pnlMenuIGBackToMenu
			// 
			this->pnlMenuIGBackToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuIGBackToMenu->Controls->Add(this->lblMenuIGBackToMenu);
			this->pnlMenuIGBackToMenu->Controls->Add(this->btnMenuIGBackToMenu);
			this->pnlMenuIGBackToMenu->Location = System::Drawing::Point(11, 222);
			this->pnlMenuIGBackToMenu->Name = L"pnlMenuIGBackToMenu";
			this->pnlMenuIGBackToMenu->Size = System::Drawing::Size(124, 132);
			this->pnlMenuIGBackToMenu->TabIndex = 8;
			// 
			// lblMenuIGBackToMenu
			// 
			this->lblMenuIGBackToMenu->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblMenuIGBackToMenu->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuIGBackToMenu->Location = System::Drawing::Point(21, 95);
			this->lblMenuIGBackToMenu->Name = L"lblMenuIGBackToMenu";
			this->lblMenuIGBackToMenu->Size = System::Drawing::Size(84, 22);
			this->lblMenuIGBackToMenu->TabIndex = 1;
			this->lblMenuIGBackToMenu->Text = L"Back";
			this->lblMenuIGBackToMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuIGBackToMenu
			// 
			this->btnMenuIGBackToMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGBackToMenu->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuIGBackToMenu->FlatAppearance->BorderSize = 0;
			this->btnMenuIGBackToMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuIGBackToMenu->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnMenuIGBackToMenu->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuIGBackToMenu->Location = System::Drawing::Point(13, 12);
			this->btnMenuIGBackToMenu->Name = L"btnMenuIGBackToMenu";
			this->btnMenuIGBackToMenu->Size = System::Drawing::Size(100, 80);
			this->btnMenuIGBackToMenu->TabIndex = 0;
			this->btnMenuIGBackToMenu->Text = L"Back To Menu";
			this->btnMenuIGBackToMenu->UseVisualStyleBackColor = false;
			this->btnMenuIGBackToMenu->Click += gcnew System::EventHandler(this, &InGameGUI::btnMenuIGBackToMenu_Click);
			// 
			// bunifuMenuIGBackToMenuPnlElipse
			// 
			this->bunifuMenuIGBackToMenuPnlElipse->ElipseRadius = 20;
			this->bunifuMenuIGBackToMenuPnlElipse->TargetControl = this->pnlMenuIGBackToMenu;
			// 
			// bunifuMenuIGBackToMenuBtnElipse
			// 
			this->bunifuMenuIGBackToMenuBtnElipse->ElipseRadius = 20;
			this->bunifuMenuIGBackToMenuBtnElipse->TargetControl = this->btnMenuIGBackToMenu;
			// 
			// InGameGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(420, 385);
			this->Controls->Add(this->pnlMenuIGBackToMenu);
			this->Controls->Add(this->pnlMenuIGBackToGame);
			this->Controls->Add(this->pnlMenuIGAuthor);
			this->Controls->Add(this->pnlMenuIGAbout);
			this->Controls->Add(this->pnlMenuIGSettings);
			this->Controls->Add(this->pnlMenuIGNewGame);
			this->Controls->Add(this->pnlInGameGUITopSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"InGameGUI";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"InGameGUI";
			this->Shown += gcnew System::EventHandler(this, &InGameGUI::InGameGUI_Shown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &InGameGUI::InGameGUI_KeyPress);
			this->pnlInGameGUITopSide->ResumeLayout(false);
			this->pnlMenuIGNewGame->ResumeLayout(false);
			this->pnlMenuIGSettings->ResumeLayout(false);
			this->pnlMenuIGAbout->ResumeLayout(false);
			this->pnlMenuIGBackToGame->ResumeLayout(false);
			this->pnlMenuIGAuthor->ResumeLayout(false);
			this->pnlMenuIGBackToMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMenuIGBackToGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuIGNewGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuIGSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuIGBackToMenu_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuIGAbout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuIGAuthor_Click(System::Object^ sender, System::EventArgs^ e);

	public: System::Void InGameGUI_Shown(System::Object^ sender, System::EventArgs^ e);

	public: System::Void InGameGUIOpen();
	public: System::Void InGameGUIClose();
	//private: System::Void Snake::InGameGUI::OnInGameGui_Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	private: System::Void InGameGUI_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
};
}
