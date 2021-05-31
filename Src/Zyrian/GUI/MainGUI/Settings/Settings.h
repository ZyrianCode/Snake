#pragma once
namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlSettingsTopSide;
	private: System::Windows::Forms::Panel^ pnlSettingsConfig;
	private: System::Windows::Forms::Button^ btnSettingsConfig;
	private: System::Windows::Forms::Label^ lblSettingsConfig;
	private: System::Windows::Forms::Label^ TopSidelblSettings;


	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuSettingsTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuSettingsFormDragControl;
	private: System::Windows::Forms::Panel^ pnlDoneSettings;

	private: System::Windows::Forms::Panel^ pnlMenuSettings;
	private: System::Windows::Forms::Label^ lblMenuSettings;
	private: System::Windows::Forms::Button^ btnMenuSettings;
	private: System::Windows::Forms::Panel^ pnlGameSettings;
	private: System::Windows::Forms::Label^ lblGameSettings;
	private: System::Windows::Forms::Button^ btnGameSettings;



	private: System::Windows::Forms::Button^ btnDoneSettings;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuSettingsFormElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuConfigSettingsBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuRenderSettingsBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameSettingsBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuSettingsBtnElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuConfigSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuRenderSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuMenuSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuDoneSettingsPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuDoneSettingsBtnElipse;
	private: System::Windows::Forms::Button^ btnBackSettings;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuSettingsTopSideLblDragControl;



	private: System::ComponentModel::IContainer^ components;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Settings::typeid));
			this->pnlSettingsTopSide = (gcnew System::Windows::Forms::Panel());
			this->btnBackSettings = (gcnew System::Windows::Forms::Button());
			this->TopSidelblSettings = (gcnew System::Windows::Forms::Label());
			this->pnlSettingsConfig = (gcnew System::Windows::Forms::Panel());
			this->lblSettingsConfig = (gcnew System::Windows::Forms::Label());
			this->btnSettingsConfig = (gcnew System::Windows::Forms::Button());
			this->bunifuSettingsTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuSettingsFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlGameSettings = (gcnew System::Windows::Forms::Panel());
			this->lblGameSettings = (gcnew System::Windows::Forms::Label());
			this->btnGameSettings = (gcnew System::Windows::Forms::Button());
			this->pnlMenuSettings = (gcnew System::Windows::Forms::Panel());
			this->lblMenuSettings = (gcnew System::Windows::Forms::Label());
			this->btnMenuSettings = (gcnew System::Windows::Forms::Button());
			this->pnlDoneSettings = (gcnew System::Windows::Forms::Panel());
			this->btnDoneSettings = (gcnew System::Windows::Forms::Button());
			this->bunifuSettingsFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuConfigSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuRenderSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGameSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuConfigSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuRenderSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGameSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuMenuSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuDoneSettingsPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuDoneSettingsBtnElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuSettingsTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlSettingsTopSide->SuspendLayout();
			this->pnlSettingsConfig->SuspendLayout();
			this->pnlGameSettings->SuspendLayout();
			this->pnlMenuSettings->SuspendLayout();
			this->pnlDoneSettings->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlSettingsTopSide
			// 
			this->pnlSettingsTopSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlSettingsTopSide->Controls->Add(this->btnBackSettings);
			this->pnlSettingsTopSide->Controls->Add(this->TopSidelblSettings);
			this->pnlSettingsTopSide->Location = System::Drawing::Point(0, 0);
			this->pnlSettingsTopSide->Name = L"pnlSettingsTopSide";
			this->pnlSettingsTopSide->Size = System::Drawing::Size(430, 50);
			this->pnlSettingsTopSide->TabIndex = 0;
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
			this->btnBackSettings->Click += gcnew System::EventHandler(this, &Settings::btnBackSettings_Click);
			// 
			// TopSidelblSettings
			// 
			this->TopSidelblSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->TopSidelblSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->TopSidelblSettings->Location = System::Drawing::Point(170, 10);
			this->TopSidelblSettings->Name = L"TopSidelblSettings";
			this->TopSidelblSettings->Size = System::Drawing::Size(100, 25);
			this->TopSidelblSettings->TabIndex = 0;
			this->TopSidelblSettings->Text = L"Settings";
			this->TopSidelblSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlSettingsConfig
			// 
			this->pnlSettingsConfig->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlSettingsConfig->Controls->Add(this->lblSettingsConfig);
			this->pnlSettingsConfig->Controls->Add(this->btnSettingsConfig);
			this->pnlSettingsConfig->Location = System::Drawing::Point(14, 70);
			this->pnlSettingsConfig->Name = L"pnlSettingsConfig";
			this->pnlSettingsConfig->Size = System::Drawing::Size(124, 132);
			this->pnlSettingsConfig->TabIndex = 1;
			// 
			// lblSettingsConfig
			// 
			this->lblSettingsConfig->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblSettingsConfig->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSettingsConfig->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblSettingsConfig->Location = System::Drawing::Point(22, 98);
			this->lblSettingsConfig->Name = L"lblSettingsConfig";
			this->lblSettingsConfig->Size = System::Drawing::Size(80, 23);
			this->lblSettingsConfig->TabIndex = 1;
			this->lblSettingsConfig->Text = L"Config";
			this->lblSettingsConfig->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnSettingsConfig
			// 
			this->btnSettingsConfig->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnSettingsConfig->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnSettingsConfig->FlatAppearance->BorderSize = 0;
			this->btnSettingsConfig->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSettingsConfig->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSettingsConfig->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSettingsConfig->Location = System::Drawing::Point(9, 10);
			this->btnSettingsConfig->Name = L"btnSettingsConfig";
			this->btnSettingsConfig->Size = System::Drawing::Size(105, 85);
			this->btnSettingsConfig->TabIndex = 0;
			this->btnSettingsConfig->Text = L"Config Settings";
			this->btnSettingsConfig->UseVisualStyleBackColor = false;
			this->btnSettingsConfig->Click += gcnew System::EventHandler(this, &Settings::btnSettingsConfig_Click);
			// 
			// bunifuSettingsTopSidePnlDragControl
			// 
			this->bunifuSettingsTopSidePnlDragControl->Fixed = true;
			this->bunifuSettingsTopSidePnlDragControl->Horizontal = true;
			this->bunifuSettingsTopSidePnlDragControl->TargetControl = this->pnlSettingsTopSide;
			this->bunifuSettingsTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuSettingsFormDragControl
			// 
			this->bunifuSettingsFormDragControl->Fixed = true;
			this->bunifuSettingsFormDragControl->Horizontal = true;
			this->bunifuSettingsFormDragControl->TargetControl = this;
			this->bunifuSettingsFormDragControl->Vertical = true;
			// 
			// pnlGameSettings
			// 
			this->pnlGameSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlGameSettings->Controls->Add(this->lblGameSettings);
			this->pnlGameSettings->Controls->Add(this->btnGameSettings);
			this->pnlGameSettings->Location = System::Drawing::Point(151, 70);
			this->pnlGameSettings->Name = L"pnlGameSettings";
			this->pnlGameSettings->Size = System::Drawing::Size(124, 132);
			this->pnlGameSettings->TabIndex = 3;
			// 
			// lblGameSettings
			// 
			this->lblGameSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblGameSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblGameSettings->Location = System::Drawing::Point(22, 98);
			this->lblGameSettings->Name = L"lblGameSettings";
			this->lblGameSettings->Size = System::Drawing::Size(80, 23);
			this->lblGameSettings->TabIndex = 1;
			this->lblGameSettings->Text = L"Game";
			this->lblGameSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnGameSettings
			// 
			this->btnGameSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnGameSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnGameSettings->FlatAppearance->BorderSize = 0;
			this->btnGameSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGameSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnGameSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGameSettings->Location = System::Drawing::Point(9, 10);
			this->btnGameSettings->Name = L"btnGameSettings";
			this->btnGameSettings->Size = System::Drawing::Size(105, 85);
			this->btnGameSettings->TabIndex = 0;
			this->btnGameSettings->Text = L"Game Settings";
			this->btnGameSettings->UseVisualStyleBackColor = false;
			this->btnGameSettings->Click += gcnew System::EventHandler(this, &Settings::btnGameSettings_Click);
			// 
			// pnlMenuSettings
			// 
			this->pnlMenuSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlMenuSettings->Controls->Add(this->lblMenuSettings);
			this->pnlMenuSettings->Controls->Add(this->btnMenuSettings);
			this->pnlMenuSettings->Location = System::Drawing::Point(290, 70);
			this->pnlMenuSettings->Name = L"pnlMenuSettings";
			this->pnlMenuSettings->Size = System::Drawing::Size(124, 132);
			this->pnlMenuSettings->TabIndex = 4;
			// 
			// lblMenuSettings
			// 
			this->lblMenuSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblMenuSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblMenuSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblMenuSettings->Location = System::Drawing::Point(22, 98);
			this->lblMenuSettings->Name = L"lblMenuSettings";
			this->lblMenuSettings->Size = System::Drawing::Size(80, 23);
			this->lblMenuSettings->TabIndex = 1;
			this->lblMenuSettings->Text = L"Menu";
			this->lblMenuSettings->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnMenuSettings
			// 
			this->btnMenuSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnMenuSettings->FlatAppearance->BorderSize = 0;
			this->btnMenuSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMenuSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMenuSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnMenuSettings->Location = System::Drawing::Point(9, 10);
			this->btnMenuSettings->Name = L"btnMenuSettings";
			this->btnMenuSettings->Size = System::Drawing::Size(105, 85);
			this->btnMenuSettings->TabIndex = 0;
			this->btnMenuSettings->Text = L"Menu Settings";
			this->btnMenuSettings->UseVisualStyleBackColor = false;
			this->btnMenuSettings->Click += gcnew System::EventHandler(this, &Settings::btnMenuSettings_Click);
			// 
			// pnlDoneSettings
			// 
			this->pnlDoneSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlDoneSettings->Controls->Add(this->btnDoneSettings);
			this->pnlDoneSettings->Location = System::Drawing::Point(78, 222);
			this->pnlDoneSettings->Name = L"pnlDoneSettings";
			this->pnlDoneSettings->Size = System::Drawing::Size(268, 65);
			this->pnlDoneSettings->TabIndex = 5;
			// 
			// btnDoneSettings
			// 
			this->btnDoneSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btnDoneSettings->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->btnDoneSettings->FlatAppearance->BorderSize = 0;
			this->btnDoneSettings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDoneSettings->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDoneSettings->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDoneSettings->Location = System::Drawing::Point(11, 10);
			this->btnDoneSettings->Name = L"btnDoneSettings";
			this->btnDoneSettings->Size = System::Drawing::Size(245, 45);
			this->btnDoneSettings->TabIndex = 0;
			this->btnDoneSettings->Text = L"Done";
			this->btnDoneSettings->UseVisualStyleBackColor = false;
			this->btnDoneSettings->Click += gcnew System::EventHandler(this, &Settings::btnDoneSettings_Click);
			// 
			// bunifuSettingsFormElipse
			// 
			this->bunifuSettingsFormElipse->ElipseRadius = 25;
			this->bunifuSettingsFormElipse->TargetControl = this;
			// 
			// bunifuConfigSettingsBtnElipse
			// 
			this->bunifuConfigSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuConfigSettingsBtnElipse->TargetControl = this->btnSettingsConfig;
			// 
			// bunifuRenderSettingsBtnElipse
			// 
			this->bunifuRenderSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuRenderSettingsBtnElipse->TargetControl = this;
			// 
			// bunifuGameSettingsBtnElipse
			// 
			this->bunifuGameSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuGameSettingsBtnElipse->TargetControl = this->btnGameSettings;
			// 
			// bunifuMenuSettingsBtnElipse
			// 
			this->bunifuMenuSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuMenuSettingsBtnElipse->TargetControl = this->btnMenuSettings;
			// 
			// bunifuConfigSettingsPnlElipse
			// 
			this->bunifuConfigSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuConfigSettingsPnlElipse->TargetControl = this->pnlSettingsConfig;
			// 
			// bunifuRenderSettingsPnlElipse
			// 
			this->bunifuRenderSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuRenderSettingsPnlElipse->TargetControl = this;
			// 
			// bunifuGameSettingsPnlElipse
			// 
			this->bunifuGameSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuGameSettingsPnlElipse->TargetControl = this->pnlGameSettings;
			// 
			// bunifuMenuSettingsPnlElipse
			// 
			this->bunifuMenuSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuMenuSettingsPnlElipse->TargetControl = this->pnlMenuSettings;
			// 
			// bunifuDoneSettingsPnlElipse
			// 
			this->bunifuDoneSettingsPnlElipse->ElipseRadius = 20;
			this->bunifuDoneSettingsPnlElipse->TargetControl = this->pnlDoneSettings;
			// 
			// bunifuDoneSettingsBtnElipse
			// 
			this->bunifuDoneSettingsBtnElipse->ElipseRadius = 20;
			this->bunifuDoneSettingsBtnElipse->TargetControl = this->btnDoneSettings;
			// 
			// bunifuSettingsTopSideLblDragControl
			// 
			this->bunifuSettingsTopSideLblDragControl->Fixed = true;
			this->bunifuSettingsTopSideLblDragControl->Horizontal = true;
			this->bunifuSettingsTopSideLblDragControl->TargetControl = this->TopSidelblSettings;
			this->bunifuSettingsTopSideLblDragControl->Vertical = true;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(430, 300);
			this->Controls->Add(this->pnlDoneSettings);
			this->Controls->Add(this->pnlMenuSettings);
			this->Controls->Add(this->pnlGameSettings);
			this->Controls->Add(this->pnlSettingsConfig);
			this->Controls->Add(this->pnlSettingsTopSide);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"Settings";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Settings";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Settings::Settings_KeyDown);
			this->pnlSettingsTopSide->ResumeLayout(false);
			this->pnlSettingsConfig->ResumeLayout(false);
			this->pnlGameSettings->ResumeLayout(false);
			this->pnlMenuSettings->ResumeLayout(false);
			this->pnlDoneSettings->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnSettingsConfig_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnGameSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnMenuSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnDoneSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void btnBackSettings_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Settings_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
