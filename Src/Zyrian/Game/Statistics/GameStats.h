#pragma once

namespace Snake {
	
	public ref class GameStats
	{
	public:
		int Score;
		int Balance;
		int Expirience;
		void Initialize();
		void Refresh();
		bool WasScoreChanged = false;
		bool WasBalanceChanged = false;
		bool WasExpChanged = false;
	private:

	};
}