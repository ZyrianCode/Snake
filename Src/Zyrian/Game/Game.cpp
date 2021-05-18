#include "Game.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"

System::Void Snake::Game::Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (e->KeyCode.ToString() == "Escape")
	{
		//play = false
		InGameGUI^ inGameGUI = gcnew InGameGUI();
		inGameGUI->ShowDialog();
		inGameGUI->Activate();
	}
}
