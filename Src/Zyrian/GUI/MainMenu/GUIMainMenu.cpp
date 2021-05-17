#include "GUIMainMenu.h"
#include "Src/Zyrian/GUI/Settings/Settings.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Snake::GUIMainMenu guiMainMenu;
	Application::Run(% guiMainMenu);

}

System::Void Snake::GUIMainMenu::btnMainMenuNewGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::GUIMainMenu::btnMainMenuSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Settings^ settings = gcnew Settings();
	this->Hide();
	settings->Show();
}

System::Void Snake::GUIMainMenu::btnMainMenuAbout_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::GUIMainMenu::btnMainMenuAuthor_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::GUIMainMenu::btnMainMenuQuit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
