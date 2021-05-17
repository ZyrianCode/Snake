#include "About.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"

System::Void Snake::About::btnBackAbout_Click(System::Object^ sender, System::EventArgs^ e)
{
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	this->Hide();
	guiMainMenu->Show();
}
