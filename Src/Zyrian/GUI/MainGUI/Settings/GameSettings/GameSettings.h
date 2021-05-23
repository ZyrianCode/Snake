#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GameSettings
	/// </summary>
	public ref class GameSettings : public System::Windows::Forms::Form
	{
	public:
		GameSettings(void)
		{
			InitializeComponent();
			OnStartDesign();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GameSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlGameSettingsTopSide;
	protected:
	private: System::Windows::Forms::Button^ btnBackSettings;
	private: System::Windows::Forms::Label^ TopSidelblGameSettings;
	private: System::Windows::Forms::Panel^ pnlLeftSide;
	private: System::Windows::Forms::Panel^ LogPnl;
	private: System::Windows::Forms::Panel^ pnlGameGlobalsBtnDropMenu;
	private: System::Windows::Forms::Button^ btnGlobalsOther;

	private: System::Windows::Forms::Button^ btnDifficulty;
	private: System::Windows::Forms::Button^ btnGameGlobalSettings;
	private: System::Windows::Forms::Panel^ pnlVisualsBtnDropDown;
	private: System::Windows::Forms::Button^ btnVisualsOther;
	private: System::Windows::Forms::Button^ btnColors;



	private: System::Windows::Forms::Button^ btnVisuals;
	private: System::Windows::Forms::Button^ btnControls;
	private: System::Windows::Forms::Panel^ pnlChildForm;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameSettingsFormElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGSTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGSFormDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGSTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGSLeftSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGSChildFormPnlDragControl;




	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameSettings::typeid));
			this->pnlGameSettingsTopSide = (gcnew System::Windows::Forms::Panel());
			this->btnBackSettings = (gcnew System::Windows::Forms::Button());
			this->TopSidelblGameSettings = (gcnew System::Windows::Forms::Label());
			this->pnlLeftSide = (gcnew System::Windows::Forms::Panel());
			this->btnControls = (gcnew System::Windows::Forms::Button());
			this->pnlVisualsBtnDropDown = (gcnew System::Windows::Forms::Panel());
			this->btnVisualsOther = (gcnew System::Windows::Forms::Button());
			this->btnColors = (gcnew System::Windows::Forms::Button());
			this->btnVisuals = (gcnew System::Windows::Forms::Button());
			this->pnlGameGlobalsBtnDropMenu = (gcnew System::Windows::Forms::Panel());
			this->btnGlobalsOther = (gcnew System::Windows::Forms::Button());
			this->btnDifficulty = (gcnew System::Windows::Forms::Button());
			this->btnGameGlobalSettings = (gcnew System::Windows::Forms::Button());
			this->LogPnl = (gcnew System::Windows::Forms::Panel());
			this->pnlChildForm = (gcnew System::Windows::Forms::Panel());
			this->bunifuGameSettingsFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGSTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGSFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGSTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGSLeftSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGSChildFormPnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlGameSettingsTopSide->SuspendLayout();
			this->pnlLeftSide->SuspendLayout();
			this->pnlVisualsBtnDropDown->SuspendLayout();
			this->pnlGameGlobalsBtnDropMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlGameSettingsTopSide
			// 
			this->pnlGameSettingsTopSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGameSettingsTopSide->Controls->Add(this->btnBackSettings);
			this->pnlGameSettingsTopSide->Controls->Add(this->TopSidelblGameSettings);
			this->pnlGameSettingsTopSide->Location = System::Drawing::Point(0, 0);
			this->pnlGameSettingsTopSide->Name = L"pnlGameSettingsTopSide";
			this->pnlGameSettingsTopSide->Size = System::Drawing::Size(1000, 50);
			this->pnlGameSettingsTopSide->TabIndex = 1;
			// 
			// btnBackSettings
			// 
			this->btnBackSettings->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackSettings.BackgroundImage")));
			this->btnBackSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackSettings->FlatAppearance->BorderSize = 0;
			this->btnBackSettings->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackSettings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackSettings.Image")));
			this->btnBackSettings->Location = System::Drawing::Point(13, 8);
			this->btnBackSettings->Name = L"btnBackSettings";
			this->btnBackSettings->Size = System::Drawing::Size(32, 32);
			this->btnBackSettings->TabIndex = 1;
			this->btnBackSettings->UseVisualStyleBackColor = true;
			this->btnBackSettings->Click += gcnew System::EventHandler(this, &GameSettings::btnBackSettings_Click);
			// 
			// TopSidelblGameSettings
			// 
			this->TopSidelblGameSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->TopSidelblGameSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->TopSidelblGameSettings->Location = System::Drawing::Point(470, 10);
			this->TopSidelblGameSettings->Name = L"TopSidelblGameSettings";
			this->TopSidelblGameSettings->Size = System::Drawing::Size(179, 25);
			this->TopSidelblGameSettings->TabIndex = 0;
			this->TopSidelblGameSettings->Text = L"Game Settings";
			this->TopSidelblGameSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlLeftSide
			// 
			this->pnlLeftSide->AutoScroll = true;
			this->pnlLeftSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlLeftSide->Controls->Add(this->btnControls);
			this->pnlLeftSide->Controls->Add(this->pnlVisualsBtnDropDown);
			this->pnlLeftSide->Controls->Add(this->btnVisuals);
			this->pnlLeftSide->Controls->Add(this->pnlGameGlobalsBtnDropMenu);
			this->pnlLeftSide->Controls->Add(this->btnGameGlobalSettings);
			this->pnlLeftSide->Controls->Add(this->LogPnl);
			this->pnlLeftSide->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlLeftSide->Location = System::Drawing::Point(0, 50);
			this->pnlLeftSide->Name = L"pnlLeftSide";
			this->pnlLeftSide->Size = System::Drawing::Size(200, 629);
			this->pnlLeftSide->TabIndex = 2;
			// 
			// btnControls
			// 
			this->btnControls->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnControls->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnControls->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnControls->FlatAppearance->BorderSize = 2;
			this->btnControls->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnControls->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnControls->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnControls->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnControls.Image")));
			this->btnControls->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnControls->Location = System::Drawing::Point(0, 387);
			this->btnControls->Name = L"btnControls";
			this->btnControls->Size = System::Drawing::Size(200, 50);
			this->btnControls->TabIndex = 5;
			this->btnControls->Text = L"Controls";
			this->btnControls->UseVisualStyleBackColor = false;
			this->btnControls->Click += gcnew System::EventHandler(this, &GameSettings::btnControls_Click);
			// 
			// pnlVisualsBtnDropDown
			// 
			this->pnlVisualsBtnDropDown->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlVisualsBtnDropDown->Controls->Add(this->btnVisualsOther);
			this->pnlVisualsBtnDropDown->Controls->Add(this->btnColors);
			this->pnlVisualsBtnDropDown->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlVisualsBtnDropDown->Location = System::Drawing::Point(0, 291);
			this->pnlVisualsBtnDropDown->Name = L"pnlVisualsBtnDropDown";
			this->pnlVisualsBtnDropDown->Size = System::Drawing::Size(200, 96);
			this->pnlVisualsBtnDropDown->TabIndex = 4;
			// 
			// btnVisualsOther
			// 
			this->btnVisualsOther->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnVisualsOther->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnVisualsOther->FlatAppearance->BorderSize = 0;
			this->btnVisualsOther->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVisualsOther->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnVisualsOther->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnVisualsOther->Location = System::Drawing::Point(0, 40);
			this->btnVisualsOther->Name = L"btnVisualsOther";
			this->btnVisualsOther->Size = System::Drawing::Size(200, 40);
			this->btnVisualsOther->TabIndex = 1;
			this->btnVisualsOther->Text = L"Other";
			this->btnVisualsOther->UseVisualStyleBackColor = false;
			this->btnVisualsOther->Click += gcnew System::EventHandler(this, &GameSettings::btnVisualsOther_Click);
			// 
			// btnColors
			// 
			this->btnColors->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnColors->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnColors->FlatAppearance->BorderSize = 0;
			this->btnColors->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnColors->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnColors->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnColors->Location = System::Drawing::Point(0, 0);
			this->btnColors->Name = L"btnColors";
			this->btnColors->Size = System::Drawing::Size(200, 40);
			this->btnColors->TabIndex = 0;
			this->btnColors->Text = L"Colors";
			this->btnColors->UseVisualStyleBackColor = false;
			this->btnColors->Click += gcnew System::EventHandler(this, &GameSettings::btnColors_Click);
			// 
			// btnVisuals
			// 
			this->btnVisuals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(36)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnVisuals->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnVisuals->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnVisuals->FlatAppearance->BorderSize = 2;
			this->btnVisuals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVisuals->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnVisuals->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnVisuals->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnVisuals.Image")));
			this->btnVisuals->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVisuals->Location = System::Drawing::Point(0, 241);
			this->btnVisuals->Name = L"btnVisuals";
			this->btnVisuals->Size = System::Drawing::Size(200, 50);
			this->btnVisuals->TabIndex = 3;
			this->btnVisuals->Text = L"Visuals";
			this->btnVisuals->UseVisualStyleBackColor = false;
			this->btnVisuals->Click += gcnew System::EventHandler(this, &GameSettings::btnVisuals_Click);
			// 
			// pnlGameGlobalsBtnDropMenu
			// 
			this->pnlGameGlobalsBtnDropMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGameGlobalsBtnDropMenu->Controls->Add(this->btnGlobalsOther);
			this->pnlGameGlobalsBtnDropMenu->Controls->Add(this->btnDifficulty);
			this->pnlGameGlobalsBtnDropMenu->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlGameGlobalsBtnDropMenu->Location = System::Drawing::Point(0, 145);
			this->pnlGameGlobalsBtnDropMenu->Name = L"pnlGameGlobalsBtnDropMenu";
			this->pnlGameGlobalsBtnDropMenu->Size = System::Drawing::Size(200, 96);
			this->pnlGameGlobalsBtnDropMenu->TabIndex = 2;
			// 
			// btnGlobalsOther
			// 
			this->btnGlobalsOther->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnGlobalsOther->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGlobalsOther->FlatAppearance->BorderSize = 0;
			this->btnGlobalsOther->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGlobalsOther->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGlobalsOther->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGlobalsOther->Location = System::Drawing::Point(0, 40);
			this->btnGlobalsOther->Name = L"btnGlobalsOther";
			this->btnGlobalsOther->Size = System::Drawing::Size(200, 40);
			this->btnGlobalsOther->TabIndex = 1;
			this->btnGlobalsOther->Text = L"Other";
			this->btnGlobalsOther->UseVisualStyleBackColor = false;
			this->btnGlobalsOther->Click += gcnew System::EventHandler(this, &GameSettings::btnGlobalsOther_Click);
			// 
			// btnDifficulty
			// 
			this->btnDifficulty->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnDifficulty->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDifficulty->FlatAppearance->BorderSize = 0;
			this->btnDifficulty->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDifficulty->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDifficulty->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDifficulty->Location = System::Drawing::Point(0, 0);
			this->btnDifficulty->Name = L"btnDifficulty";
			this->btnDifficulty->Size = System::Drawing::Size(200, 40);
			this->btnDifficulty->TabIndex = 0;
			this->btnDifficulty->Text = L"Difficulty";
			this->btnDifficulty->UseVisualStyleBackColor = false;
			this->btnDifficulty->Click += gcnew System::EventHandler(this, &GameSettings::btnDifficulty_Click);
			// 
			// btnGameGlobalSettings
			// 
			this->btnGameGlobalSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnGameGlobalSettings->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnGameGlobalSettings->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnGameGlobalSettings->FlatAppearance->BorderSize = 2;
			this->btnGameGlobalSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGameGlobalSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGameGlobalSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGameGlobalSettings->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGameGlobalSettings.Image")));
			this->btnGameGlobalSettings->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->btnGameGlobalSettings->Location = System::Drawing::Point(0, 95);
			this->btnGameGlobalSettings->Name = L"btnGameGlobalSettings";
			this->btnGameGlobalSettings->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btnGameGlobalSettings->Size = System::Drawing::Size(200, 50);
			this->btnGameGlobalSettings->TabIndex = 1;
			this->btnGameGlobalSettings->Text = L"Globals";
			this->btnGameGlobalSettings->UseVisualStyleBackColor = false;
			this->btnGameGlobalSettings->Click += gcnew System::EventHandler(this, &GameSettings::btnGameGlobalSettings_Click);
			// 
			// LogPnl
			// 
			this->LogPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->LogPnl->Dock = System::Windows::Forms::DockStyle::Top;
			this->LogPnl->Location = System::Drawing::Point(0, 0);
			this->LogPnl->Name = L"LogPnl";
			this->LogPnl->Size = System::Drawing::Size(200, 95);
			this->LogPnl->TabIndex = 0;
			// 
			// pnlChildForm
			// 
			this->pnlChildForm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->pnlChildForm->Location = System::Drawing::Point(200, 50);
			this->pnlChildForm->Name = L"pnlChildForm";
			this->pnlChildForm->Size = System::Drawing::Size(800, 630);
			this->pnlChildForm->TabIndex = 3;
			// 
			// bunifuGameSettingsFormElipse
			// 
			this->bunifuGameSettingsFormElipse->ElipseRadius = 25;
			this->bunifuGameSettingsFormElipse->TargetControl = this;
			// 
			// bunifuGSTopSideLblDragControl
			// 
			this->bunifuGSTopSideLblDragControl->Fixed = true;
			this->bunifuGSTopSideLblDragControl->Horizontal = true;
			this->bunifuGSTopSideLblDragControl->TargetControl = this->TopSidelblGameSettings;
			this->bunifuGSTopSideLblDragControl->Vertical = true;
			// 
			// bunifuGSFormDragControl
			// 
			this->bunifuGSFormDragControl->Fixed = true;
			this->bunifuGSFormDragControl->Horizontal = true;
			this->bunifuGSFormDragControl->TargetControl = this;
			this->bunifuGSFormDragControl->Vertical = true;
			// 
			// bunifuGSTopSidePnlDragControl
			// 
			this->bunifuGSTopSidePnlDragControl->Fixed = true;
			this->bunifuGSTopSidePnlDragControl->Horizontal = true;
			this->bunifuGSTopSidePnlDragControl->TargetControl = this->pnlGameSettingsTopSide;
			this->bunifuGSTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuGSLeftSidePnlDragControl
			// 
			this->bunifuGSLeftSidePnlDragControl->Fixed = true;
			this->bunifuGSLeftSidePnlDragControl->Horizontal = true;
			this->bunifuGSLeftSidePnlDragControl->TargetControl = this->pnlLeftSide;
			this->bunifuGSLeftSidePnlDragControl->Vertical = true;
			// 
			// bunifuGSChildFormPnlDragControl
			// 
			this->bunifuGSChildFormPnlDragControl->Fixed = true;
			this->bunifuGSChildFormPnlDragControl->Horizontal = true;
			this->bunifuGSChildFormPnlDragControl->TargetControl = this->pnlChildForm;
			this->bunifuGSChildFormPnlDragControl->Vertical = true;
			// 
			// GameSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(1000, 680);
			this->Controls->Add(this->pnlChildForm);
			this->Controls->Add(this->pnlLeftSide);
			this->Controls->Add(this->pnlGameSettingsTopSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"GameSettings";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameSettings";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &GameSettings::GameSettings_KeyDown);
			this->pnlGameSettingsTopSide->ResumeLayout(false);
			this->pnlLeftSide->ResumeLayout(false);
			this->pnlVisualsBtnDropDown->ResumeLayout(false);
			this->pnlGameGlobalsBtnDropMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		private: Form^ activeForm = nullptr;
		private: void OnStartDesign();
		private: void HideDropDownMenu();
		private: void ShowDropDownMenu(Panel^ DropDownMenu);
		private: System::Void btnGameGlobalSettings_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnDifficulty_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnGlobalsOther_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnVisuals_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnColors_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnVisualsOther_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btnControls_Click(System::Object^ sender, System::EventArgs^ e);

	private: void OpenChildForm(Form^ childForm);
	private: System::Void btnBackSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void GameSettings_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
