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
	private: System::Windows::Forms::Panel^ pnlTopSideGame;
	private: System::Windows::Forms::Label^ lblTopSideGame;
	private: System::Windows::Forms::Panel^ pnlGameLowerBorder;
	private: System::Windows::Forms::Panel^ pnlGameUpperBorder;
	private: System::Windows::Forms::Panel^ pnlGameLeftBorder;
	private: System::Windows::Forms::Panel^ pnlGameRightBorder;
	private: System::Windows::Forms::Panel^ GameAreaPnl;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuGameFormElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuGameFormDragControl;

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
			this->pnlTopSideGame = (gcnew System::Windows::Forms::Panel());
			this->lblTopSideGame = (gcnew System::Windows::Forms::Label());
			this->pnlGameLowerBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlGameUpperBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlGameLeftBorder = (gcnew System::Windows::Forms::Panel());
			this->pnlGameRightBorder = (gcnew System::Windows::Forms::Panel());
			this->GameAreaPnl = (gcnew System::Windows::Forms::Panel());
			this->bunifuGameFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuGameTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuGameFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlTopSideGame->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTopSideGame
			// 
			this->pnlTopSideGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlTopSideGame->Controls->Add(this->lblTopSideGame);
			this->pnlTopSideGame->Location = System::Drawing::Point(0, 0);
			this->pnlTopSideGame->Name = L"pnlTopSideGame";
			this->pnlTopSideGame->Size = System::Drawing::Size(700, 50);
			this->pnlTopSideGame->TabIndex = 0;
			// 
			// lblTopSideGame
			// 
			this->lblTopSideGame->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTopSideGame->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblTopSideGame->Location = System::Drawing::Point(299, 12);
			this->lblTopSideGame->Name = L"lblTopSideGame";
			this->lblTopSideGame->Size = System::Drawing::Size(100, 23);
			this->lblTopSideGame->TabIndex = 0;
			this->lblTopSideGame->Text = L"Snake";
			this->lblTopSideGame->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlGameLowerBorder
			// 
			this->pnlGameLowerBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->pnlGameLowerBorder->Location = System::Drawing::Point(0, 690);
			this->pnlGameLowerBorder->Name = L"pnlGameLowerBorder";
			this->pnlGameLowerBorder->Size = System::Drawing::Size(700, 10);
			this->pnlGameLowerBorder->TabIndex = 1;
			// 
			// pnlGameUpperBorder
			// 
			this->pnlGameUpperBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->pnlGameUpperBorder->Location = System::Drawing::Point(0, 140);
			this->pnlGameUpperBorder->Name = L"pnlGameUpperBorder";
			this->pnlGameUpperBorder->Size = System::Drawing::Size(700, 10);
			this->pnlGameUpperBorder->TabIndex = 2;
			// 
			// pnlGameLeftBorder
			// 
			this->pnlGameLeftBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->pnlGameLeftBorder->Location = System::Drawing::Point(0, 150);
			this->pnlGameLeftBorder->Name = L"pnlGameLeftBorder";
			this->pnlGameLeftBorder->Size = System::Drawing::Size(10, 540);
			this->pnlGameLeftBorder->TabIndex = 3;
			// 
			// pnlGameRightBorder
			// 
			this->pnlGameRightBorder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->pnlGameRightBorder->Location = System::Drawing::Point(690, 150);
			this->pnlGameRightBorder->Name = L"pnlGameRightBorder";
			this->pnlGameRightBorder->Size = System::Drawing::Size(10, 540);
			this->pnlGameRightBorder->TabIndex = 4;
			// 
			// GameAreaPnl
			// 
			this->GameAreaPnl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->GameAreaPnl->Location = System::Drawing::Point(10, 150);
			this->GameAreaPnl->Name = L"GameAreaPnl";
			this->GameAreaPnl->Size = System::Drawing::Size(681, 540);
			this->GameAreaPnl->TabIndex = 5;
			// 
			// bunifuGameFormElipse
			// 
			this->bunifuGameFormElipse->ElipseRadius = 25;
			this->bunifuGameFormElipse->TargetControl = this;
			// 
			// bunifuGameTopSidePnlDragControl
			// 
			this->bunifuGameTopSidePnlDragControl->Fixed = true;
			this->bunifuGameTopSidePnlDragControl->Horizontal = true;
			this->bunifuGameTopSidePnlDragControl->TargetControl = this->pnlTopSideGame;
			this->bunifuGameTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuGameTopSideLblDragControl
			// 
			this->bunifuGameTopSideLblDragControl->Fixed = true;
			this->bunifuGameTopSideLblDragControl->Horizontal = true;
			this->bunifuGameTopSideLblDragControl->TargetControl = this->lblTopSideGame;
			this->bunifuGameTopSideLblDragControl->Vertical = true;
			// 
			// bunifuGameFormDragControl
			// 
			this->bunifuGameFormDragControl->Fixed = true;
			this->bunifuGameFormDragControl->Horizontal = true;
			this->bunifuGameFormDragControl->TargetControl = this;
			this->bunifuGameFormDragControl->Vertical = true;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(700, 700);
			this->Controls->Add(this->GameAreaPnl);
			this->Controls->Add(this->pnlGameRightBorder);
			this->Controls->Add(this->pnlGameLeftBorder);
			this->Controls->Add(this->pnlGameUpperBorder);
			this->Controls->Add(this->pnlGameLowerBorder);
			this->Controls->Add(this->pnlTopSideGame);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->pnlTopSideGame->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
