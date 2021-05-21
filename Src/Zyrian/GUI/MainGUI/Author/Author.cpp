#include "Author.h"
//#include "../../../Game/Game.h"
//#include "../MainMenu/GUIMainMenu.h"
//#include "../../InGameGUI/InGameGUI.h"
#include "Src/Zyrian/GUI/MainGUI/MainMenu/GUIMainMenu.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"
#include "Src/Zyrian/Game/Game.h"

System::Void Snake::Author::btnBackAuthor_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ game = gcnew Game();
	if (game->IsRunning)
	{
		this->Close();
	}
	else
	{
		GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
		this->Close();
		guiMainMenu->Show();
	}
}

System::Void Snake::Author::Author_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	InGameGUI^ inGameGUI = gcnew InGameGUI();
	if (inGameGUI->isInGameGUIVisible && e->KeyCode.ToString() == "Escape")
	{
		this->Close();
	}
	else if (!inGameGUI->isInGameGUIVisible && e->KeyCode.ToString() == "Escape")
	{
		GUIMainMenu^ guiMainMenu = gcnew GUIMainMenu();
		guiMainMenu->Show();
		this->Close();
	}
}
