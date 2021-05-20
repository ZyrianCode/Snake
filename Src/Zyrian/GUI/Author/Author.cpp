#include "Author.h"
#include "Src/Zyrian/GUI/MainMenu/GUIMainMenu.h"
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
