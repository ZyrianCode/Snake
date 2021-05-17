#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� GUIMainMenu
	/// </summary>
	public ref class GUIMainMenu : public System::Windows::Forms::Form
	{
	public:
		GUIMainMenu(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~GUIMainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGUIMainMenuDragControl;
	private: System::Windows::Forms::Panel^ pnlGUIMainMenuTopSide;
	private: System::Windows::Forms::Panel^ pnlMainMenuNewGame;
	private: System::Windows::Forms::Button^ btnMainMenuNewGame;

	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGUIMainMenuElipse;
	private: System::Windows::Forms::Label^ lblMainMenuNewGame;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuNewGamebtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuNewGamelblElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuNewGamepnlElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGUIMainMenuTopSidepnlDragControl;
	private: System::Windows::Forms::Panel^ pnlMainMenuQuit;
	private: System::Windows::Forms::Label^ lblMainMenuQuit;
	private: System::Windows::Forms::Button^ btnMainMenuQuit;
	private: System::Windows::Forms::Panel^ pnlMainMenuAuthor;
	private: System::Windows::Forms::Label^ lblMainMenuAuthor;
	private: System::Windows::Forms::Button^ btnMainMenuAuthor;
	private: System::Windows::Forms::Panel^ pnlMainMenuAbout;
	private: System::Windows::Forms::Label^ lblMainMenuAbout;
	private: System::Windows::Forms::Button^ btnMainMenuAbout;
	private: System::Windows::Forms::Panel^ pnlMainMenuSettings;
	private: System::Windows::Forms::Label^ lblMainMenuSettings;
	private: System::Windows::Forms::Button^ btnMainMenuSettings;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenubtnSettingsElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenubtnAboutElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenubtnAuthorElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenubtnQuitElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenulblSettingsElipse1;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenupnlSettingsElipse;
	private: System::Windows::Forms::Label^ lblGUIMainMenu;

	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuSettingspnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuAboutpnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuAuthorpnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMainMenuQuitpnlElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGMMTopSideLblDragControl;


	protected:

	protected:


	protected:
	private: System::ComponentModel::IContainer^ components;

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
			this->bunifuGUIMainMenuDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlGUIMainMenuTopSide = (gcnew System::Windows::Forms::Panel());
			this->lblGUIMainMenu = (gcnew System::Windows::Forms::Label());
			this->bunifuGUIMainMenuElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->pnlMainMenuNewGame = (gcnew System::Windows::Forms::Panel());
			this->lblMainMenuNewGame = (gcnew System::Windows::Forms::Label());
			this->btnMainMenuNewGame = (gcnew System::Windows::Forms::Button());
			this->bunifuMainMenuNewGamebtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuNewGamelblElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuNewGamepnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGUIMainMenuTopSidepnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlMainMenuSettings = (gcnew System::Windows::Forms::Panel());
			this->lblMainMenuSettings = (gcnew System::Windows::Forms::Label());
			this->btnMainMenuSettings = (gcnew System::Windows::Forms::Button());
			this->pnlMainMenuAbout = (gcnew System::Windows::Forms::Panel());
			this->lblMainMenuAbout = (gcnew System::Windows::Forms::Label());
			this->btnMainMenuAbout = (gcnew System::Windows::Forms::Button());
			this->pnlMainMenuAuthor = (gcnew System::Windows::Forms::Panel());
			this->lblMainMenuAuthor = (gcnew System::Windows::Forms::Label());
			this->btnMainMenuAuthor = (gcnew System::Windows::Forms::Button());
			this->pnlMainMenuQuit = (gcnew System::Windows::Forms::Panel());
			this->lblMainMenuQuit = (gcnew System::Windows::Forms::Label());
			this->btnMainMenuQuit = (gcnew System::Windows::Forms::Button());
			this->bunifuMainMenubtnSettingsElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenubtnAboutElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenubtnAuthorElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenubtnQuitElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenulblSettingsElipse1 = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenupnlSettingsElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuSettingspnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuAboutpnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuAuthorpnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMainMenuQuitpnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGMMTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlGUIMainMenuTopSide->SuspendLayout();
			this->pnlMainMenuNewGame->SuspendLayout();
			this->pnlMainMenuSettings->SuspendLayout();
			this->pnlMainMenuAbout->SuspendLayout();
			this->pnlMainMenuAuthor->SuspendLayout();
			this->pnlMainMenuQuit->SuspendLayout();
			this->SuspendLayout();
			// 
			// bunifuGUIMainMenuDragControl
			// 
			this->bunifuGUIMainMenuDragControl->Fixed = false;
			this->bunifuGUIMainMenuDragControl->Horizontal = true;
			this->bunifuGUIMainMenuDragControl->TargetControl = this;
			this->bunifuGUIMainMenuDragControl->Vertical = true;
			// 
			// pnlGUIMainMenuTopSide
			// 
			this->pnlGUIMainMenuTopSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGUIMainMenuTopSide->Controls->Add(this->lblGUIMainMenu);
			this->pnlGUIMainMenuTopSide->Location = System::Drawing::Point(0, -1);
			this->pnlGUIMainMenuTopSide->Name = L"pnlGUIMainMenuTopSide";
			this->pnlGUIMainMenuTopSide->Size = System::Drawing::Size(699, 50);
			this->pnlGUIMainMenuTopSide->TabIndex = 0;
			// 
			// lblGUIMainMenu
			// 
			this->lblGUIMainMenu->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGUIMainMenu->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblGUIMainMenu->Location = System::Drawing::Point(240, 14);
			this->lblGUIMainMenu->Name = L"lblGUIMainMenu";
			this->lblGUIMainMenu->Size = System::Drawing::Size(209, 23);
			this->lblGUIMainMenu->TabIndex = 0;
			this->lblGUIMainMenu->Text = L"GUI Main Menu";
			this->lblGUIMainMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuGUIMainMenuElipse
			// 
			this->bunifuGUIMainMenuElipse->ElipseRadius = 25;
			this->bunifuGUIMainMenuElipse->TargetControl = this;
			// 
			// pnlMainMenuNewGame
			// 
			this->pnlMainMenuNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMainMenuNewGame->Controls->Add(this->lblMainMenuNewGame);
			this->pnlMainMenuNewGame->Controls->Add(this->btnMainMenuNewGame);
			this->pnlMainMenuNewGame->Location = System::Drawing::Point(11, 74);
			this->pnlMainMenuNewGame->Name = L"pnlMainMenuNewGame";
			this->pnlMainMenuNewGame->Size = System::Drawing::Size(124, 132);
			this->pnlMainMenuNewGame->TabIndex = 1;
			// 
			// lblMainMenuNewGame
			// 
			this->lblMainMenuNewGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMainMenuNewGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMainMenuNewGame->Location = System::Drawing::Point(21, 95);
			this->lblMainMenuNewGame->Name = L"lblMainMenuNewGame";
			this->lblMainMenuNewGame->Size = System::Drawing::Size(84, 22);
			this->lblMainMenuNewGame->TabIndex = 1;
			this->lblMainMenuNewGame->Text = L"New Game";
			this->lblMainMenuNewGame->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMainMenuNewGame
			// 
			this->btnMainMenuNewGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuNewGame->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuNewGame->FlatAppearance->BorderSize = 0;
			this->btnMainMenuNewGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMainMenuNewGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMainMenuNewGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMainMenuNewGame->Location = System::Drawing::Point(13, 12);
			this->btnMainMenuNewGame->Name = L"btnMainMenuNewGame";
			this->btnMainMenuNewGame->Size = System::Drawing::Size(100, 80);
			this->btnMainMenuNewGame->TabIndex = 0;
			this->btnMainMenuNewGame->Text = L"New Game";
			this->btnMainMenuNewGame->UseVisualStyleBackColor = false;
			this->btnMainMenuNewGame->Click += gcnew System::EventHandler(this, &GUIMainMenu::btnMainMenuNewGame_Click);
			// 
			// bunifuMainMenuNewGamebtnElipse
			// 
			this->bunifuMainMenuNewGamebtnElipse->ElipseRadius = 20;
			this->bunifuMainMenuNewGamebtnElipse->TargetControl = this->btnMainMenuNewGame;
			// 
			// bunifuMainMenuNewGamelblElipse
			// 
			this->bunifuMainMenuNewGamelblElipse->ElipseRadius = 15;
			this->bunifuMainMenuNewGamelblElipse->TargetControl = this->lblMainMenuNewGame;
			// 
			// bunifuMainMenuNewGamepnlElipse
			// 
			this->bunifuMainMenuNewGamepnlElipse->ElipseRadius = 20;
			this->bunifuMainMenuNewGamepnlElipse->TargetControl = this->pnlMainMenuNewGame;
			// 
			// bunifuGUIMainMenuTopSidepnlDragControl
			// 
			this->bunifuGUIMainMenuTopSidepnlDragControl->Fixed = true;
			this->bunifuGUIMainMenuTopSidepnlDragControl->Horizontal = true;
			this->bunifuGUIMainMenuTopSidepnlDragControl->TargetControl = this->pnlGUIMainMenuTopSide;
			this->bunifuGUIMainMenuTopSidepnlDragControl->Vertical = true;
			// 
			// pnlMainMenuSettings
			// 
			this->pnlMainMenuSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMainMenuSettings->Controls->Add(this->lblMainMenuSettings);
			this->pnlMainMenuSettings->Controls->Add(this->btnMainMenuSettings);
			this->pnlMainMenuSettings->Location = System::Drawing::Point(147, 74);
			this->pnlMainMenuSettings->Name = L"pnlMainMenuSettings";
			this->pnlMainMenuSettings->Size = System::Drawing::Size(124, 132);
			this->pnlMainMenuSettings->TabIndex = 2;
			// 
			// lblMainMenuSettings
			// 
			this->lblMainMenuSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblMainMenuSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMainMenuSettings->Location = System::Drawing::Point(21, 95);
			this->lblMainMenuSettings->Name = L"lblMainMenuSettings";
			this->lblMainMenuSettings->Size = System::Drawing::Size(84, 22);
			this->lblMainMenuSettings->TabIndex = 1;
			this->lblMainMenuSettings->Text = L"Settings";
			this->lblMainMenuSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMainMenuSettings
			// 
			this->btnMainMenuSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuSettings->FlatAppearance->BorderSize = 0;
			this->btnMainMenuSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMainMenuSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->btnMainMenuSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMainMenuSettings->Location = System::Drawing::Point(13, 12);
			this->btnMainMenuSettings->Name = L"btnMainMenuSettings";
			this->btnMainMenuSettings->Size = System::Drawing::Size(100, 80);
			this->btnMainMenuSettings->TabIndex = 0;
			this->btnMainMenuSettings->Text = L"Settings";
			this->btnMainMenuSettings->UseVisualStyleBackColor = false;
			this->btnMainMenuSettings->Click += gcnew System::EventHandler(this, &GUIMainMenu::btnMainMenuSettings_Click);
			// 
			// pnlMainMenuAbout
			// 
			this->pnlMainMenuAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMainMenuAbout->Controls->Add(this->lblMainMenuAbout);
			this->pnlMainMenuAbout->Controls->Add(this->btnMainMenuAbout);
			this->pnlMainMenuAbout->Location = System::Drawing::Point(284, 74);
			this->pnlMainMenuAbout->Name = L"pnlMainMenuAbout";
			this->pnlMainMenuAbout->Size = System::Drawing::Size(124, 132);
			this->pnlMainMenuAbout->TabIndex = 3;
			// 
			// lblMainMenuAbout
			// 
			this->lblMainMenuAbout->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMainMenuAbout->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMainMenuAbout->Location = System::Drawing::Point(21, 95);
			this->lblMainMenuAbout->Name = L"lblMainMenuAbout";
			this->lblMainMenuAbout->Size = System::Drawing::Size(84, 22);
			this->lblMainMenuAbout->TabIndex = 1;
			this->lblMainMenuAbout->Text = L"About";
			this->lblMainMenuAbout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMainMenuAbout
			// 
			this->btnMainMenuAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuAbout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuAbout->FlatAppearance->BorderSize = 0;
			this->btnMainMenuAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMainMenuAbout->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMainMenuAbout->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMainMenuAbout->Location = System::Drawing::Point(13, 12);
			this->btnMainMenuAbout->Name = L"btnMainMenuAbout";
			this->btnMainMenuAbout->Size = System::Drawing::Size(100, 80);
			this->btnMainMenuAbout->TabIndex = 0;
			this->btnMainMenuAbout->Text = L"About";
			this->btnMainMenuAbout->UseVisualStyleBackColor = false;
			this->btnMainMenuAbout->Click += gcnew System::EventHandler(this, &GUIMainMenu::btnMainMenuAbout_Click);
			// 
			// pnlMainMenuAuthor
			// 
			this->pnlMainMenuAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMainMenuAuthor->Controls->Add(this->lblMainMenuAuthor);
			this->pnlMainMenuAuthor->Controls->Add(this->btnMainMenuAuthor);
			this->pnlMainMenuAuthor->Location = System::Drawing::Point(423, 74);
			this->pnlMainMenuAuthor->Name = L"pnlMainMenuAuthor";
			this->pnlMainMenuAuthor->Size = System::Drawing::Size(124, 132);
			this->pnlMainMenuAuthor->TabIndex = 4;
			// 
			// lblMainMenuAuthor
			// 
			this->lblMainMenuAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMainMenuAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMainMenuAuthor->Location = System::Drawing::Point(21, 95);
			this->lblMainMenuAuthor->Name = L"lblMainMenuAuthor";
			this->lblMainMenuAuthor->Size = System::Drawing::Size(84, 22);
			this->lblMainMenuAuthor->TabIndex = 1;
			this->lblMainMenuAuthor->Text = L"Author";
			this->lblMainMenuAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMainMenuAuthor
			// 
			this->btnMainMenuAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuAuthor->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuAuthor->FlatAppearance->BorderSize = 0;
			this->btnMainMenuAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMainMenuAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMainMenuAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMainMenuAuthor->Location = System::Drawing::Point(13, 12);
			this->btnMainMenuAuthor->Name = L"btnMainMenuAuthor";
			this->btnMainMenuAuthor->Size = System::Drawing::Size(100, 80);
			this->btnMainMenuAuthor->TabIndex = 0;
			this->btnMainMenuAuthor->Text = L"Author";
			this->btnMainMenuAuthor->UseVisualStyleBackColor = false;
			this->btnMainMenuAuthor->Click += gcnew System::EventHandler(this, &GUIMainMenu::btnMainMenuAuthor_Click);
			// 
			// pnlMainMenuQuit
			// 
			this->pnlMainMenuQuit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMainMenuQuit->Controls->Add(this->lblMainMenuQuit);
			this->pnlMainMenuQuit->Controls->Add(this->btnMainMenuQuit);
			this->pnlMainMenuQuit->Location = System::Drawing::Point(563, 74);
			this->pnlMainMenuQuit->Name = L"pnlMainMenuQuit";
			this->pnlMainMenuQuit->Size = System::Drawing::Size(124, 132);
			this->pnlMainMenuQuit->TabIndex = 5;
			// 
			// lblMainMenuQuit
			// 
			this->lblMainMenuQuit->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMainMenuQuit->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMainMenuQuit->Location = System::Drawing::Point(21, 95);
			this->lblMainMenuQuit->Name = L"lblMainMenuQuit";
			this->lblMainMenuQuit->Size = System::Drawing::Size(84, 22);
			this->lblMainMenuQuit->TabIndex = 1;
			this->lblMainMenuQuit->Text = L"Quit";
			this->lblMainMenuQuit->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMainMenuQuit
			// 
			this->btnMainMenuQuit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuQuit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMainMenuQuit->FlatAppearance->BorderSize = 0;
			this->btnMainMenuQuit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMainMenuQuit->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMainMenuQuit->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMainMenuQuit->Location = System::Drawing::Point(13, 12);
			this->btnMainMenuQuit->Name = L"btnMainMenuQuit";
			this->btnMainMenuQuit->Size = System::Drawing::Size(100, 80);
			this->btnMainMenuQuit->TabIndex = 0;
			this->btnMainMenuQuit->Text = L"Quit";
			this->btnMainMenuQuit->UseVisualStyleBackColor = false;
			this->btnMainMenuQuit->Click += gcnew System::EventHandler(this, &GUIMainMenu::btnMainMenuQuit_Click);
			// 
			// bunifuMainMenubtnSettingsElipse
			// 
			this->bunifuMainMenubtnSettingsElipse->ElipseRadius = 20;
			this->bunifuMainMenubtnSettingsElipse->TargetControl = this->btnMainMenuSettings;
			// 
			// bunifuMainMenubtnAboutElipse
			// 
			this->bunifuMainMenubtnAboutElipse->ElipseRadius = 20;
			this->bunifuMainMenubtnAboutElipse->TargetControl = this->btnMainMenuAbout;
			// 
			// bunifuMainMenubtnAuthorElipse
			// 
			this->bunifuMainMenubtnAuthorElipse->ElipseRadius = 20;
			this->bunifuMainMenubtnAuthorElipse->TargetControl = this->btnMainMenuAuthor;
			// 
			// bunifuMainMenubtnQuitElipse
			// 
			this->bunifuMainMenubtnQuitElipse->ElipseRadius = 20;
			this->bunifuMainMenubtnQuitElipse->TargetControl = this->btnMainMenuQuit;
			// 
			// bunifuMainMenulblSettingsElipse1
			// 
			this->bunifuMainMenulblSettingsElipse1->ElipseRadius = 5;
			this->bunifuMainMenulblSettingsElipse1->TargetControl = this;
			// 
			// bunifuMainMenupnlSettingsElipse
			// 
			this->bunifuMainMenupnlSettingsElipse->ElipseRadius = 15;
			this->bunifuMainMenupnlSettingsElipse->TargetControl = this->pnlMainMenuSettings;
			// 
			// bunifuMainMenuSettingspnlElipse
			// 
			this->bunifuMainMenuSettingspnlElipse->ElipseRadius = 20;
			this->bunifuMainMenuSettingspnlElipse->TargetControl = this->pnlMainMenuSettings;
			// 
			// bunifuMainMenuAboutpnlElipse
			// 
			this->bunifuMainMenuAboutpnlElipse->ElipseRadius = 20;
			this->bunifuMainMenuAboutpnlElipse->TargetControl = this->pnlMainMenuAbout;
			// 
			// bunifuMainMenuAuthorpnlElipse
			// 
			this->bunifuMainMenuAuthorpnlElipse->ElipseRadius = 20;
			this->bunifuMainMenuAuthorpnlElipse->TargetControl = this->pnlMainMenuAuthor;
			// 
			// bunifuMainMenuQuitpnlElipse
			// 
			this->bunifuMainMenuQuitpnlElipse->ElipseRadius = 20;
			this->bunifuMainMenuQuitpnlElipse->TargetControl = this->pnlMainMenuQuit;
			// 
			// bunifuGMMTopSideLblDragControl
			// 
			this->bunifuGMMTopSideLblDragControl->Fixed = true;
			this->bunifuGMMTopSideLblDragControl->Horizontal = true;
			this->bunifuGMMTopSideLblDragControl->TargetControl = this->lblGUIMainMenu;
			this->bunifuGMMTopSideLblDragControl->Vertical = true;
			// 
			// GUIMainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(700, 250);
			this->Controls->Add(this->pnlMainMenuQuit);
			this->Controls->Add(this->pnlMainMenuAuthor);
			this->Controls->Add(this->pnlMainMenuAbout);
			this->Controls->Add(this->pnlMainMenuSettings);
			this->Controls->Add(this->pnlMainMenuNewGame);
			this->Controls->Add(this->pnlGUIMainMenuTopSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GUIMainMenu";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GUIMainMenu";
			this->pnlGUIMainMenuTopSide->ResumeLayout(false);
			this->pnlMainMenuNewGame->ResumeLayout(false);
			this->pnlMainMenuSettings->ResumeLayout(false);
			this->pnlMainMenuAbout->ResumeLayout(false);
			this->pnlMainMenuAuthor->ResumeLayout(false);
			this->pnlMainMenuQuit->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnMainMenuNewGame_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMainMenuSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMainMenuAbout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMainMenuAuthor_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMainMenuQuit_Click(System::Object^ sender, System::EventArgs^ e);
	};
}