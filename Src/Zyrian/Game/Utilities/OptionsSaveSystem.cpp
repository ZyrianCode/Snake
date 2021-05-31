#include "OptionsSaveSystem.h"

Snake::OptionsSaveSystem::OptionsSaveSystem()
{
	_filePath = Application::LocalUserAppDataPath + "/Options/Globals.json";	
}

void Snake::OptionsSaveSystem::SetDefaultOptions()
{
	options = gcnew Options();
	Difficulty^ difficilty = gcnew Difficulty();
	difficilty->GameSpeed = 1;

	FileStream^ file;
	try
	{
		file = gcnew FileStream("Globals.dat", FileMode::OpenOrCreate, FileAccess::ReadWrite);
		BinaryFormatter^ formatter = gcnew BinaryFormatter();
		formatter->Serialize(file, difficilty);
	}
	catch (FileNotFoundException^ fileNotFound)
	{
		throw fileNotFound;
	}
}

void Snake::OptionsSaveSystem::Save(Options^ options)
{
	FileStream^ file;
	try
	{
		file = gcnew FileStream("Globals.dat", FileMode::OpenOrCreate, FileAccess::ReadWrite);
		BinaryFormatter^ formatter = gcnew BinaryFormatter();
		formatter->Serialize(file, options);
	}
	catch (FileNotFoundException^ fileNotFound)
	{
		throw fileNotFound;
		SetDefaultOptions();
	}
	__finally
	{
		if (file != nullptr) { file->Close(); }
	}
}

Snake::Options^ Snake::OptionsSaveSystem::Load()
{
	Options^ options = gcnew Options();
	FileStream^ file;
	try
	{
		file = gcnew FileStream("Globals.dat", FileMode::OpenOrCreate, FileAccess::ReadWrite);
		BinaryFormatter^ formatter = gcnew BinaryFormatter();
		options = static_cast<Options^>(formatter->Deserialize(file));
	}
	catch (FileNotFoundException^ fileNotFound)
	{
		throw fileNotFound;
	}
	catch(Exception^ ex)
	{
		//throw ex;
		file->Close();
		SetDefaultOptions();
	}
	__finally
	{
		if (file != nullptr) { file->Close(); }
		//SetDefaultOptions();
	}
	return options;
}

