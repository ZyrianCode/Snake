#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlGameTopSide;
	private: System::Windows::Forms::Label^ lblGameTopSide;
	private: System::Windows::Forms::Panel^ pnlUpperBorder;
	private: System::Windows::Forms::Panel^ pnlLowerBorder;
	private: System::Windows::Forms::Panel^ pnlLeftBorder;
	private: System::Windows::Forms::Panel^ pnlRightBorder;
	private: System::Windows::Forms::Panel^ pnlGameArea;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameFormElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameFormDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSidePnlDragControl;
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
			this->pnlGameTopSide = (gcnew System::Windows::Forms::Panel());
			this->lblGameTopSide = (gcnew System::Windows::Forms::Label());
			this->pnlUpperBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlLowerBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlRightBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlGameArea = (gcnew System::Windows::Forms::Panel());
			this->bunifuGameFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGameTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlGameTopSide->SuspendLayout();
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
			this->pnlGameArea->Location = System::Drawing::Point(10, 160);
			this->pnlGameArea->Name = L"pnlGameArea";
			this->pnlGameArea->Size = System::Drawing::Size(680, 530);
			this->pnlGameArea->TabIndex = 5;
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
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(700, 700);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	public: static Boolean IsRunning;
	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	private: System::Void GameOnInGameGui_Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
	
};
}
