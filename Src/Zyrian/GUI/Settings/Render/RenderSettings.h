#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ RenderSettings
	/// </summary>
	public ref class RenderSettings : public System::Windows::Forms::Form
	{
	public:
		RenderSettings(void)
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
		~RenderSettings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTopSideRS;
	protected:

	private: System::Windows::Forms::Label^ lblRenderSettingsMenu;
	private: System::Windows::Forms::Button^ btnRenderSettingsBack;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuRenderSettingsTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuRSFormDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuRSTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuRenderSettingsFormElipse;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RenderSettings::typeid));
			this->pnlTopSideRS = (gcnew System::Windows::Forms::Panel());
			this->btnRenderSettingsBack = (gcnew System::Windows::Forms::Button());
			this->lblRenderSettingsMenu = (gcnew System::Windows::Forms::Label());
			this->bunifuRenderSettingsTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuRSFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuRSTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuRenderSettingsFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->pnlTopSideRS->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTopSideRS
			// 
			this->pnlTopSideRS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlTopSideRS->Controls->Add(this->btnRenderSettingsBack);
			this->pnlTopSideRS->Controls->Add(this->lblRenderSettingsMenu);
			this->pnlTopSideRS->Location = System::Drawing::Point(0, 0);
			this->pnlTopSideRS->Name = L"pnlTopSideRS";
			this->pnlTopSideRS->Size = System::Drawing::Size(334, 50);
			this->pnlTopSideRS->TabIndex = 0;
			// 
			// btnRenderSettingsBack
			// 
			this->btnRenderSettingsBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRenderSettingsBack.BackgroundImage")));
			this->btnRenderSettingsBack->FlatAppearance->BorderSize = 0;
			this->btnRenderSettingsBack->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnRenderSettingsBack->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnRenderSettingsBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRenderSettingsBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnRenderSettingsBack.Image")));
			this->btnRenderSettingsBack->Location = System::Drawing::Point(13, 9);
			this->btnRenderSettingsBack->Name = L"btnRenderSettingsBack";
			this->btnRenderSettingsBack->Size = System::Drawing::Size(32, 32);
			this->btnRenderSettingsBack->TabIndex = 1;
			this->btnRenderSettingsBack->UseVisualStyleBackColor = true;
			this->btnRenderSettingsBack->Click += gcnew System::EventHandler(this, &RenderSettings::btnRenderSettingsBack_Click);
			// 
			// lblRenderSettingsMenu
			// 
			this->lblRenderSettingsMenu->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lblRenderSettingsMenu->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblRenderSettingsMenu->Location = System::Drawing::Point(72, 11);
			this->lblRenderSettingsMenu->Name = L"lblRenderSettingsMenu";
			this->lblRenderSettingsMenu->Size = System::Drawing::Size(190, 27);
			this->lblRenderSettingsMenu->TabIndex = 0;
			this->lblRenderSettingsMenu->Text = L"Render Settings";
			this->lblRenderSettingsMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuRenderSettingsTopSidePnlDragControl
			// 
			this->bunifuRenderSettingsTopSidePnlDragControl->Fixed = true;
			this->bunifuRenderSettingsTopSidePnlDragControl->Horizontal = true;
			this->bunifuRenderSettingsTopSidePnlDragControl->TargetControl = this->pnlTopSideRS;
			this->bunifuRenderSettingsTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuRSFormDragControl
			// 
			this->bunifuRSFormDragControl->Fixed = true;
			this->bunifuRSFormDragControl->Horizontal = true;
			this->bunifuRSFormDragControl->TargetControl = this;
			this->bunifuRSFormDragControl->Vertical = true;
			// 
			// bunifuRSTopSideLblDragControl
			// 
			this->bunifuRSTopSideLblDragControl->Fixed = true;
			this->bunifuRSTopSideLblDragControl->Horizontal = true;
			this->bunifuRSTopSideLblDragControl->TargetControl = this->lblRenderSettingsMenu;
			this->bunifuRSTopSideLblDragControl->Vertical = true;
			// 
			// bunifuRenderSettingsFormElipse
			// 
			this->bunifuRenderSettingsFormElipse->ElipseRadius = 25;
			this->bunifuRenderSettingsFormElipse->TargetControl = this;
			// 
			// RenderSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(335, 261);
			this->Controls->Add(this->pnlTopSideRS);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"RenderSettings";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RenderSettings";
			this->pnlTopSideRS->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnRenderSettingsBack_Click(System::Object^ sender, System::EventArgs^ e);
};
}
