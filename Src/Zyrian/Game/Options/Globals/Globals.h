#pragma once
#include <cliext/list>
#include "Difficulty/Difficulty.h"

namespace Snake {
	
	using namespace System::Collections::Generic;
	using namespace cliext;
	using namespace System;
	
	[SerializableAttribute]
	public ref class Globals
	{
		//public: List<Difficulty^>^ difficulties = gcnew List<Difficulty^>();
		public: Difficulty^ difficulty = gcnew Difficulty();
	};
}
