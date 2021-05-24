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
    NewGame(); //��������� ����
	
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
	//�������� �������� �� ������ ������

	//������ ������ � ����� �������� � ������
    //Snake^ snake = gcnew Snake();
    snake->Initialize();
    /*snake->SnakeEntity = gcnew array<PictureBox^, 1>(400);
    snake->SnakeHead = gcnew PictureBox();
    snake->SnakeHead->Location = Point(200, 200);
    snake->SnakeHead->BackColor = Color::DarkGreen;
    snake->SnakeHead->Width = snake->Step;
    snake->SnakeHead->Height = snake->Step;*/

	//����������
    GameStats^ gameStats = gcnew GameStats();
    gameStats->Initialize();

	//��������� ���� �� ����
	this->pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//��������� ������� � ������� �� �������
    //��������� ����� � ������� �� �������
    //��������� ���� � ������� �� �������
    //��������� ����� � ������� �� �������

    GameTimer->Interval = updateInterval;
    GameTimer->Start();

    isPlayable = true;
    isDead = false;

	//����������� ������
    snake->MoveForward();

	//��� ����������� ���� ���� ����� ����������
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
