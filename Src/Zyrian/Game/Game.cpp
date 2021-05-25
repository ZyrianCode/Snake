#include "Game.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"
//#include "Items/CommonFruit.h"


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
    if (!inGameGUI->isInGameGUIVisible /*&& isPlayable && !isDead */&& e->KeyCode.ToString() == "Escape")
    {
        isPlayable = false;
        inGameGUI->Show();
    }
    else if (inGameGUI->isInGameGUIVisible && e->KeyCode.ToString() == "Escape")
    {
        inGameGUI->Activate();
        inGameGUI->BringToFront();
    }
    inGameGUI->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Game::GameOnInGameGui_Close);
    if (e->KeyCode.ToString() == "W" || e->KeyCode.ToString() == "Up")
    {
        snake->MoveForward();
    }
    else if (e->KeyCode.ToString() == "S" || e->KeyCode.ToString() == "Down")
    {
        snake->MoveBackward();
    }
    else if (e->KeyCode.ToString() == "D" || e->KeyCode.ToString() == "Right")
    {
        snake->MoveRight();
    }
    else if(e->KeyCode.ToString() == "A" || e->KeyCode.ToString() == "Left")
    {
        snake->MoveLeft();
    }
}

System::Void Snake::Game::GameOnInGameGui_Close(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
    InGameGUI^ inGameGUI = gcnew InGameGUI();
    if (inGameGUI->WasBackToMenuActive)
    {
        GameTimer->Stop();
        this->IsRunning = false;
		this->Close();
        inGameGUI->WasBackToMenuActive = false;
    }
    else if (inGameGUI->NeedToRenewGame)
    {
        //GameTimer->Stop();
        //IsRunning = false;
        inGameGUI->NeedToRenewGame = false;
        NewGame();
        //Game();
    }
    else
    {
        isPlayable = true;
        GameTimer->Start();
    }
}

void Snake::Game::NewGame()
{
	//�������� �������� �� ������ ������
    FirstLaunchCheck();
	//������ ������ � ����� �������� � ������
    snake->Initialize();

	//����������
    gameStats->Initialize();

	//��������� ���� �� ����
	this->pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//��������� ������� � ������� �� �������
    
    //CommonFruit^ commonFruit = gcnew CommonFruit();
    commonFruit->Initialize();
    commonFruit->GenerateCommonFruit();
    pnlGameArea->Controls->Add(commonFruit->CommonFruitItem);
    //GenerateCommonFruits();
	
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

void Snake::Game::FirstLaunchCheck()
{
    if (!firstLaunch)
    {
        RemoveObjects();
        gameStats->Refresh();
    }
    else
    {
        firstLaunch = false;
    }
}

void Snake::Game::RemoveObjects()
{
    this->Controls->Remove(commonFruit->CommonFruitItem);

    for (int i = 0; i <= gameStats->Score; i++)
    {
        Controls->Remove(snake->SnakeEntity[i]);
    }
    snake->Deinitialize();
    commonFruit->Deconstruct();
}

void Snake::Game::Movement()
{
    snake->Move();
}

void Snake::Game::IntersectBorder()
{
    //snake->IntersectBorders();
   /* if (snake->SnakeEntity[0]->Location.X >= pnlRightBorder->Location.X || snake->SnakeEntity[0]->Location.X <= pnlLeftBorder->Location.X)
    {
        snake->SetOppositDirection();
    }

    if (snake->SnakeEntity[0]->Location.Y <= pnlUpperBorder->Location.Y || snake->SnakeEntity[0]->Location.Y >= pnlLowerBorder->Location.Y)
    {
        snake->SetOppositDirection();   
    }*/
    if ((snake->SnakeEntity[0]->Location.X == 0 || snake->SnakeEntity[0]->Location.X == 680) ||
        (snake->SnakeEntity[0]->Location.Y == 0 || snake->SnakeEntity[0]->Location.Y == 530))
    {
        snake->SetOppositDirection();
    }
}

void Snake::Game::GenerateCommonFruits()
{
    /*commonFruit->GenerateCommonFruit();
    pnlGameArea->Controls->Add(commonFruit->CommonFruitItem);*/
}

System::Void Snake::Game::GameForm_Update(System::Object^ sender, System::EventArgs^ e)
{
    if (!isDead && isPlayable) //BAD CODE
    {
        
        Movement();
    	//OnEating();
    	//OnEatYourselfEvent();
    	IntersectBorder();
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
