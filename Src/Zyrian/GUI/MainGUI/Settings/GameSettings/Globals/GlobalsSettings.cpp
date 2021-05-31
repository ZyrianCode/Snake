#include "GlobalsSettings.h"

void Snake::GlobalsSettings::OnStartInnerPanelsState()
{
	pnlGlobalSettingsLogo->Visible = false;
    pnlGlobalSettingsDifficulty->Visible = false;
}

void Snake::GlobalsSettings::HideGlobalSettingsInnerPanel()
{
	pnlGlobalSettingsLogo->Visible = false;
    pnlGlobalSettingsDifficulty->Visible = false;
}

void Snake::GlobalsSettings::ShowGlobalSettingsInnerPanel(String^ nameOfPanel)
{
	if (nameOfPanel->Equals("Logo"))
	{
		pnlGlobalSettingsLogo->Visible = true;
		pnlGlobalSettingsDifficulty->Visible = false;
	}
	else if (nameOfPanel->Equals("Difficulty"))
	{
		lblGlobalSettingsLogo->Visible = false;
		pnlGlobalSettingsDifficulty->Visible = true;
	}
	else if (nameOfPanel->Equals("Other"))
	{
		pnlGlobalSettingsLogo->Visible = false;
		pnlGlobalSettingsDifficulty->Visible = false;
	}
	else
	{	
		pnlGlobalSettingsLogo->Visible = true;
		pnlGlobalSettingsDifficulty->Visible = false;
	}
}

void Snake::GlobalsSettings::SetGameSpeed(int gameSpeed)
{
	trackBarGameSpeed->Value = gameSpeed;
}

int Snake::GlobalsSettings::GetGameSpeed()
{
	return trackBarGameSpeed->Value;
}

System::Void Snake::GlobalsSettings::pnlGlobalSettingsDifficulty_ParentChanged(System::Object^ sender, System::EventArgs^ e)
{
	/*Options^ options = gcnew Options();
	OptionsSaveSystem^ saveSystem = gcnew OptionsSaveSystem();
	saveSystem->Load();
	trackBarGameSpeed->Value = options->globals->difficulty->GameSpeed;*/
	trackBarGameSpeed->Update();
}


System::Void Snake::GlobalsSettings::btnSaveGameSpeed_Click(System::Object^ sender, System::EventArgs^ e)
{
	Options^ options = gcnew Options();
	OptionsSaveSystem^ saveSystem = gcnew OptionsSaveSystem();
	options->globals->difficulty->GameSpeed = trackBarGameSpeed->Value;
	saveSystem->Save(options);
}


