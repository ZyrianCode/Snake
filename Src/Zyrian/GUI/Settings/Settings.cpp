#include "Settings.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"
#include "Render/RenderSettings.h"

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
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	this->Close();
	guiMainMenu->Show();
}

System::Void Snake::Settings::btnBackSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	this->Close();
	guiMainMenu->Show();
}
