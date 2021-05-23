#pragma once
using namespace std;
namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ VisualsSettings
	/// </summary>
	public ref class VisualsSettings : public System::Windows::Forms::Form
	{
	public:
		VisualsSettings(void)
		{
			InitializeComponent();
			OnStartInnerPanelState();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~VisualsSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlVisualSettingsLogo;
	private: System::Windows::Forms::Panel^ pnlColors;
	private: System::Windows::Forms::Label^ lblVusialSettingsLogo;
	private: System::Windows::Forms::Panel^ pnlHeadColor;






	private: System::Windows::Forms::Label^ lblHeadColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bHeadColorRedTextBox;
	private: System::Windows::Forms::Panel^ pnlVSOther;
	private: System::Windows::Forms::Panel^ pnlFruitColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bFruitColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bFruitColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bFruitColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bFruitColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bFruitColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bFruitColorGreenTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bFruitColorRedTextBox;
	private: System::Windows::Forms::Label^ lblFruitColor;
	private: System::Windows::Forms::Panel^ pnlBonusColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBonusColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBonusColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBonusColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBonusColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBonusColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBonusColorGreenTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBonusColorRedTextBox;
	private: System::Windows::Forms::Label^ lblBonusColor;
	private: System::Windows::Forms::Panel^ pnlCoinColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bCoinColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bCoinColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bCoinColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bCoinColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bCoinColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bCoinColorGreenTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bCoinColorRedTextBox;
	private: System::Windows::Forms::Label^ lblCoinColor;
	private: System::Windows::Forms::Panel^ pnlBombColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBoombColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBombColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBombColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBombColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBombColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBombColorGreenTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBombColorRedTextBox;
	private: System::Windows::Forms::Label^ lblBombColor;
	private: System::Windows::Forms::Panel^ pnlBodyColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBodyColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBodyColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBodyColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bBodyColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBodyColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBodyColorGreenTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bBodyColorRedTextBox;
	private: System::Windows::Forms::Label^ lblBodyColor;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bHeadColorHexCodeTextBox;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bHeadColorTrackbarBlue;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bHeadColorTrackbarGreen;
	private: Bunifu::Framework::UI::BunifuTrackbar^ bHeadColorTrackbarRed;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bHeadColorBlueTextBox;
	private: Bunifu::Framework::UI::BunifuMetroTextbox^ bHeadColorGreenTextBox;
	private: System::Windows::Forms::ColorDialog^ HeadcolorDialog;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuHeadColorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuBodyColorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuBombColorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuCoinColorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuBonusColorPnlElipse;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuFruitColorPnlElipse;
	private: System::ComponentModel::IContainer^ components;




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
			this->pnlVisualSettingsLogo = (gcnew System::Windows::Forms::Panel());
			this->lblVusialSettingsLogo = (gcnew System::Windows::Forms::Label());
			this->pnlColors = (gcnew System::Windows::Forms::Panel());
			this->pnlVSOther = (gcnew System::Windows::Forms::Panel());
			this->pnlFruitColor = (gcnew System::Windows::Forms::Panel());
			this->bFruitColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bFruitColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bFruitColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bFruitColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bFruitColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bFruitColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bFruitColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblFruitColor = (gcnew System::Windows::Forms::Label());
			this->pnlBonusColor = (gcnew System::Windows::Forms::Panel());
			this->bBonusColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBonusColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBonusColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBonusColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBonusColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBonusColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBonusColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblBonusColor = (gcnew System::Windows::Forms::Label());
			this->pnlCoinColor = (gcnew System::Windows::Forms::Panel());
			this->bCoinColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bCoinColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bCoinColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bCoinColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bCoinColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bCoinColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bCoinColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblCoinColor = (gcnew System::Windows::Forms::Label());
			this->pnlBombColor = (gcnew System::Windows::Forms::Panel());
			this->bBoombColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBombColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBombColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBombColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBombColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBombColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBombColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblBombColor = (gcnew System::Windows::Forms::Label());
			this->pnlBodyColor = (gcnew System::Windows::Forms::Panel());
			this->bBodyColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBodyColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBodyColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBodyColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bBodyColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBodyColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bBodyColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblBodyColor = (gcnew System::Windows::Forms::Label());
			this->pnlHeadColor = (gcnew System::Windows::Forms::Panel());
			this->bHeadColorHexCodeTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bHeadColorTrackbarBlue = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bHeadColorTrackbarGreen = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bHeadColorTrackbarRed = (gcnew Bunifu::Framework::UI::BunifuTrackbar());
			this->bHeadColorBlueTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bHeadColorGreenTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->bHeadColorRedTextBox = (gcnew Bunifu::Framework::UI::BunifuMetroTextbox());
			this->lblHeadColor = (gcnew System::Windows::Forms::Label());
			this->HeadcolorDialog = (gcnew System::Windows::Forms::ColorDialog());
			this->bunifuHeadColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuBodyColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuBombColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuCoinColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuBonusColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuFruitColorPnlElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->pnlVisualSettingsLogo->SuspendLayout();
			this->pnlColors->SuspendLayout();
			this->pnlFruitColor->SuspendLayout();
			this->pnlBonusColor->SuspendLayout();
			this->pnlCoinColor->SuspendLayout();
			this->pnlBombColor->SuspendLayout();
			this->pnlBodyColor->SuspendLayout();
			this->pnlHeadColor->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlVisualSettingsLogo
			// 
			this->pnlVisualSettingsLogo->Controls->Add(this->lblVusialSettingsLogo);
			this->pnlVisualSettingsLogo->Location = System::Drawing::Point(2, 3);
			this->pnlVisualSettingsLogo->Name = L"pnlVisualSettingsLogo";
			this->pnlVisualSettingsLogo->Size = System::Drawing::Size(800, 640);
			this->pnlVisualSettingsLogo->TabIndex = 0;
			// 
			// lblVusialSettingsLogo
			// 
			this->lblVusialSettingsLogo->AutoSize = true;
			this->lblVusialSettingsLogo->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblVusialSettingsLogo->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblVusialSettingsLogo->Location = System::Drawing::Point(275, 268);
			this->lblVusialSettingsLogo->Name = L"lblVusialSettingsLogo";
			this->lblVusialSettingsLogo->Size = System::Drawing::Size(224, 31);
			this->lblVusialSettingsLogo->TabIndex = 0;
			this->lblVusialSettingsLogo->Text = L"Visual Settings";
			// 
			// pnlColors
			// 
			this->pnlColors->AutoScroll = true;
			this->pnlColors->Controls->Add(this->pnlVSOther);
			this->pnlColors->Controls->Add(this->pnlFruitColor);
			this->pnlColors->Controls->Add(this->pnlBonusColor);
			this->pnlColors->Controls->Add(this->pnlCoinColor);
			this->pnlColors->Controls->Add(this->pnlBombColor);
			this->pnlColors->Controls->Add(this->pnlBodyColor);
			this->pnlColors->Controls->Add(this->pnlHeadColor);
			this->pnlColors->Location = System::Drawing::Point(2, 3);
			this->pnlColors->Name = L"pnlColors";
			this->pnlColors->Size = System::Drawing::Size(800, 637);
			this->pnlColors->TabIndex = 1;
			// 
			// pnlVSOther
			// 
			this->pnlVSOther->Location = System::Drawing::Point(0, 3);
			this->pnlVSOther->Name = L"pnlVSOther";
			this->pnlVSOther->Size = System::Drawing::Size(800, 634);
			this->pnlVSOther->TabIndex = 12;
			// 
			// pnlFruitColor
			// 
			this->pnlFruitColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlFruitColor->Controls->Add(this->bFruitColorHexCodeTextBox);
			this->pnlFruitColor->Controls->Add(this->bFruitColorTrackbarBlue);
			this->pnlFruitColor->Controls->Add(this->bFruitColorTrackbarGreen);
			this->pnlFruitColor->Controls->Add(this->bFruitColorTrackbarRed);
			this->pnlFruitColor->Controls->Add(this->bFruitColorBlueTextBox);
			this->pnlFruitColor->Controls->Add(this->bFruitColorGreenTextBox);
			this->pnlFruitColor->Controls->Add(this->bFruitColorRedTextBox);
			this->pnlFruitColor->Controls->Add(this->lblFruitColor);
			this->pnlFruitColor->Location = System::Drawing::Point(535, 231);
			this->pnlFruitColor->Name = L"pnlFruitColor";
			this->pnlFruitColor->Size = System::Drawing::Size(252, 207);
			this->pnlFruitColor->TabIndex = 11;
			// 
			// bFruitColorHexCodeTextBox
			// 
			this->bFruitColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bFruitColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bFruitColorHexCodeTextBox->BorderThickness = 3;
			this->bFruitColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bFruitColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bFruitColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorHexCodeTextBox->isPassword = false;
			this->bFruitColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bFruitColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bFruitColorHexCodeTextBox->Name = L"bFruitColorHexCodeTextBox";
			this->bFruitColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bFruitColorHexCodeTextBox->TabIndex = 8;
			this->bFruitColorHexCodeTextBox->Text = L"Hex:";
			this->bFruitColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bFruitColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bFruitColorTrackbarBlue
			// 
			this->bFruitColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bFruitColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bFruitColorTrackbarBlue->BorderRadius = 0;
			this->bFruitColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bFruitColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bFruitColorTrackbarBlue->MaximumValue = 100;
			this->bFruitColorTrackbarBlue->Name = L"bFruitColorTrackbarBlue";
			this->bFruitColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bFruitColorTrackbarBlue->SliderRadius = 0;
			this->bFruitColorTrackbarBlue->TabIndex = 7;
			this->bFruitColorTrackbarBlue->Value = 0;
			// 
			// bFruitColorTrackbarGreen
			// 
			this->bFruitColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bFruitColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bFruitColorTrackbarGreen->BorderRadius = 0;
			this->bFruitColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bFruitColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bFruitColorTrackbarGreen->MaximumValue = 100;
			this->bFruitColorTrackbarGreen->Name = L"bFruitColorTrackbarGreen";
			this->bFruitColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bFruitColorTrackbarGreen->SliderRadius = 0;
			this->bFruitColorTrackbarGreen->TabIndex = 6;
			this->bFruitColorTrackbarGreen->Value = 0;
			// 
			// bFruitColorTrackbarRed
			// 
			this->bFruitColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bFruitColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bFruitColorTrackbarRed->BorderRadius = 0;
			this->bFruitColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bFruitColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bFruitColorTrackbarRed->MaximumValue = 100;
			this->bFruitColorTrackbarRed->Name = L"bFruitColorTrackbarRed";
			this->bFruitColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bFruitColorTrackbarRed->SliderRadius = 0;
			this->bFruitColorTrackbarRed->TabIndex = 5;
			this->bFruitColorTrackbarRed->Value = 0;
			// 
			// bFruitColorBlueTextBox
			// 
			this->bFruitColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bFruitColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bFruitColorBlueTextBox->BorderThickness = 3;
			this->bFruitColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bFruitColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bFruitColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorBlueTextBox->isPassword = false;
			this->bFruitColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bFruitColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bFruitColorBlueTextBox->Name = L"bFruitColorBlueTextBox";
			this->bFruitColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bFruitColorBlueTextBox->TabIndex = 4;
			this->bFruitColorBlueTextBox->Text = L"B:";
			this->bFruitColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bFruitColorBlueTextBox->UseWaitCursor = true;
			// 
			// bFruitColorGreenTextBox
			// 
			this->bFruitColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bFruitColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bFruitColorGreenTextBox->BorderThickness = 3;
			this->bFruitColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bFruitColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bFruitColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorGreenTextBox->isPassword = false;
			this->bFruitColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bFruitColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bFruitColorGreenTextBox->Name = L"bFruitColorGreenTextBox";
			this->bFruitColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bFruitColorGreenTextBox->TabIndex = 3;
			this->bFruitColorGreenTextBox->Text = L"G:";
			this->bFruitColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bFruitColorGreenTextBox->UseWaitCursor = true;
			// 
			// bFruitColorRedTextBox
			// 
			this->bFruitColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bFruitColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bFruitColorRedTextBox->BorderThickness = 3;
			this->bFruitColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bFruitColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bFruitColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bFruitColorRedTextBox->isPassword = false;
			this->bFruitColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bFruitColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bFruitColorRedTextBox->Name = L"bFruitColorRedTextBox";
			this->bFruitColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bFruitColorRedTextBox->TabIndex = 2;
			this->bFruitColorRedTextBox->Text = L"R:";
			this->bFruitColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bFruitColorRedTextBox->UseWaitCursor = true;
			// 
			// lblFruitColor
			// 
			this->lblFruitColor->AutoSize = true;
			this->lblFruitColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblFruitColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblFruitColor->Location = System::Drawing::Point(86, 12);
			this->lblFruitColor->Name = L"lblFruitColor";
			this->lblFruitColor->Size = System::Drawing::Size(96, 17);
			this->lblFruitColor->TabIndex = 0;
			this->lblFruitColor->Text = L"Fruit Color";
			// 
			// pnlBonusColor
			// 
			this->pnlBonusColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlBonusColor->Controls->Add(this->bBonusColorHexCodeTextBox);
			this->pnlBonusColor->Controls->Add(this->bBonusColorTrackbarBlue);
			this->pnlBonusColor->Controls->Add(this->bBonusColorTrackbarGreen);
			this->pnlBonusColor->Controls->Add(this->bBonusColorTrackbarRed);
			this->pnlBonusColor->Controls->Add(this->bBonusColorBlueTextBox);
			this->pnlBonusColor->Controls->Add(this->bBonusColorGreenTextBox);
			this->pnlBonusColor->Controls->Add(this->bBonusColorRedTextBox);
			this->pnlBonusColor->Controls->Add(this->lblBonusColor);
			this->pnlBonusColor->Location = System::Drawing::Point(273, 231);
			this->pnlBonusColor->Name = L"pnlBonusColor";
			this->pnlBonusColor->Size = System::Drawing::Size(252, 207);
			this->pnlBonusColor->TabIndex = 10;
			// 
			// bBonusColorHexCodeTextBox
			// 
			this->bBonusColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBonusColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBonusColorHexCodeTextBox->BorderThickness = 3;
			this->bBonusColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBonusColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBonusColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorHexCodeTextBox->isPassword = false;
			this->bBonusColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bBonusColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBonusColorHexCodeTextBox->Name = L"bBonusColorHexCodeTextBox";
			this->bBonusColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bBonusColorHexCodeTextBox->TabIndex = 8;
			this->bBonusColorHexCodeTextBox->Text = L"Hex:";
			this->bBonusColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBonusColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bBonusColorTrackbarBlue
			// 
			this->bBonusColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bBonusColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBonusColorTrackbarBlue->BorderRadius = 0;
			this->bBonusColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bBonusColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bBonusColorTrackbarBlue->MaximumValue = 100;
			this->bBonusColorTrackbarBlue->Name = L"bBonusColorTrackbarBlue";
			this->bBonusColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bBonusColorTrackbarBlue->SliderRadius = 0;
			this->bBonusColorTrackbarBlue->TabIndex = 7;
			this->bBonusColorTrackbarBlue->Value = 0;
			// 
			// bBonusColorTrackbarGreen
			// 
			this->bBonusColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bBonusColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBonusColorTrackbarGreen->BorderRadius = 0;
			this->bBonusColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bBonusColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bBonusColorTrackbarGreen->MaximumValue = 100;
			this->bBonusColorTrackbarGreen->Name = L"bBonusColorTrackbarGreen";
			this->bBonusColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bBonusColorTrackbarGreen->SliderRadius = 0;
			this->bBonusColorTrackbarGreen->TabIndex = 6;
			this->bBonusColorTrackbarGreen->Value = 0;
			// 
			// bBonusColorTrackbarRed
			// 
			this->bBonusColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bBonusColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBonusColorTrackbarRed->BorderRadius = 0;
			this->bBonusColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bBonusColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bBonusColorTrackbarRed->MaximumValue = 100;
			this->bBonusColorTrackbarRed->Name = L"bBonusColorTrackbarRed";
			this->bBonusColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bBonusColorTrackbarRed->SliderRadius = 0;
			this->bBonusColorTrackbarRed->TabIndex = 5;
			this->bBonusColorTrackbarRed->Value = 0;
			// 
			// bBonusColorBlueTextBox
			// 
			this->bBonusColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBonusColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBonusColorBlueTextBox->BorderThickness = 3;
			this->bBonusColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBonusColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBonusColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorBlueTextBox->isPassword = false;
			this->bBonusColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bBonusColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBonusColorBlueTextBox->Name = L"bBonusColorBlueTextBox";
			this->bBonusColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bBonusColorBlueTextBox->TabIndex = 4;
			this->bBonusColorBlueTextBox->Text = L"B:";
			this->bBonusColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBonusColorBlueTextBox->UseWaitCursor = true;
			// 
			// bBonusColorGreenTextBox
			// 
			this->bBonusColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBonusColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBonusColorGreenTextBox->BorderThickness = 3;
			this->bBonusColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBonusColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBonusColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorGreenTextBox->isPassword = false;
			this->bBonusColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bBonusColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBonusColorGreenTextBox->Name = L"bBonusColorGreenTextBox";
			this->bBonusColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bBonusColorGreenTextBox->TabIndex = 3;
			this->bBonusColorGreenTextBox->Text = L"G:";
			this->bBonusColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBonusColorGreenTextBox->UseWaitCursor = true;
			// 
			// bBonusColorRedTextBox
			// 
			this->bBonusColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBonusColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBonusColorRedTextBox->BorderThickness = 3;
			this->bBonusColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBonusColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBonusColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBonusColorRedTextBox->isPassword = false;
			this->bBonusColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bBonusColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBonusColorRedTextBox->Name = L"bBonusColorRedTextBox";
			this->bBonusColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bBonusColorRedTextBox->TabIndex = 2;
			this->bBonusColorRedTextBox->Text = L"R:";
			this->bBonusColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBonusColorRedTextBox->UseWaitCursor = true;
			// 
			// lblBonusColor
			// 
			this->lblBonusColor->AutoSize = true;
			this->lblBonusColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBonusColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblBonusColor->Location = System::Drawing::Point(86, 12);
			this->lblBonusColor->Name = L"lblBonusColor";
			this->lblBonusColor->Size = System::Drawing::Size(96, 17);
			this->lblBonusColor->TabIndex = 0;
			this->lblBonusColor->Text = L"Bonus Color";
			// 
			// pnlCoinColor
			// 
			this->pnlCoinColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlCoinColor->Controls->Add(this->bCoinColorHexCodeTextBox);
			this->pnlCoinColor->Controls->Add(this->bCoinColorTrackbarBlue);
			this->pnlCoinColor->Controls->Add(this->bCoinColorTrackbarGreen);
			this->pnlCoinColor->Controls->Add(this->bCoinColorTrackbarRed);
			this->pnlCoinColor->Controls->Add(this->bCoinColorBlueTextBox);
			this->pnlCoinColor->Controls->Add(this->bCoinColorGreenTextBox);
			this->pnlCoinColor->Controls->Add(this->bCoinColorRedTextBox);
			this->pnlCoinColor->Controls->Add(this->lblCoinColor);
			this->pnlCoinColor->Location = System::Drawing::Point(10, 231);
			this->pnlCoinColor->Name = L"pnlCoinColor";
			this->pnlCoinColor->Size = System::Drawing::Size(252, 207);
			this->pnlCoinColor->TabIndex = 9;
			// 
			// bCoinColorHexCodeTextBox
			// 
			this->bCoinColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bCoinColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bCoinColorHexCodeTextBox->BorderThickness = 3;
			this->bCoinColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bCoinColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bCoinColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorHexCodeTextBox->isPassword = false;
			this->bCoinColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bCoinColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bCoinColorHexCodeTextBox->Name = L"bCoinColorHexCodeTextBox";
			this->bCoinColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bCoinColorHexCodeTextBox->TabIndex = 8;
			this->bCoinColorHexCodeTextBox->Text = L"Hex:";
			this->bCoinColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bCoinColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bCoinColorTrackbarBlue
			// 
			this->bCoinColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bCoinColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bCoinColorTrackbarBlue->BorderRadius = 0;
			this->bCoinColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bCoinColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bCoinColorTrackbarBlue->MaximumValue = 100;
			this->bCoinColorTrackbarBlue->Name = L"bCoinColorTrackbarBlue";
			this->bCoinColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bCoinColorTrackbarBlue->SliderRadius = 0;
			this->bCoinColorTrackbarBlue->TabIndex = 7;
			this->bCoinColorTrackbarBlue->Value = 0;
			// 
			// bCoinColorTrackbarGreen
			// 
			this->bCoinColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bCoinColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bCoinColorTrackbarGreen->BorderRadius = 0;
			this->bCoinColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bCoinColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bCoinColorTrackbarGreen->MaximumValue = 100;
			this->bCoinColorTrackbarGreen->Name = L"bCoinColorTrackbarGreen";
			this->bCoinColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bCoinColorTrackbarGreen->SliderRadius = 0;
			this->bCoinColorTrackbarGreen->TabIndex = 6;
			this->bCoinColorTrackbarGreen->Value = 0;
			// 
			// bCoinColorTrackbarRed
			// 
			this->bCoinColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bCoinColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bCoinColorTrackbarRed->BorderRadius = 0;
			this->bCoinColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bCoinColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bCoinColorTrackbarRed->MaximumValue = 100;
			this->bCoinColorTrackbarRed->Name = L"bCoinColorTrackbarRed";
			this->bCoinColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bCoinColorTrackbarRed->SliderRadius = 0;
			this->bCoinColorTrackbarRed->TabIndex = 5;
			this->bCoinColorTrackbarRed->Value = 0;
			// 
			// bCoinColorBlueTextBox
			// 
			this->bCoinColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bCoinColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bCoinColorBlueTextBox->BorderThickness = 3;
			this->bCoinColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bCoinColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bCoinColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorBlueTextBox->isPassword = false;
			this->bCoinColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bCoinColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bCoinColorBlueTextBox->Name = L"bCoinColorBlueTextBox";
			this->bCoinColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bCoinColorBlueTextBox->TabIndex = 4;
			this->bCoinColorBlueTextBox->Text = L"B:";
			this->bCoinColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bCoinColorBlueTextBox->UseWaitCursor = true;
			// 
			// bCoinColorGreenTextBox
			// 
			this->bCoinColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bCoinColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bCoinColorGreenTextBox->BorderThickness = 3;
			this->bCoinColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bCoinColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bCoinColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorGreenTextBox->isPassword = false;
			this->bCoinColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bCoinColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bCoinColorGreenTextBox->Name = L"bCoinColorGreenTextBox";
			this->bCoinColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bCoinColorGreenTextBox->TabIndex = 3;
			this->bCoinColorGreenTextBox->Text = L"G:";
			this->bCoinColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bCoinColorGreenTextBox->UseWaitCursor = true;
			// 
			// bCoinColorRedTextBox
			// 
			this->bCoinColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bCoinColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bCoinColorRedTextBox->BorderThickness = 3;
			this->bCoinColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bCoinColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bCoinColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bCoinColorRedTextBox->isPassword = false;
			this->bCoinColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bCoinColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bCoinColorRedTextBox->Name = L"bCoinColorRedTextBox";
			this->bCoinColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bCoinColorRedTextBox->TabIndex = 2;
			this->bCoinColorRedTextBox->Text = L"R:";
			this->bCoinColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bCoinColorRedTextBox->UseWaitCursor = true;
			// 
			// lblCoinColor
			// 
			this->lblCoinColor->AutoSize = true;
			this->lblCoinColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCoinColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblCoinColor->Location = System::Drawing::Point(86, 12);
			this->lblCoinColor->Name = L"lblCoinColor";
			this->lblCoinColor->Size = System::Drawing::Size(88, 17);
			this->lblCoinColor->TabIndex = 0;
			this->lblCoinColor->Text = L"Coin Color";
			// 
			// pnlBombColor
			// 
			this->pnlBombColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlBombColor->Controls->Add(this->bBoombColorHexCodeTextBox);
			this->pnlBombColor->Controls->Add(this->bBombColorTrackbarBlue);
			this->pnlBombColor->Controls->Add(this->bBombColorTrackbarGreen);
			this->pnlBombColor->Controls->Add(this->bBombColorTrackbarRed);
			this->pnlBombColor->Controls->Add(this->bBombColorBlueTextBox);
			this->pnlBombColor->Controls->Add(this->bBombColorGreenTextBox);
			this->pnlBombColor->Controls->Add(this->bBombColorRedTextBox);
			this->pnlBombColor->Controls->Add(this->lblBombColor);
			this->pnlBombColor->Location = System::Drawing::Point(536, 9);
			this->pnlBombColor->Name = L"pnlBombColor";
			this->pnlBombColor->Size = System::Drawing::Size(252, 207);
			this->pnlBombColor->TabIndex = 8;
			// 
			// bBoombColorHexCodeTextBox
			// 
			this->bBoombColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBoombColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBoombColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBoombColorHexCodeTextBox->BorderThickness = 3;
			this->bBoombColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBoombColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBoombColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBoombColorHexCodeTextBox->isPassword = false;
			this->bBoombColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bBoombColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBoombColorHexCodeTextBox->Name = L"bBoombColorHexCodeTextBox";
			this->bBoombColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bBoombColorHexCodeTextBox->TabIndex = 8;
			this->bBoombColorHexCodeTextBox->Text = L"Hex:";
			this->bBoombColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBoombColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bBombColorTrackbarBlue
			// 
			this->bBombColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bBombColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBombColorTrackbarBlue->BorderRadius = 0;
			this->bBombColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bBombColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bBombColorTrackbarBlue->MaximumValue = 100;
			this->bBombColorTrackbarBlue->Name = L"bBombColorTrackbarBlue";
			this->bBombColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bBombColorTrackbarBlue->SliderRadius = 0;
			this->bBombColorTrackbarBlue->TabIndex = 7;
			this->bBombColorTrackbarBlue->Value = 0;
			// 
			// bBombColorTrackbarGreen
			// 
			this->bBombColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bBombColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBombColorTrackbarGreen->BorderRadius = 0;
			this->bBombColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bBombColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bBombColorTrackbarGreen->MaximumValue = 100;
			this->bBombColorTrackbarGreen->Name = L"bBombColorTrackbarGreen";
			this->bBombColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bBombColorTrackbarGreen->SliderRadius = 0;
			this->bBombColorTrackbarGreen->TabIndex = 6;
			this->bBombColorTrackbarGreen->Value = 0;
			// 
			// bBombColorTrackbarRed
			// 
			this->bBombColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bBombColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBombColorTrackbarRed->BorderRadius = 0;
			this->bBombColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bBombColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bBombColorTrackbarRed->MaximumValue = 100;
			this->bBombColorTrackbarRed->Name = L"bBombColorTrackbarRed";
			this->bBombColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bBombColorTrackbarRed->SliderRadius = 0;
			this->bBombColorTrackbarRed->TabIndex = 5;
			this->bBombColorTrackbarRed->Value = 0;
			// 
			// bBombColorBlueTextBox
			// 
			this->bBombColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBombColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBombColorBlueTextBox->BorderThickness = 3;
			this->bBombColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBombColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBombColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorBlueTextBox->isPassword = false;
			this->bBombColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bBombColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBombColorBlueTextBox->Name = L"bBombColorBlueTextBox";
			this->bBombColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bBombColorBlueTextBox->TabIndex = 4;
			this->bBombColorBlueTextBox->Text = L"B:";
			this->bBombColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBombColorBlueTextBox->UseWaitCursor = true;
			// 
			// bBombColorGreenTextBox
			// 
			this->bBombColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBombColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBombColorGreenTextBox->BorderThickness = 3;
			this->bBombColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBombColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBombColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorGreenTextBox->isPassword = false;
			this->bBombColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bBombColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBombColorGreenTextBox->Name = L"bBombColorGreenTextBox";
			this->bBombColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bBombColorGreenTextBox->TabIndex = 3;
			this->bBombColorGreenTextBox->Text = L"G:";
			this->bBombColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBombColorGreenTextBox->UseWaitCursor = true;
			// 
			// bBombColorRedTextBox
			// 
			this->bBombColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBombColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBombColorRedTextBox->BorderThickness = 3;
			this->bBombColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBombColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBombColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBombColorRedTextBox->isPassword = false;
			this->bBombColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bBombColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBombColorRedTextBox->Name = L"bBombColorRedTextBox";
			this->bBombColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bBombColorRedTextBox->TabIndex = 2;
			this->bBombColorRedTextBox->Text = L"R:";
			this->bBombColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBombColorRedTextBox->UseWaitCursor = true;
			// 
			// lblBombColor
			// 
			this->lblBombColor->AutoSize = true;
			this->lblBombColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBombColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblBombColor->Location = System::Drawing::Point(86, 12);
			this->lblBombColor->Name = L"lblBombColor";
			this->lblBombColor->Size = System::Drawing::Size(88, 17);
			this->lblBombColor->TabIndex = 0;
			this->lblBombColor->Text = L"Bomb Color";
			// 
			// pnlBodyColor
			// 
			this->pnlBodyColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlBodyColor->Controls->Add(this->bBodyColorHexCodeTextBox);
			this->pnlBodyColor->Controls->Add(this->bBodyColorTrackbarBlue);
			this->pnlBodyColor->Controls->Add(this->bBodyColorTrackbarGreen);
			this->pnlBodyColor->Controls->Add(this->bBodyColorTrackbarRed);
			this->pnlBodyColor->Controls->Add(this->bBodyColorBlueTextBox);
			this->pnlBodyColor->Controls->Add(this->bBodyColorGreenTextBox);
			this->pnlBodyColor->Controls->Add(this->bBodyColorRedTextBox);
			this->pnlBodyColor->Controls->Add(this->lblBodyColor);
			this->pnlBodyColor->Location = System::Drawing::Point(274, 9);
			this->pnlBodyColor->Name = L"pnlBodyColor";
			this->pnlBodyColor->Size = System::Drawing::Size(252, 207);
			this->pnlBodyColor->TabIndex = 7;
			// 
			// bBodyColorHexCodeTextBox
			// 
			this->bBodyColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBodyColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBodyColorHexCodeTextBox->BorderThickness = 3;
			this->bBodyColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBodyColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBodyColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorHexCodeTextBox->isPassword = false;
			this->bBodyColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bBodyColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBodyColorHexCodeTextBox->Name = L"bBodyColorHexCodeTextBox";
			this->bBodyColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bBodyColorHexCodeTextBox->TabIndex = 8;
			this->bBodyColorHexCodeTextBox->Text = L"Hex:";
			this->bBodyColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBodyColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bBodyColorTrackbarBlue
			// 
			this->bBodyColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bBodyColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBodyColorTrackbarBlue->BorderRadius = 0;
			this->bBodyColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bBodyColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bBodyColorTrackbarBlue->MaximumValue = 100;
			this->bBodyColorTrackbarBlue->Name = L"bBodyColorTrackbarBlue";
			this->bBodyColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bBodyColorTrackbarBlue->SliderRadius = 0;
			this->bBodyColorTrackbarBlue->TabIndex = 7;
			this->bBodyColorTrackbarBlue->Value = 0;
			// 
			// bBodyColorTrackbarGreen
			// 
			this->bBodyColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bBodyColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBodyColorTrackbarGreen->BorderRadius = 0;
			this->bBodyColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bBodyColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bBodyColorTrackbarGreen->MaximumValue = 100;
			this->bBodyColorTrackbarGreen->Name = L"bBodyColorTrackbarGreen";
			this->bBodyColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bBodyColorTrackbarGreen->SliderRadius = 0;
			this->bBodyColorTrackbarGreen->TabIndex = 6;
			this->bBodyColorTrackbarGreen->Value = 0;
			// 
			// bBodyColorTrackbarRed
			// 
			this->bBodyColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bBodyColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bBodyColorTrackbarRed->BorderRadius = 0;
			this->bBodyColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bBodyColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bBodyColorTrackbarRed->MaximumValue = 100;
			this->bBodyColorTrackbarRed->Name = L"bBodyColorTrackbarRed";
			this->bBodyColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bBodyColorTrackbarRed->SliderRadius = 0;
			this->bBodyColorTrackbarRed->TabIndex = 5;
			this->bBodyColorTrackbarRed->Value = 0;
			// 
			// bBodyColorBlueTextBox
			// 
			this->bBodyColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBodyColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBodyColorBlueTextBox->BorderThickness = 3;
			this->bBodyColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBodyColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBodyColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorBlueTextBox->isPassword = false;
			this->bBodyColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bBodyColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBodyColorBlueTextBox->Name = L"bBodyColorBlueTextBox";
			this->bBodyColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bBodyColorBlueTextBox->TabIndex = 4;
			this->bBodyColorBlueTextBox->Text = L"B:";
			this->bBodyColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBodyColorBlueTextBox->UseWaitCursor = true;
			// 
			// bBodyColorGreenTextBox
			// 
			this->bBodyColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBodyColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBodyColorGreenTextBox->BorderThickness = 3;
			this->bBodyColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBodyColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBodyColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorGreenTextBox->isPassword = false;
			this->bBodyColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bBodyColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBodyColorGreenTextBox->Name = L"bBodyColorGreenTextBox";
			this->bBodyColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bBodyColorGreenTextBox->TabIndex = 3;
			this->bBodyColorGreenTextBox->Text = L"G:";
			this->bBodyColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBodyColorGreenTextBox->UseWaitCursor = true;
			// 
			// bBodyColorRedTextBox
			// 
			this->bBodyColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bBodyColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bBodyColorRedTextBox->BorderThickness = 3;
			this->bBodyColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bBodyColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bBodyColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bBodyColorRedTextBox->isPassword = false;
			this->bBodyColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bBodyColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bBodyColorRedTextBox->Name = L"bBodyColorRedTextBox";
			this->bBodyColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bBodyColorRedTextBox->TabIndex = 2;
			this->bBodyColorRedTextBox->Text = L"R:";
			this->bBodyColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bBodyColorRedTextBox->UseWaitCursor = true;
			// 
			// lblBodyColor
			// 
			this->lblBodyColor->AutoSize = true;
			this->lblBodyColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblBodyColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblBodyColor->Location = System::Drawing::Point(86, 12);
			this->lblBodyColor->Name = L"lblBodyColor";
			this->lblBodyColor->Size = System::Drawing::Size(88, 17);
			this->lblBodyColor->TabIndex = 0;
			this->lblBodyColor->Text = L"Body Color";
			// 
			// pnlHeadColor
			// 
			this->pnlHeadColor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlHeadColor->Controls->Add(this->bHeadColorHexCodeTextBox);
			this->pnlHeadColor->Controls->Add(this->bHeadColorTrackbarBlue);
			this->pnlHeadColor->Controls->Add(this->bHeadColorTrackbarGreen);
			this->pnlHeadColor->Controls->Add(this->bHeadColorTrackbarRed);
			this->pnlHeadColor->Controls->Add(this->bHeadColorBlueTextBox);
			this->pnlHeadColor->Controls->Add(this->bHeadColorGreenTextBox);
			this->pnlHeadColor->Controls->Add(this->bHeadColorRedTextBox);
			this->pnlHeadColor->Controls->Add(this->lblHeadColor);
			this->pnlHeadColor->Location = System::Drawing::Point(10, 9);
			this->pnlHeadColor->Name = L"pnlHeadColor";
			this->pnlHeadColor->Size = System::Drawing::Size(252, 207);
			this->pnlHeadColor->TabIndex = 6;
			// 
			// bHeadColorHexCodeTextBox
			// 
			this->bHeadColorHexCodeTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bHeadColorHexCodeTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorHexCodeTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bHeadColorHexCodeTextBox->BorderThickness = 3;
			this->bHeadColorHexCodeTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bHeadColorHexCodeTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bHeadColorHexCodeTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorHexCodeTextBox->isPassword = false;
			this->bHeadColorHexCodeTextBox->Location = System::Drawing::Point(11, 155);
			this->bHeadColorHexCodeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bHeadColorHexCodeTextBox->Name = L"bHeadColorHexCodeTextBox";
			this->bHeadColorHexCodeTextBox->Size = System::Drawing::Size(96, 36);
			this->bHeadColorHexCodeTextBox->TabIndex = 8;
			this->bHeadColorHexCodeTextBox->Text = L"Hex:";
			this->bHeadColorHexCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bHeadColorHexCodeTextBox->UseWaitCursor = true;
			// 
			// bHeadColorTrackbarBlue
			// 
			this->bHeadColorTrackbarBlue->BackColor = System::Drawing::Color::Transparent;
			this->bHeadColorTrackbarBlue->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bHeadColorTrackbarBlue->BorderRadius = 0;
			this->bHeadColorTrackbarBlue->IndicatorColor = System::Drawing::Color::Blue;
			this->bHeadColorTrackbarBlue->Location = System::Drawing::Point(72, 119);
			this->bHeadColorTrackbarBlue->MaximumValue = 100;
			this->bHeadColorTrackbarBlue->Name = L"bHeadColorTrackbarBlue";
			this->bHeadColorTrackbarBlue->Size = System::Drawing::Size(163, 30);
			this->bHeadColorTrackbarBlue->SliderRadius = 0;
			this->bHeadColorTrackbarBlue->TabIndex = 7;
			this->bHeadColorTrackbarBlue->Value = 0;
			// 
			// bHeadColorTrackbarGreen
			// 
			this->bHeadColorTrackbarGreen->BackColor = System::Drawing::Color::Transparent;
			this->bHeadColorTrackbarGreen->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bHeadColorTrackbarGreen->BorderRadius = 0;
			this->bHeadColorTrackbarGreen->IndicatorColor = System::Drawing::Color::Green;
			this->bHeadColorTrackbarGreen->Location = System::Drawing::Point(71, 83);
			this->bHeadColorTrackbarGreen->MaximumValue = 100;
			this->bHeadColorTrackbarGreen->Name = L"bHeadColorTrackbarGreen";
			this->bHeadColorTrackbarGreen->Size = System::Drawing::Size(163, 30);
			this->bHeadColorTrackbarGreen->SliderRadius = 0;
			this->bHeadColorTrackbarGreen->TabIndex = 6;
			this->bHeadColorTrackbarGreen->Value = 0;
			// 
			// bHeadColorTrackbarRed
			// 
			this->bHeadColorTrackbarRed->BackColor = System::Drawing::Color::Transparent;
			this->bHeadColorTrackbarRed->BackgroudColor = System::Drawing::Color::DarkGray;
			this->bHeadColorTrackbarRed->BorderRadius = 0;
			this->bHeadColorTrackbarRed->IndicatorColor = System::Drawing::Color::Maroon;
			this->bHeadColorTrackbarRed->Location = System::Drawing::Point(71, 45);
			this->bHeadColorTrackbarRed->MaximumValue = 100;
			this->bHeadColorTrackbarRed->Name = L"bHeadColorTrackbarRed";
			this->bHeadColorTrackbarRed->Size = System::Drawing::Size(163, 30);
			this->bHeadColorTrackbarRed->SliderRadius = 0;
			this->bHeadColorTrackbarRed->TabIndex = 5;
			this->bHeadColorTrackbarRed->Value = 0;
			// 
			// bHeadColorBlueTextBox
			// 
			this->bHeadColorBlueTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bHeadColorBlueTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorBlueTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bHeadColorBlueTextBox->BorderThickness = 3;
			this->bHeadColorBlueTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bHeadColorBlueTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bHeadColorBlueTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorBlueTextBox->isPassword = false;
			this->bHeadColorBlueTextBox->Location = System::Drawing::Point(11, 116);
			this->bHeadColorBlueTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bHeadColorBlueTextBox->Name = L"bHeadColorBlueTextBox";
			this->bHeadColorBlueTextBox->Size = System::Drawing::Size(54, 36);
			this->bHeadColorBlueTextBox->TabIndex = 4;
			this->bHeadColorBlueTextBox->Text = L"B:";
			this->bHeadColorBlueTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bHeadColorBlueTextBox->UseWaitCursor = true;
			// 
			// bHeadColorGreenTextBox
			// 
			this->bHeadColorGreenTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bHeadColorGreenTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorGreenTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bHeadColorGreenTextBox->BorderThickness = 3;
			this->bHeadColorGreenTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bHeadColorGreenTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bHeadColorGreenTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorGreenTextBox->isPassword = false;
			this->bHeadColorGreenTextBox->Location = System::Drawing::Point(10, 79);
			this->bHeadColorGreenTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bHeadColorGreenTextBox->Name = L"bHeadColorGreenTextBox";
			this->bHeadColorGreenTextBox->Size = System::Drawing::Size(54, 36);
			this->bHeadColorGreenTextBox->TabIndex = 3;
			this->bHeadColorGreenTextBox->Text = L"G:";
			this->bHeadColorGreenTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bHeadColorGreenTextBox->UseWaitCursor = true;
			// 
			// bHeadColorRedTextBox
			// 
			this->bHeadColorRedTextBox->BorderColorFocused = System::Drawing::Color::Blue;
			this->bHeadColorRedTextBox->BorderColorIdle = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorRedTextBox->BorderColorMouseHover = System::Drawing::Color::Blue;
			this->bHeadColorRedTextBox->BorderThickness = 3;
			this->bHeadColorRedTextBox->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->bHeadColorRedTextBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->bHeadColorRedTextBox->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->bHeadColorRedTextBox->isPassword = false;
			this->bHeadColorRedTextBox->Location = System::Drawing::Point(10, 42);
			this->bHeadColorRedTextBox->Margin = System::Windows::Forms::Padding(4);
			this->bHeadColorRedTextBox->Name = L"bHeadColorRedTextBox";
			this->bHeadColorRedTextBox->Size = System::Drawing::Size(54, 36);
			this->bHeadColorRedTextBox->TabIndex = 2;
			this->bHeadColorRedTextBox->Text = L"R:";
			this->bHeadColorRedTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->bHeadColorRedTextBox->UseWaitCursor = true;
			// 
			// lblHeadColor
			// 
			this->lblHeadColor->AutoSize = true;
			this->lblHeadColor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHeadColor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblHeadColor->Location = System::Drawing::Point(86, 12);
			this->lblHeadColor->Name = L"lblHeadColor";
			this->lblHeadColor->Size = System::Drawing::Size(88, 17);
			this->lblHeadColor->TabIndex = 0;
			this->lblHeadColor->Text = L"Head Color";
			// 
			// HeadcolorDialog
			// 
			this->HeadcolorDialog->FullOpen = true;
			// 
			// bunifuHeadColorPnlElipse
			// 
			this->bunifuHeadColorPnlElipse->ElipseRadius = 25;
			this->bunifuHeadColorPnlElipse->TargetControl = this->pnlHeadColor;
			// 
			// bunifuBodyColorPnlElipse
			// 
			this->bunifuBodyColorPnlElipse->ElipseRadius = 25;
			this->bunifuBodyColorPnlElipse->TargetControl = this->pnlBodyColor;
			// 
			// bunifuBombColorPnlElipse
			// 
			this->bunifuBombColorPnlElipse->ElipseRadius = 25;
			this->bunifuBombColorPnlElipse->TargetControl = this->pnlBombColor;
			// 
			// bunifuCoinColorPnlElipse
			// 
			this->bunifuCoinColorPnlElipse->ElipseRadius = 25;
			this->bunifuCoinColorPnlElipse->TargetControl = this->pnlCoinColor;
			// 
			// bunifuBonusColorPnlElipse
			// 
			this->bunifuBonusColorPnlElipse->ElipseRadius = 25;
			this->bunifuBonusColorPnlElipse->TargetControl = this->pnlBonusColor;
			// 
			// bunifuFruitColorPnlElipse
			// 
			this->bunifuFruitColorPnlElipse->ElipseRadius = 25;
			this->bunifuFruitColorPnlElipse->TargetControl = this->pnlFruitColor;
			// 
			// VisualsSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(804, 641);
			this->Controls->Add(this->pnlColors);
			this->Controls->Add(this->pnlVisualSettingsLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"VisualsSettings";
			this->Text = L"VisualsSettings";
			this->pnlVisualSettingsLogo->ResumeLayout(false);
			this->pnlVisualSettingsLogo->PerformLayout();
			this->pnlColors->ResumeLayout(false);
			this->pnlFruitColor->ResumeLayout(false);
			this->pnlFruitColor->PerformLayout();
			this->pnlBonusColor->ResumeLayout(false);
			this->pnlBonusColor->PerformLayout();
			this->pnlCoinColor->ResumeLayout(false);
			this->pnlCoinColor->PerformLayout();
			this->pnlBombColor->ResumeLayout(false);
			this->pnlBombColor->PerformLayout();
			this->pnlBodyColor->ResumeLayout(false);
			this->pnlBodyColor->PerformLayout();
			this->pnlHeadColor->ResumeLayout(false);
			this->pnlHeadColor->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//private: std::list<std::string> existingNamesOfInnerPanels;
	private: void OnStartInnerPanelState();
	public: void HideInnerPanel();
	public: void ShowInnerPanel(String^ nameOfPanel);
	};
}
