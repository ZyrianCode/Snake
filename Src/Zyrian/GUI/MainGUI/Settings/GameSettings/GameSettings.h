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
	private: BunifuAnimatorNS::BunifuTransition^ bunifuTransition1;
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
			BunifuAnimatorNS::Animation^ animation1 = (gcnew BunifuAnimatorNS::Animation());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameSettings::typeid));
			this->bunifuTransition1 = (gcnew BunifuAnimatorNS::BunifuTransition(this->components));
			this->SuspendLayout();
			// 
			// bunifuTransition1
			// 
			this->bunifuTransition1->AnimationType = BunifuAnimatorNS::AnimationType::VertSlide;
			this->bunifuTransition1->Cursor = nullptr;
			animation1->AnimateOnlyDifferences = true;
			animation1->BlindCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.BlindCoeff")));
			animation1->LeafCoeff = 0;
			animation1->MaxTime = 1;
			animation1->MinTime = 0;
			animation1->MosaicCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicCoeff")));
			animation1->MosaicShift = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.MosaicShift")));
			animation1->MosaicSize = 0;
			animation1->Padding = System::Windows::Forms::Padding(0, 0, 0, 0);
			animation1->RotateCoeff = 0;
			animation1->RotateLimit = 0;
			animation1->ScaleCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.ScaleCoeff")));
			animation1->SlideCoeff = (cli::safe_cast<System::Drawing::PointF>(resources->GetObject(L"animation1.SlideCoeff")));
			animation1->TimeCoeff = 0;
			animation1->TransparencyCoeff = 0;
			this->bunifuTransition1->DefaultAnimation = animation1;
			// 
			// GameSettings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->bunifuTransition1->SetDecoration(this, BunifuAnimatorNS::DecorationType::None);
			this->Name = L"GameSettings";
			this->Text = L"GameSettings";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
