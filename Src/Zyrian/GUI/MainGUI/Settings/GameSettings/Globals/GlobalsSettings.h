#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ GlobalsSettings
	/// </summary>
	public ref class GlobalsSettings : public System::Windows::Forms::Form
	{
	public:
		GlobalsSettings(void)
		{
			InitializeComponent();
			OnStartInnerPanelsState();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~GlobalsSettings()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^ pnlGlobalSettingsDifficulty;
	private: System::Windows::Forms::Panel^ pnlGameSpeed;

	private: System::Windows::Forms::Label^ lblGameSpeed;
	private: System::Windows::Forms::TrackBar^ trackBarGameSpeed;
	private: System::Windows::Forms::CheckedListBox^ checkedListBoxSpawnOptions;


	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bTextBoxGameSpeedDisplay;
	private: System::Windows::Forms::Panel^ pnlSpawnOptions;
	private: System::Windows::Forms::Label^ lblSpawnOptions;
	private: System::Windows::Forms::Panel^ pnlGlobalSettingsLogo;


	private: System::Windows::Forms::Label^ lblGlobalSettingsLogo;





	protected:

	protected:


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnlGlobalSettingsDifficulty = (gcnew System::Windows::Forms::Panel());
			this->pnlSpawnOptions = (gcnew System::Windows::Forms::Panel());
			this->lblSpawnOptions = (gcnew System::Windows::Forms::Label());
			this->checkedListBoxSpawnOptions = (gcnew System::Windows::Forms::CheckedListBox());
			this->pnlGameSpeed = (gcnew System::Windows::Forms::Panel());
			this->bTextBoxGameSpeedDisplay = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->trackBarGameSpeed = (gcnew System::Windows::Forms::TrackBar());
			this->lblGameSpeed = (gcnew System::Windows::Forms::Label());
			this->pnlGlobalSettingsLogo = (gcnew System::Windows::Forms::Panel());
			this->lblGlobalSettingsLogo = (gcnew System::Windows::Forms::Label());
			this->pnlGlobalSettingsDifficulty->SuspendLayout();
			this->pnlSpawnOptions->SuspendLayout();
			this->pnlGameSpeed->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarGameSpeed))->BeginInit();
			this->pnlGlobalSettingsLogo->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlGlobalSettingsDifficulty
			// 
			this->pnlGlobalSettingsDifficulty->AutoScroll = true;
			this->pnlGlobalSettingsDifficulty->Controls->Add(this->pnlGameSpeed);
			this->pnlGlobalSettingsDifficulty->Controls->Add(this->pnlSpawnOptions);
			this->pnlGlobalSettingsDifficulty->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.999999F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->pnlGlobalSettingsDifficulty->Location = System::Drawing::Point(2, 3);
			this->pnlGlobalSettingsDifficulty->Name = L"pnlGlobalSettingsDifficulty";
			this->pnlGlobalSettingsDifficulty->Size = System::Drawing::Size(797, 638);
			this->pnlGlobalSettingsDifficulty->TabIndex = 2;
			// 
			// pnlSpawnOptions
			// 
			this->pnlSpawnOptions->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlSpawnOptions->Controls->Add(this->lblSpawnOptions);
			this->pnlSpawnOptions->Controls->Add(this->checkedListBoxSpawnOptions);
			this->pnlSpawnOptions->Location = System::Drawing::Point(402, 64);
			this->pnlSpawnOptions->Name = L"pnlSpawnOptions";
			this->pnlSpawnOptions->Size = System::Drawing::Size(186, 162);
			this->pnlSpawnOptions->TabIndex = 4;
			// 
			// lblSpawnOptions
			// 
			this->lblSpawnOptions->AutoSize = true;
			this->lblSpawnOptions->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSpawnOptions->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblSpawnOptions->Location = System::Drawing::Point(32, 15);
			this->lblSpawnOptions->Name = L"lblSpawnOptions";
			this->lblSpawnOptions->Size = System::Drawing::Size(126, 19);
			this->lblSpawnOptions->TabIndex = 4;
			this->lblSpawnOptions->Text = L"Spawn Options";
			// 
			// checkedListBoxSpawnOptions
			// 
			this->checkedListBoxSpawnOptions->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->checkedListBoxSpawnOptions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedListBoxSpawnOptions->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBoxSpawnOptions->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->checkedListBoxSpawnOptions->FormattingEnabled = true;
			this->checkedListBoxSpawnOptions->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Spawn bombs", L"Spawn bonus",
					L"Spawn coins"
			});
			this->checkedListBoxSpawnOptions->Location = System::Drawing::Point(22, 67);
			this->checkedListBoxSpawnOptions->Name = L"checkedListBoxSpawnOptions";
			this->checkedListBoxSpawnOptions->Size = System::Drawing::Size(145, 68);
			this->checkedListBoxSpawnOptions->TabIndex = 3;
			// 
			// pnlGameSpeed
			// 
			this->pnlGameSpeed->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlGameSpeed->Controls->Add(this->bTextBoxGameSpeedDisplay);
			this->pnlGameSpeed->Controls->Add(this->trackBarGameSpeed);
			this->pnlGameSpeed->Controls->Add(this->lblGameSpeed);
			this->pnlGameSpeed->Location = System::Drawing::Point(81, 64);
			this->pnlGameSpeed->Name = L"pnlGameSpeed";
			this->pnlGameSpeed->Size = System::Drawing::Size(293, 162);
			this->pnlGameSpeed->TabIndex = 2;
			// 
			// bTextBoxGameSpeedDisplay
			// 
			this->bTextBoxGameSpeedDisplay->BorderColorFocused = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			this->bTextBoxGameSpeedDisplay->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bTextBoxGameSpeedDisplay->BorderColorMouseHover = System::Drawing::Color::SlateGray;
			this->bTextBoxGameSpeedDisplay->BorderThickness = 3;
			this->bTextBoxGameSpeedDisplay->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->bTextBoxGameSpeedDisplay->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->bTextBoxGameSpeedDisplay->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bTextBoxGameSpeedDisplay->isPassword = false;
			this->bTextBoxGameSpeedDisplay->Location = System::Drawing::Point(109, 101);
			this->bTextBoxGameSpeedDisplay->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bTextBoxGameSpeedDisplay->Name = L"bTextBoxGameSpeedDisplay";
			this->bTextBoxGameSpeedDisplay->Size = System::Drawing::Size(71, 44);
			this->bTextBoxGameSpeedDisplay->TabIndex = 2;
			this->bTextBoxGameSpeedDisplay->Text = L"Speed";
			this->bTextBoxGameSpeedDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// trackBarGameSpeed
			// 
			this->trackBarGameSpeed->Location = System::Drawing::Point(16, 67);
			this->trackBarGameSpeed->Name = L"trackBarGameSpeed";
			this->trackBarGameSpeed->Size = System::Drawing::Size(265, 45);
			this->trackBarGameSpeed->TabIndex = 0;
			// 
			// lblGameSpeed
			// 
			this->lblGameSpeed->AutoSize = true;
			this->lblGameSpeed->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGameSpeed->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblGameSpeed->Location = System::Drawing::Point(98, 16);
			this->lblGameSpeed->Name = L"lblGameSpeed";
			this->lblGameSpeed->Size = System::Drawing::Size(99, 19);
			this->lblGameSpeed->TabIndex = 1;
			this->lblGameSpeed->Text = L"Game Speed";
			// 
			// pnlGlobalSettingsLogo
			// 
			this->pnlGlobalSettingsLogo->Controls->Add(this->lblGlobalSettingsLogo);
			this->pnlGlobalSettingsLogo->Location = System::Drawing::Point(172, 176);
			this->pnlGlobalSettingsLogo->Name = L"pnlGlobalSettingsLogo";
			this->pnlGlobalSettingsLogo->Size = System::Drawing::Size(487, 230);
			this->pnlGlobalSettingsLogo->TabIndex = 5;
			// 
			// lblGlobalSettingsLogo
			// 
			this->lblGlobalSettingsLogo->AutoSize = true;
			this->lblGlobalSettingsLogo->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblGlobalSettingsLogo->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblGlobalSettingsLogo->Location = System::Drawing::Point(131, 99);
			this->lblGlobalSettingsLogo->Name = L"lblGlobalSettingsLogo";
			this->lblGlobalSettingsLogo->Size = System::Drawing::Size(224, 31);
			this->lblGlobalSettingsLogo->TabIndex = 0;
			this->lblGlobalSettingsLogo->Text = L"Global Settings";
			// 
			// GlobalsSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(800, 640);
			this->Controls->Add(this->pnlGlobalSettingsDifficulty);
			this->Controls->Add(this->pnlGlobalSettingsLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"GlobalsSettings";
			this->Text = L"GlobalsSettings";
			this->pnlGlobalSettingsDifficulty->ResumeLayout(false);
			this->pnlSpawnOptions->ResumeLayout(false);
			this->pnlSpawnOptions->PerformLayout();
			this->pnlGameSpeed->ResumeLayout(false);
			this->pnlGameSpeed->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarGameSpeed))->EndInit();
			this->pnlGlobalSettingsLogo->ResumeLayout(false);
			this->pnlGlobalSettingsLogo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: void OnStartInnerPanelsState();
		public: void HideGlobalSettingsInnerPanel();
		public: void ShowGlobalSettingsInnerPanel(String^ nameOfPanel);
};
}
