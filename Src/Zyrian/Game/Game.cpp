#include "Game.h"
#include "Src/Zyrian/GUI/InGameGUI/InGameGUI.h"
#include "Src/Zyrian/GUI/MainGUI/Settings/GameSettings/Globals/GlobalsSettings.h"


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
    if (!inGameGUI->isInGameGUIVisible /*&& isPlayable && !isDead */&& e->KeyCode.ToString() == "Escape")
    {
        isPlayable = false;
        inGameGUI->Show();
        //GlobalSettings^ globalSettings = gcnew GlobalSettings();
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
        //RemoveObjects();
        GameTimer->Stop();
        this->IsRunning = false;
		this->Close();
        inGameGUI->WasBackToMenuActive = false;
    }
    else if (inGameGUI->NeedToRenewGame)
    {
        inGameGUI->NeedToRenewGame = false;
        NewGame();
    }
    else //продолжение игры
    {
        isPlayable = true;
        GameTimer->Start();
        coinSpawner->Continue();
    }
}

void Snake::Game::NewGame()
{
	//Добавить проверку на первый запуск
    pnlGameOver->Visible = false;
    FirstLaunchCheck();
	
	//Статистика
    ChangeSpeed();
    GameTimer->Start();
    
    
    coinSpawner->Initialize();
	//coinSpawner->commonCoin->Initialize();

    //CommonCoinSpawnTimer->Start();
	
    gameStats->Initialize();
	//Создаём змейку и задаём свойства её головы
    snake->Initialize();

	//Добавляем змею на поле
	pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//Генерация Фруктов и задания их свойств
    
    GenerateCommonFruits();
	
    //Генерация Зелий и задания их свойств
    //Генерация Бомб и задания их свойств
    //Генерация Монет и задания их свойств
    GenerateCommonCoin();
    //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
    //items->commonCoin->Initialize();
    //items->commonCoin->GenerateCommonCoin();
    //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);

    //GameTimer->Interval = updateInterval;
	
	
    isPlayable = true;
    isDead = false;

	//Направление змейки
    snake->MoveForward();
    Eating();
	//При перезапуске игры счёт будет обнуляться
    lblGameBalance->Text = "Balance: 0";
    lblGameCount->Text = "Score: 0";
    lblGameExp->Text = "Exp: 0";
}

void Snake::Game::FirstLaunchCheck()
{
    if (!firstLaunch)
    {
        RemoveObjects();
        //gameStats->Refresh();
        //RemoveStats();
    }
    else
    {
        firstLaunch = false;
    }
}

void Snake::Game::RemoveObjects()
{
    Controls->Remove(coinSpawner->commonFruit->CommonFruitItem);
    Controls->Remove(coinSpawner->commonCoin->CommonCoinItem);
	
    for (int i = 0; i <= snake->GetLength(); i++)
    {
        Controls->Remove(snake->SnakeEntity[i]);
    }
    snake->Deconstruct();
    coinSpawner->commonFruit->Deconstruct();
    coinSpawner->commonCoin->Deconstruct();
    ResetStatistics();
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
    
    if (snake->SnakeEntity[0]->Bounds.IntersectsWith(coinSpawner->commonFruit->CommonFruitItem->Bounds))
    {
        //++gameStats->Score;
        //gameStats->WasScoreChanged = true;
        //IsAnyObjectWasEaten = true;
        //StartGrowth();
        snake->SetLength(++gameStats->Score);
        snake->Eat();
        pnlGameArea->Controls->Add(snake->SnakeEntity[snake->GetLength()]);
    	
        lblGameCount->Text = "Score: " + gameStats->Score;
    	
        coinSpawner->commonFruit->Deconstruct();
    	
        coinSpawner->commonFruit = gcnew CommonFruit();
        coinSpawner->commonFruit->Initialize();
        coinSpawner->commonFruit->GenerateCommonFruit();
        pnlGameArea->Controls->Add(coinSpawner->commonFruit->CommonFruitItem);
    }
    if (coinSpawner->commonCoin->CommonCoinItem != nullptr)
    {
	    if (snake->SnakeEntity[0]->Bounds.IntersectsWith(coinSpawner->commonCoin->CommonCoinItem->Bounds))
	    {
	        gameStats->Balance += coinSpawner->commonCoin->AddBalance();
    		
	        lblGameBalance->Text = "Balance: " + gameStats->Balance;
    		
	        coinSpawner->commonCoin->Deconstruct();
            if (coinSpawner->commonCoin->isAbleToRemove)
            {
                pnlGameArea->Controls->Remove(coinSpawner->commonCoin->CommonCoinItem);
            }
            //isCommonCoinGenerable = false;
			coinSpawner->isAbleToAdd = false;
            GenerateCommonCoin();

           // CommonCoinIdleTime->Stop(); //Время ожидания 
           // CommonCoinSpawnTimer->Start(); //Спавнер коинов
	    	
	        //GenerateCommonCoin();
	        //items->commonCoin = gcnew CommonCoin();
	       // items->commonCoin->Initialize();
	        //items->commonCoin->GenerateCommonCoin();
	        //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
	    }
    }
   // snake->Eat();
  //  if (snake->IsAnyObjectWasEaten)
  //  {
		////pnlGameArea->Controls->Add(snake->SnakeEntity[snake->gameStats->Score]);
		////pnlGameArea->Controls->Add(snake->items->commonFruit->CommonFruitItem);
  //  	
  //      //pnlGameArea->Controls->Add(snake->items->commonCoin->CommonCoinItem);
  //  	
	 //   if (snake->gameStats->WasScoreChanged)
	 //   {
	 //       lblGameCount->Text = "Score: " + snake->gameStats->Score;
	 //   }
  //  	if(snake->gameStats->WasBalanceChanged)
  //  	{
  //          lblGameBalance->Text = "Balance: " + snake->gameStats->Balance;
  //  	}
  //      snake->IsAnyObjectWasEaten = false;
  //  }
}

void Snake::Game::SelfEating()
{
    if (snake->SelfEat()) 
    { GameOver(); }
}

void Snake::Game::GameOver()
{
    isPlayable = true;
    isDead = true;
    pnlGameOver->Visible = true;
}


void Snake::Game::OnIntersectBorder()
{
    if (snake->SnakeEntity[0]->Location.X == 0)
    {
        snake->SnakeEntity[0]->Location = Point(680, snake->SnakeEntity[0]->Location.Y);
    }
    else if (snake->SnakeEntity[0]->Location.X == 680)
    {
        snake->SnakeEntity[0]->Location = Point(0, snake->SnakeEntity[0]->Location.Y);
    }
    else if (snake->SnakeEntity[0]->Location.Y == 0)
    {
        snake->SnakeEntity[0]->Location = Point(snake->SnakeEntity[0]->Location.X, 530);
    }
    else if (snake->SnakeEntity[0]->Location.Y == 530)
    {
        snake->SnakeEntity[0]->Location = Point(snake->SnakeEntity[0]->Location.X, 0);
    }
}

void Snake::Game::GenerateCommonFruits()
{
    coinSpawner->commonFruit->Initialize();
    coinSpawner->commonFruit->GenerateCommonFruit();
    pnlGameArea->Controls->Add(coinSpawner->commonFruit->CommonFruitItem);
}

void Snake::Game::GenerateCommonCoin()
{
    //Random^ rand = gcnew Random();
    //int a = rand->Next(5, 11);
    //int NumToCompare = 10;
    //if ((log(a) + sin(a)) >= 1)
    //{
    //   // items->commonCoin = gcnew CommonCoin();
	   // items->commonCoin->Initialize();
	   // items->commonCoin->GenerateCommonCoin();
	   // pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
    //    isCommonCoinGenerable = true;
    //    CommonCoinSpawnTimer->Stop();
    //    CommonCoinIdleTime->Start();
    //}
    //else
    //{
    //    return;
    //}
    //coinSpawner->Initialize();
    coinSpawner->commonCoin->Initialize();
    coinSpawner->SpawnCoins();

}

void Snake::Game::ResetStatistics()
{
    gameStats->Refresh();
}

void Snake::Game::ChangeSpeed()
{
    Options^ options = gcnew Options();
    GameTimer->Stop();
    options = optionsSaveSystem->Load();
    updateSpeed = options->globals->difficulty->GameSpeed;
	
    int changableUpdateInterval = 0;
    changableUpdateInterval = updateInterval;
    changableUpdateInterval -= updateSpeed * 10;
    GameTimer->Interval = changableUpdateInterval + 1;
}

void Snake::Game::OnAbleToAddCoin()
{
    pnlGameArea->Controls->Add(coinSpawner->commonCoin->CommonCoinItem);
    coinSpawner->isAbleToAdd = false;
}

System::Void Snake::Game::GameFormUpdate(System::Object^ sender, System::EventArgs^ e)
{
    if (!isDead && isPlayable) //BAD CODE
    {
        Movement();
    	Eating();
    	SelfEating();
    	OnIntersectBorder();
        if (coinSpawner->isAbleToAdd)
        {
            OnAbleToAddCoin();
            
        }
        if (coinSpawner->commonCoin->isAbleToRemove)
        {
            pnlGameArea->Controls->Remove(coinSpawner->commonCoin->CommonCoinItem);
            //coinSpawner->commonCoin->isAbleToRemove = false;
            GenerateCommonCoin();
        }
        //GenerateCommonCoin();
    }
    else if (isDead && isPlayable)
    {
        GameTimer->Stop();
    	    	
    }
    else if (!isDead && !isPlayable)
    {
        GameTimer->Stop();
        coinSpawner->Pause();
    	
    }
}

System::Void Snake::Game::CommonCoinSpawnUpdate(System::Object^ sender, System::EventArgs^ e)
{
    //GenerateCommonCoin();
}

System::Void Snake::Game::OnCommonCoinSpawn(System::Object^ sender, System::EventArgs^ e)
{
    //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
	
}

System::Void Snake::Game::OnCommonCoinIdleTimeEnd(System::Object^ sender, System::EventArgs^ e)
{

   /* items->commonCoin->Deconstruct();

    CommonCoinIdleTime->Stop();
    isCommonCoinGenerable = false;
    CommonCoinSpawnTimer->Start();*/
	
}

