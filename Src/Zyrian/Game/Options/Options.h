#pragma once
#include "Globals/Globals.h"
namespace Snake {
	
	using namespace System;
	
	[SerializableAttribute]
	public ref class Options
	{
		public: Globals^ globals = gcnew Globals();
	};
}
