#include "InGameGUI.h"
#include "Src/Zyrian/Game/Game.h"
#include "Src/Zyrian/GUI/MainGUI/About/About.h"
#include "Src/Zyrian/GUI/MainGUI/Author/Author.h"
#include "Src/Zyrian/GUI/MainGUI/MainMenu/GUIMainMenu.h"
#include "Src/Zyrian/GUI/MainGUI/Settings/Settings.h"
//#include "../MainGUI/Settings/Settings.h"
//#include "../MainGUI/MainMenu/GUIMainMenu.h"
//#include "../MainGUI/About/About.h"
//#include "../MainGUI/Author/Author.h"

System::Void Snake::InGameGUI::btnMenuIGBackToGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->Close();
	this->isInGameGUIVisible = false;
}

System::Void Snake::InGameGUI::btnMenuIGNewGame_Click(System::Object^ sender, System::EventArgs^ e)
{
	NeedToRenewGame = true;
	this->isInGameGUIVisible = false;
	this->Close();
}

System::Void Snake::InGameGUI::btnMenuIGSettings_Click(System::Object^ sender, System::EventArgs^ e)
{
	Settings^ settings = gcnew Settings();
	settings->Show();
}

System::Void Snake::InGameGUI::btnMenuIGBackToMenu_Click(System::Object^ sender, System::EventArgs^ e)
{
	GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
	guiMainMenu->Show();
	this->WasBackToMenuActive = true;
	this->Close();
	this->isInGameGUIVisible = false;
}

System::Void Snake::InGameGUI::btnMenuIGAbout_Click(System::Object^ sender, System::EventArgs^ e)
{
	About^ about = gcnew About();
	about->Show();
}

System::Void Snake::InGameGUI::btnMenuIGAuthor_Click(System::Object^ sender, System::EventArgs^ e)
{
	Author^ author = gcnew Author();
	author->Show();
}



System::Void Snake::InGameGUI::InGameGUI_Shown(System::Object^ sender, System::EventArgs^ e)
{
	this->isInGameGUIVisible = true;
}

System::Void Snake::InGameGUI::InGameGUIOpen()
{
	double OnOpenOpacity = 0.97;
	this->Opacity = OnOpenOpacity;
	this->BringToFront();
}

System::Void Snake::InGameGUI::InGameGUIClose()
{
	double OnCloseOpacity = 0.00;
	this->Opacity = OnCloseOpacity;
}

System::Void Snake::InGameGUI::InGameGUI_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	if (e->KeyChar.ToString() == "Esc")
	{
		this->Hide();
		this->isInGameGUIVisible = false;
	}
}

System::Void Snake::InGameGUI::InGameGUI_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "Escape")
	{
		this->Close();
		this->isInGameGUIVisible = false;
	}
}



