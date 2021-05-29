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
    //gameStats->Initialize();

	//��������� ���� �� ����
	this->pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//��������� ������� � ������� �� �������
    
    //CommonFruit^ commonFruit = gcnew CommonFruit();
    snake->items->commonFruit->Initialize();
    snake->items->commonFruit->GenerateCommonFruit();
    pnlGameArea->Controls->Add(snake->items->commonFruit->CommonFruitItem);
    //GenerateCommonFruits();
	
    //��������� ����� � ������� �� �������
    //��������� ���� � ������� �� �������
    //��������� ����� � ������� �� �������
    snake->items->commonCoin->Initialize();
    snake->items->commonCoin->GenerateCommonCoin();
    pnlGameArea->Controls->Add(snake->items->commonCoin->CommonCoinItem);

    GameTimer->Interval = updateInterval;
    GameTimer->Start();

    isPlayable = true;
    isDead = false;

	//����������� ������
    snake->MoveForward();
    Eating();
	//��� ����������� ���� ���� ����� ����������
    lblGameBalance->Text = "Balance:" + snake->gameStats->Balance;
    lblGameCount->Text = "Score:" + snake->gameStats->Score;
    lblGameExp->Text = "Exp:" + snake->gameStats->Expirience;
}

void Snake::Game::FirstLaunchCheck()
{
    if (!firstLaunch)
    {
        RemoveObjects();
        snake->gameStats->Refresh();
    }
    else
    {
        firstLaunch = false;
    }
}

void Snake::Game::RemoveObjects()
{
    Controls->Remove(snake->items->commonFruit->CommonFruitItem);
    Controls->Remove(snake->items->commonCoin->CommonCoinItem);
	
    for (int i = 0; i <= snake->gameStats->Score; i++)
    {
        Controls->Remove(snake->SnakeEntity[i]);
    }
    snake->Deconstruct();
    snake->items->commonFruit->Deconstruct();
    snake->items->commonCoin->Deconstruct();
}

void Snake::Game::IncreaseScore()
{
    
}

void Snake::Game::Movement()
{
    snake->Move();
}

void Snake::Game::Eating()
{
  //  if (snake->SnakeEntity[0]->Location.X == commonFruit->FruitPos->X && snake->SnakeEntity[0]->Location.Y == commonFruit->FruitPos->Y)
  //  {
  //      ++snake->gameStats->Score;
  //      snake->SnakeEntity[snake->gameStats->Score] = gcnew PictureBox();
  //      snake->SnakeEntity[snake->gameStats->Score]->Location = Point(snake->SnakeEntity[snake->gameStats->Score-1]->Location.X + snake->Step * snake->direction->X, snake->SnakeEntity[snake->gameStats->Score-1]->Location.Y - snake->Step * snake->direction->Y);
  //      snake->SnakeEntity[snake->gameStats->Score]->BackColor = Color::FromArgb(55, 120, 86);
  //      snake->SnakeEntity[snake->gameStats->Score]->Width = snake->Step;
  //      snake->SnakeEntity[snake->gameStats->Score]->Height = snake->Step;
		//pnlGameArea->Controls->Add(snake->SnakeEntity[snake->gameStats->Score]);
  //      commonFruit->Deconstruct();
		//commonFruit = gcnew CommonFruit();
  //      commonFruit->GenerateCommonFruit();
  //      commonFruit->Initialize();
  //      pnlGameArea->Controls->Add(commonFruit->CommonFruitItem);
  //  }
    snake->Eat();
    if (snake->IsAnyObjectWasEaten)
    {
		pnlGameArea->Controls->Add(snake->SnakeEntity[snake->gameStats->Score]);
		pnlGameArea->Controls->Add(snake->items->commonFruit->CommonFruitItem);
    	
        pnlGameArea->Controls->Add(snake->items->commonCoin->CommonCoinItem);
    	
	    if (snake->gameStats->WasScoreChanged)
	    {
	        lblGameCount->Text = "Score: " + snake->gameStats->Score;
	    }
    	if(snake->gameStats->WasBalanceChanged)
    	{
            lblGameBalance->Text = "Balance: " + snake->gameStats->Balance;
    	}
        snake->IsAnyObjectWasEaten = false;
    }
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
    	Eating();
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
