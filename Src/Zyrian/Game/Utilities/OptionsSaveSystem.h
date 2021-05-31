#pragma once
#include "Src/Zyrian/Game/Options/Options.h"
#include <stdexcept>

namespace Snake {
	
	using namespace System::Runtime::Serialization::Formatters::Binary;
	using namespace System::Runtime::Serialization::Formatters;
	using namespace System::Runtime::Serialization;
	using namespace System::Windows::Forms;
	using namespace System::IO;
	using namespace System;
	
	public ref class OptionsSaveSystem
	{
		public: OptionsSaveSystem();
	
		private: initonly String^ _filePath;
		private: Options^ options;
	
		public: void SetDefaultOptions();
		public: void Save(Options^ options);
		public: Options^ Load();
	};
}
