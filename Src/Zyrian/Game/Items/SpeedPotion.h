#pragma once
#include "Src/Zyrian/Game/Additional/Vector2.h"

namespace Snake {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Snake;
	
	public ref class SpeedPotion
	{
	public:
		PictureBox^ SpeedPotionBottle = gcnew PictureBox();
		Vector2^ SpeedPotionPos = gcnew Vector2();
		Timer^ TimeAlive = gcnew Timer();
		Timer^ Duration = gcnew Timer();
		
		bool isAbleToRemove;
		bool isAbleToRemoveSpeedEffect;
		void Initialize();
		void Deconstruct();
		void StartPotionEffectDuration();
		void OnTimeAliveEnd(System::Object^ sender, System::EventArgs^ e);
		void OnDurationEnd(System::Object^ sender, System::EventArgs^ e);
		void GenerateSpeedPotion();
		void CheckCollisionWithSnake();
		float GetSpeedAmount();
	
	private:
		float _speedAmount = 0.40f;
	};

}