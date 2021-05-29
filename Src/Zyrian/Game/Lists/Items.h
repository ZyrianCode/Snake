#pragma once
#include "Src/Zyrian/Game/Items/CommonFruit.h"
#include "Src/Zyrian/Game/Items/CommonCoin.h"

namespace Snake {
	
	public ref class Items
	{
		public: CommonFruit^ commonFruit = gcnew CommonFruit();
		public: CommonCoin^ commonCoin = gcnew CommonCoin();
	};
}