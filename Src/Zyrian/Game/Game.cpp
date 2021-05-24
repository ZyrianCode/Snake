#include "Game.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"
//#include "CustomTypes/Vector2.h"
//#include "Entities/SnakeEntity.h"
//#include "../GUI/InGameGUI/InGameGUI.h"


Snake::Game::Game(void)
{
    InitializeComponent();
    Vector2^ gameArea = gcnew Vector2();
    gameArea->X = 680;
    gameArea->Y = 530;

    firstLaunch = true;
    NewGame(); //Запускаем игру
	
}

System::Void Snake::Game::Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    InGameGUI^ inGameGUI = gcnew InGameGUI();
    if (!inGameGUI->isInGameGUIVisible && e->KeyCode.ToString() == "Escape")
    {
        inGameGUI->Show();
    }
    else if (inGameGUI->isInGameGUIVisible && e->KeyCode.ToString() == "Escape")
    {
        inGameGUI->Activate();
        inGameGUI->BringToFront();
    }
    inGameGUI->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Game::GameOnInGameGui_Close);
}

System::Void Snake::Game::GameOnInGameGui_Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    this->IsRunning = false;
    this->Close();
}

void Snake::Game::NewGame()
{
	//Добавить проверку на первый запуск

	//Создаём змейку и задаём свойства её головы
    //Snake^ snake = gcnew Snake();
    snake->Initialize();
    /*snake->SnakeEntity = gcnew array<PictureBox^, 1>(400);
    snake->SnakeHead = gcnew PictureBox();
    snake->SnakeHead->Location = Point(200, 200);
    snake->SnakeHead->BackColor = Color::DarkGreen;
    snake->SnakeHead->Width = snake->Step;
    snake->SnakeHead->Height = snake->Step;*/

	//Статистика
    GameStats^ gameStats = gcnew GameStats();
    gameStats->Initialize();

	//Добавляем змею на поле
	this->pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//Генерация Фруктов и задания их свойств
    //Генерация Зелий и задания их свойств
    //Генерация Бомб и задания их свойств
    //Генерация Монет и задания их свойств

    GameTimer->Interval = updateInterval;
    GameTimer->Start();

    isPlayable = true;
    isDead = false;

	//Направление змейки
    snake->MoveForward();

	//При перезапуске игры счёт будет обнуляться
    lblGameCount->Text = "Score: 0";
	
}

void Snake::Game::Movement()
{
    snake->Move();
}

System::Void Snake::Game::GameForm_Update(System::Object^ sender, System::EventArgs^ e)
{
    if (!isDead && isPlayable)
    {
        
        Movement();
    	//OnEating();
    	//OnEatYourselfEvent();
    	//OnIntersectBorders();
    }
    else if (isDead && isPlayable)
    {
        GameTimer->Stop();
    	
    }
    else if (!isDead && !isPlayable)
    {
        GameTimer->Stop();
    }
}
