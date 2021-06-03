#pragma once
#include "Src/Zyrian/Game/Lists/Items.h"
namespace Snake {
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class CommonCoinSpawner : Items
	{
	public: bool isAbleToAdd;
	public: void Initialize();
	public: void SpawnCoins();
	public: void Pause();
	public: void Continue();
	private: void GenerateCoins(System::Object^ sender, System::EventArgs^ e);
	private: Timer^ SpawnColdown = gcnew Timer();
		
	};
}
