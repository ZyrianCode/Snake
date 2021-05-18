#include "InGameGUI.h"

#include "Src/Zyrian/Game/Game.h"
#include "Src/Zyrian/GUI/About/About.h"
#include "Src/Zyrian/GUI/Author/Author.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"
#include "Src/Zyrian/GUI/Settings/Settings.h"

System::Void Snake::InGameGUI::btnMenuIGBackToGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
}

System::Void Snake::InGameGUI::btnMenuIGNewGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::InGameGUI::btnMenuIGSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Settings^ settings = gcnew Settings();
	this->Hide();
	settings->ShowDialog();
}

System::Void Snake::InGameGUI::btnMenuIGBackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	
	this->Close();
	Game^ game = gcnew Game();
	guiMainMenu->Show();
	game->Activate();
	game->Close();
}

System::Void Snake::InGameGUI::btnMenuIGAbout_Click(System::Object^ sender, System::EventArgs^ e)
{
	About^ about = gcnew About();
	this->Hide();
	about->ShowDialog();
}

System::Void Snake::InGameGUI::btnMenuIGAuthor_Click(System::Object^ sender, System::EventArgs^ e)
{
	Author^ author = gcnew Author();
	this->Hide();
	author->ShowDialog();
}

System::Void Snake::InGameGUI::InGameGUI_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "Escape")
	{
		this->Close();
	}
}
