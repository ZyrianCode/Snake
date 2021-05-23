#include "VisualsSettings.h"
#include <string>
#include <list>


using namespace std;

void Snake::VisualsSettings::OnStartInnerPanelState()
{
    pnlVisualSettingsLogo->Visible = false;
	pnlColors->Visible = false;
	pnlVSOther->Visible = false;
}

void Snake::VisualsSettings::HideInnerPanel()
{
	pnlVisualSettingsLogo->Visible = false;
	pnlColors->Visible = false;
	pnlVSOther->Visible = false;
}

void Snake::VisualsSettings::ShowInnerPanel(String^ nameOfPanel)
{
	if (nameOfPanel->Equals("Logo"))
	{
		pnlVisualSettingsLogo->Visible = true;
		pnlColors->Visible = false;
		pnlVSOther->Visible = false;
	}
	else if (nameOfPanel->Equals("Colors"))
	{
		pnlVisualSettingsLogo->Visible = false;
		pnlColors->Visible = true;
		pnlVSOther->Visible = false;
	}
	else if (nameOfPanel->Equals("Other"))
	{
		pnlVisualSettingsLogo->Visible = false;
		pnlColors->Visible = false;
		pnlVSOther->Visible = true;
	}
	else
	{
		pnlVisualSettingsLogo->Visible = true;
		pnlColors->Visible = false;
		pnlVSOther->Visible = false;
		
	}	
}
