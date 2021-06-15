#pragma once
#include "Src/Zyrian/Game/Items/CommonCoin.h"
namespace Snake {
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System;

	using namespace System::ComponentModel;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class CommonCoinSpawner : CommonCoin
	{
	public: bool isAbleToAdd; //Позволяет определять возможно ли добавить объект на игровое поле
	
	//Метод инициализирующий свойства спавнера (задержку спавна)
	public: void SpawnerInitialize();

	//Запускает задержку спавна, после чего начинается генерация монеты
	public: void SpawnCoins();
		
	//Замораживает задержку и останавливает течение времени жизни объекта, который генерируется спавнером
	public: void Pause();

	//Возобновляет течение времени жизни объекта и запускает задержку спавна, после чего начинается генерация монет
	public: void Continue();

	//Генерирует монеты в соответствии с математической формулой
	private: void GenerateCoins(System::Object^ sender, System::EventArgs^ e);

	//Задержка (Перезарядка спавнера)
	private: Timer^ SpawnColdown = gcnew Timer();
		
	};
}
