#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Author
	/// </summary>
	public ref class Author : public System::Windows::Forms::Form
	{
	public:
		Author(void)
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
		~Author()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTopSideAuthor;
	protected:
	private: System::Windows::Forms::Label^ lblTopSideAuthor;
	private: System::Windows::Forms::Button^ btnBackAuthor;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAuthorTopSidePnlDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAuthorTopSideLblDragControl;
	private: Bunifu::Framework::UI::BunifuDragControl^ bunifuAuthorFormDragControl;
	private: Bunifu::Framework::UI::BunifuElipse^ bunifuAuthorElipse;
	private: System::Windows::Forms::Label^ lblAuthor;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Author::typeid));
			this->pnlTopSideAuthor = (gcnew System::Windows::Forms::Panel());
			this->btnBackAuthor = (gcnew System::Windows::Forms::Button());
			this->lblTopSideAuthor = (gcnew System::Windows::Forms::Label());
			this->bunifuAuthorTopSidePnlDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuAuthorTopSideLblDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuAuthorFormDragControl = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->bunifuAuthorElipse = (gcnew Bunifu::Framework::UI::BunifuElipse(this->components));
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->pnlTopSideAuthor->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTopSideAuthor
			// 
			this->pnlTopSideAuthor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->pnlTopSideAuthor->Controls->Add(this->btnBackAuthor);
			this->pnlTopSideAuthor->Controls->Add(this->lblTopSideAuthor);
			this->pnlTopSideAuthor->Location = System::Drawing::Point(0, 0);
			this->pnlTopSideAuthor->Margin = System::Windows::Forms::Padding(4);
			this->pnlTopSideAuthor->Name = L"pnlTopSideAuthor";
			this->pnlTopSideAuthor->Size = System::Drawing::Size(500, 53);
			this->pnlTopSideAuthor->TabIndex = 0;
			// 
			// btnBackAuthor
			// 
			this->btnBackAuthor->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackAuthor.BackgroundImage")));
			this->btnBackAuthor->FlatAppearance->BorderSize = 0;
			this->btnBackAuthor->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackAuthor->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnBackAuthor->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackAuthor->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackAuthor.Image")));
			this->btnBackAuthor->Location = System::Drawing::Point(13, 10);
			this->btnBackAuthor->Name = L"btnBackAuthor";
			this->btnBackAuthor->Size = System::Drawing::Size(32, 32);
			this->btnBackAuthor->TabIndex = 1;
			this->btnBackAuthor->UseVisualStyleBackColor = true;
			this->btnBackAuthor->Click += gcnew System::EventHandler(this, &Author::btnBackAuthor_Click);
			// 
			// lblTopSideAuthor
			// 
			this->lblTopSideAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTopSideAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblTopSideAuthor->Location = System::Drawing::Point(204, 12);
			this->lblTopSideAuthor->Name = L"lblTopSideAuthor";
			this->lblTopSideAuthor->Size = System::Drawing::Size(86, 27);
			this->lblTopSideAuthor->TabIndex = 0;
			this->lblTopSideAuthor->Text = L"Author";
			this->lblTopSideAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuAuthorTopSidePnlDragControl
			// 
			this->bunifuAuthorTopSidePnlDragControl->Fixed = true;
			this->bunifuAuthorTopSidePnlDragControl->Horizontal = true;
			this->bunifuAuthorTopSidePnlDragControl->TargetControl = this->pnlTopSideAuthor;
			this->bunifuAuthorTopSidePnlDragControl->Vertical = true;
			// 
			// bunifuAuthorTopSideLblDragControl
			// 
			this->bunifuAuthorTopSideLblDragControl->Fixed = true;
			this->bunifuAuthorTopSideLblDragControl->Horizontal = true;
			this->bunifuAuthorTopSideLblDragControl->TargetControl = this->lblTopSideAuthor;
			this->bunifuAuthorTopSideLblDragControl->Vertical = true;
			// 
			// bunifuAuthorFormDragControl
			// 
			this->bunifuAuthorFormDragControl->Fixed = true;
			this->bunifuAuthorFormDragControl->Horizontal = true;
			this->bunifuAuthorFormDragControl->TargetControl = this;
			this->bunifuAuthorFormDragControl->Vertical = true;
			// 
			// bunifuAuthorElipse
			// 
			this->bunifuAuthorElipse->ElipseRadius = 25;
			this->bunifuAuthorElipse->TargetControl = this;
			// 
			// lblAuthor
			// 
			this->lblAuthor->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAuthor->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->lblAuthor->Location = System::Drawing::Point(56, 124);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(372, 32);
			this->lblAuthor->TabIndex = 1;
			this->lblAuthor->Text = L"Application game was maded by ZyrianCode";
			this->lblAuthor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Author
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(65)));
			this->ClientSize = System::Drawing::Size(500, 260);
			this->Controls->Add(this->lblAuthor);
			this->Controls->Add(this->pnlTopSideAuthor);
			this->Font = (gcnew System::Drawing::Font(L"JetBrains Mono NL", 8.249999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Author";
			this->Opacity = 0.97;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Author";
			this->pnlTopSideAuthor->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBackAuthor_Click(System::Object^ sender, System::EventArgs^ e);
	
};
}
