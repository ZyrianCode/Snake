#include "RenderSettings.h"
#include "Src/Zyrian/GUI/Settings/Settings.h"

System::Void Snake::RenderSettings::btnRenderSettingsBack_Click(System::Object^ sender, System::EventArgs^ e)
{
	Settings^ settings = gcnew Settings();
	this->Close();
	settings->Show();
}
