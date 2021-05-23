#include "GameSettings.h"
#include "Visuals/VisualsSettings.h"
#include "Globals/GlobalsSettings.h"
#include <msclr\marshal_cppstd.h>

using namespace msclr::interop;

#pragma region DropDownMenuLogic

	void Snake::GameSettings::OnStartDesign()
	{
	    pnlGameGlobalsBtnDropMenu->Visible = false;
	    pnlVisualsBtnDropDown->Visible = false;
	}

	void Snake::GameSettings::HideDropDownMenu()
	{
		if (pnlGameGlobalsBtnDropMenu->Visible)
		{
			pnlGameGlobalsBtnDropMenu->Visible = false;
		}
		if (pnlVisualsBtnDropDown->Visible)
		{
			pnlVisualsBtnDropDown->Visible = false;
		}
	}

	void Snake::GameSettings::ShowDropDownMenu(Panel^ DropDownMenu)
	{
		if (!DropDownMenu->Visible)
		{
			HideDropDownMenu();
			DropDownMenu->Visible = true;
		}
		else
		{
			DropDownMenu->Visible = false;
		}
	}
#pragma endregion

#pragma region GlobalSettings

	System::Void Snake::GameSettings::btnGameGlobalSettings_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ShowDropDownMenu(pnlGameGlobalsBtnDropMenu);
		GlobalsSettings^ globalSettings = gcnew GlobalsSettings();
		OpenChildForm(globalSettings);
		globalSettings->ShowGlobalSettingsInnerPanel("Logo");
	}

	System::Void Snake::GameSettings::btnDifficulty_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HideDropDownMenu();
		GlobalsSettings^ globalSettings = gcnew GlobalsSettings();
		OpenChildForm(globalSettings);
		globalSettings->ShowGlobalSettingsInnerPanel("Difficulty");
	}

	System::Void Snake::GameSettings::btnGlobalsOther_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HideDropDownMenu();
		GlobalsSettings^ globalSettings = gcnew GlobalsSettings();
		OpenChildForm(globalSettings);
		globalSettings->ShowGlobalSettingsInnerPanel("Other");
	}
#pragma endregion

#pragma region VisualSettings

	System::Void Snake::GameSettings::btnVisuals_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ShowDropDownMenu(pnlVisualsBtnDropDown);
		VisualsSettings^ visualsSettings = gcnew VisualsSettings();
		OpenChildForm(visualsSettings);
		visualsSettings->ShowInnerPanel("Logo");
		
	}

	System::Void Snake::GameSettings::btnColors_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HideDropDownMenu();
		//String^ str = marshal_as<String^>("Colors");
		VisualsSettings^ visualsSettings = gcnew VisualsSettings();
		OpenChildForm(visualsSettings);
		visualsSettings->ShowInnerPanel("Colors");
	}

	System::Void Snake::GameSettings::btnVisualsOther_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HideDropDownMenu();
		VisualsSettings^ visualsSettings = gcnew VisualsSettings();
		OpenChildForm(visualsSettings);
		visualsSettings->ShowInnerPanel("Other");
	}
#pragma endregion

#pragma region ControlSettings

	System::Void Snake::GameSettings::btnControls_Click(System::Object^ sender, System::EventArgs^ e)
	{
		HideDropDownMenu();
	}
#pragma endregion

	void Snake::GameSettings::OpenChildForm(Form^ childForm)
	{
		if (activeForm != nullptr)
		{
			activeForm->Close();
		}
		activeForm = childForm;
		childForm->TopLevel = false;
		childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		childForm->Dock = DockStyle::Fill;
		pnlChildForm->Controls->Add(childForm);
		pnlChildForm->Tag = childForm;
		childForm->Show();
	}

	System::Void Snake::GameSettings::btnBackSettings_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	System::Void Snake::GameSettings::GameSettings_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode.ToString() == "Escape")
		{
			this->Close();
		}
	}


