#pragma once

namespace Snake {
	
	public ref class GameStats
	{
	public:
		int Score; //Очки
		int Balance; //Баланс монет
		int Expirience; // Опыт
		
		void Initialize(); //Метод инициализации
		void Refresh(); //Метод обновления статистики
		
		bool WasScoreChanged = false; //Проверка на изменение очков
		bool WasBalanceChanged = false; //Проверка на изменение монет
		bool WasExpChanged = false; //Проверка на изменение опыта
	};
}