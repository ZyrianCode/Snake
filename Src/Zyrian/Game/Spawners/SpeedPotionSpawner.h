#pragma once
#include "Src/Zyrian/Game/Items/SpeedPotion.h"

namespace Snake {
	
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class SpeedPotionSpawner : SpeedPotion
	{
	public: bool isAbleToAdd;
	public: void SpawnerInitialize();
	public: void SpawnSpeedPotions();
	public: void Pause();
	public: void Continue();
	private: void GenerateSpeedPotions(System::Object^ sender, System::EventArgs^ e);
	private: Timer^ SpawnColdown = gcnew Timer();
	};
}
