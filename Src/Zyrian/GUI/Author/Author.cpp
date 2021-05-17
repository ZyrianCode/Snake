#include "Author.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"

System::Void Snake::Author::btnBackAuthor_Click(System::Object^ sender, System::EventArgs^ e)
{
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	this->Close();
	guiMainMenu->Show();
}
