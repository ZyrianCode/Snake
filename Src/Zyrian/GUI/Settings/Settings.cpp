#include "Settings.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"
#include "Render/RenderSettings.h"

#include "Src/Zyrian/Game/Game.h"

System::Void Snake::Settings::btnSettingsConfig_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Settings::btnRenderSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	RenderSettings^ renderSettings = gcnew RenderSettings();
	this->Close();
	renderSettings->Show();
}

System::Void Snake::Settings::btnGameSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Settings::btnMenuSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Settings::btnDoneSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ game = gcnew Game();
	if (game->Visible)
	{
		this->Close();
		InGameGUI^ inGameGUI = gcnew InGameGUI();
		inGameGUI->ShowDialog();
	}
	else
	{
		GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
		this->Close();
		guiMainMenu->ShowDialog();
	}
}

System::Void Snake::Settings::btnBackSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ game = gcnew Game();
	if (game->Visible)
	{
		this->Close();
		InGameGUI^ inGameGUI = gcnew InGameGUI();
		inGameGUI->ShowDialog();
	}
	else
	{
		GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
		this->Close();
		guiMainMenu->ShowDialog();
	}
}
