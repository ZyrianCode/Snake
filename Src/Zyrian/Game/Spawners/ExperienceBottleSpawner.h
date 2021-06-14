#pragma once
#include "Src/Zyrian/Game/Items/ExperienceBottle.h"
namespace Snake {
	
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class ExperienceBottleSpawner : ExperienceBottle
	{
	public: bool isAbleToAdd;
	public: void SpawnerInitialize();
	public: void SpawnExpBottles();
	public: void Pause();
	public: void Continue();
	private: void GenerateExpBottles(System::Object^ sender, System::EventArgs^ e);
	private: Timer^ SpawnColdown = gcnew Timer();
		
	};
}
