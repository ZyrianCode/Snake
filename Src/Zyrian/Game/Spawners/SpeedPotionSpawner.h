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
		public: bool isAbleToAdd; //Позволяет определять возможно ли добавить объект на игровое поле

				//Метод инициализирующий свойства спавнера (задержку спавна)
		public: void SpawnerInitialize();

			  //Запускает задержку спавна, после чего начинается генерация бутыльков зелья скорости
		public: void SpawnSpeedPotions();
		
			  //Замораживает задержку и останавливает течение времени жизни объекта, который генерируется спавнером
		public: void Pause();
		
			  //Возобновляет течение времени жизни объекта и запускает задержку спавна, после чего начинается генерация бутыльков зелья скорости
		public: void Continue();
		
			  //Генерирует бутыльки опыта в соответствии с математической формулой
		private: void GenerateSpeedPotions(System::Object^ sender, System::EventArgs^ e);
		
			   //Задержка (Перезарядка спавнера)
		private: Timer^ SpawnColdown = gcnew Timer();
	};
}
