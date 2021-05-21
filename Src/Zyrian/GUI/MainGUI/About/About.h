#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTopSideAbout;
	private: System::Windows::Forms::Label^ lblTopSideAbout;
	private: System::Windows::Forms::Button^ btnBackAbout;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuAboutFormElipse;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAboutTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAboutFormDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAboutTopSideLblDragControl;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->pnlTopSideAbout = (gcnew System::Windows::Forms::Panel());
			this->btnBackAbout = (gcnew System::Windows::Forms::Button());
			this->lblTopSideAbout = (gcnew System::Windows::Forms::Label());
			this->bunifuAboutFormElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->bunifuAboutTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuAboutFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuAboutTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->pnlTopSideAbout->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTopSideAbout
			// 
			this->pnlTopSideAbout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlTopSideAbout->Controls->Add(this->btnBackAbout);
			this->pnlTopSideAbout->Controls->Add(this->lblTopSideAbout);
			this->pnlTopSideAbout->Location = System::Drawing::Point(0, 0);
			this->pnlTopSideAbout->Name = L"pnlTopSideAbout";
			this->pnlTopSideAbout->Size = System::Drawing::Size(460, 50);
			this->pnlTopSideAbout->TabIndex = 0;
			// 
			// btnBackAbout
			// 
			this->btnBackAbout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackAbout.BackgroundImage")));
			this->btnBackAbout->FlatAppearance->BorderSize = 0;
			this->btnBackAbout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackAbout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackAbout->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackAbout.Image")));
			this->btnBackAbout->Location = System::Drawing::Point(13, 9);
			this->btnBackAbout->Name = L"btnBackAbout";
			this->btnBackAbout->Size = System::Drawing::Size(32, 32);
			this->btnBackAbout->TabIndex = 1;
			this->btnBackAbout->UseVisualStyleBackColor = true;
			this->btnBackAbout->Click += gcnew System::EventHandler(this, &About::btnBackAbout_Click);
			// 
			// lblTopSideAbout
			// 
			this->lblTopSideAbout->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTopSideAbout->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblTopSideAbout->Location = System::Drawing::Point(166, 13);
			this->lblTopSideAbout->Name = L"lblTopSideAbout";
			this->lblTopSideAbout->Size = System::Drawing::Size(124, 23);
			this->lblTopSideAbout->TabIndex = 0;
			this->lblTopSideAbout->Text = L"About Game";
			this->lblTopSideAbout->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuAboutFormElipse
			// 
			this->bunifuAboutFormElipse->ElipseRadius = 25;
			this->bunifuAboutFormElipse->TargetControl = this;
			// 
			// bunifuAboutTopSidePnlDragControl
			// 
			this->bunifuAboutTopSidePnlDragControl->Fixed = true;
			this->bunifuAboutTopSidePnlDragControl->Horizontal = true;
			this->bunifuAboutTopSidePnlDragControl->TargetControl = this->pnlTopSideAbout;
			this->bunifuAboutTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuAboutFormDragControl
			// 
			this->bunifuAboutFormDragControl->Fixed = true;
			this->bunifuAboutFormDragControl->Horizontal = true;
			this->bunifuAboutFormDragControl->TargetControl = this;
			this->bunifuAboutFormDragControl->Vertical = true;
			// 
			// bunifuAboutTopSideLblDragControl
			// 
			this->bunifuAboutTopSideLblDragControl->Fixed = true;
			this->bunifuAboutTopSideLblDragControl->Horizontal = true;
			this->bunifuAboutTopSideLblDragControl->TargetControl = this->lblTopSideAbout;
			this->bunifuAboutTopSideLblDragControl->Vertical = true;
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(460, 261);
			this->Controls->Add(this->pnlTopSideAbout);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->Name = L"About";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"About";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &About::About_KeyDown);
			this->pnlTopSideAbout->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBackAbout_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void About_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
};
}
