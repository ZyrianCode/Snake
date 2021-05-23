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
