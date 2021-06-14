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
        expBottleSpawner->Continue();
        speedPotionSpawner->Continue();
        snake->CheckStatements();
    }
}

void Snake::Game::NewGame()
{
	//Добавить проверку на первый запуск
    pnlGameOver->Visible = false;
    FirstLaunchCheck(); 
	
	//Проверка на первый запуск
    ChangeSpeed();
    GameTimer->Start();
    
    //Инициализация спавнеров
    coinSpawner->SpawnerInitialize();
    expBottleSpawner->SpawnerInitialize();
    speedPotionSpawner->SpawnerInitialize();
	
	//Инициализация статистики
    gameStats->Initialize();
	
	//Инициализация змейки
    snake->Initialize();

	//Добавляем змею на поле
	pnlGameArea->Controls->Add(snake->SnakeEntity[0]);

	//Генерация Фруктов и задания их свойств
    
    //Запускаем генераторы
    GenerateCommonFruits();
    GenerateCommonCoin();
    GenerateExperienceBottle();
    GenerateSpeedPotion();
	
	//Состояния
    isPlayable = true;
    isDead = snake->isDead;

	//Задаём первоначальное направление змейки
    snake->MoveForward();
    Eating();
	
	//При перезапуске игры счёт будет обнуляться
    lblGameBalance->Text = "Balance: 0";
    lblGameCount->Text = "Score: 0";
    lblGameExp->Text = "Exp: 0";

    lblSnakeHealth->Text = "Health: " + snake->GetHealth();
    lblSnakeHunger->Text = "Hunger: " + snake->GetSaturation();
    lblSpeedPotionEffect->Text = "Speed: Active";
    lblSpeedPotionEffect->Visible = false;
}

void Snake::Game::FirstLaunchCheck()
{
    if (!firstLaunch)
    {
        RemoveObjects();
    }
    else
    {
        firstLaunch = false;
    }
}

void Snake::Game::RemoveObjects()
{
    Controls->Remove(commonFruit->CommonFruitItem);
    Controls->Remove(coinSpawner->CommonCoinItem);
    Controls->Remove(expBottleSpawner->ExpBottle);
    Controls->Remove(speedPotionSpawner->SpeedPotionBottle);
	
    for (int i = 0; i <= snake->GetLength(); i++)
    {
        Controls->Remove(snake->SnakeEntity[i]);
    }
    snake->Deconstruct();
    commonFruit->Deconstruct();
    coinSpawner->Deconstruct();
    expBottleSpawner->Deconstruct();
    speedPotionSpawner->Deconstruct();
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
    
    if (snake->SnakeEntity[0]->Bounds.IntersectsWith(commonFruit->CommonFruitItem->Bounds))
    {
        //++gameStats->Score;
        //gameStats->WasScoreChanged = true;
        //IsAnyObjectWasEaten = true;
        //StartGrowth();
        snake->SetLength(++gameStats->Score);
        snake->Eat();
        snake->AddSaturation(commonFruit->GetSaturation());
        snake->HungerRestart();
        SnakeHealthHungerUpdate();
        pnlGameArea->Controls->Add(snake->SnakeEntity[snake->GetLength()]);
    	
        lblGameCount->Text = "Score: " + gameStats->Score;
    	
        commonFruit->Deconstruct();
    	
        commonFruit = gcnew CommonFruit();
        GenerateCommonFruits();
    }
    if (coinSpawner->CommonCoinItem != nullptr)
    {
	    if (snake->SnakeEntity[0]->Bounds.IntersectsWith(coinSpawner->CommonCoinItem->Bounds))
	    {
	        gameStats->Balance += coinSpawner->AddBalance();
    		
	        lblGameBalance->Text = "Balance: " + gameStats->Balance;
    		
            coinSpawner->Deconstruct();
            if (coinSpawner->isAbleToRemove)
            {
                pnlGameArea->Controls->Remove(coinSpawner->CommonCoinItem);
            }
			coinSpawner->isAbleToAdd = false;
            GenerateCommonCoin();
	    	
	        //GenerateCommonCoin();
	        //items->commonCoin = gcnew CommonCoin();
	       // items->commonCoin->Initialize();
	        //items->commonCoin->GenerateCommonCoin();
	        //pnlGameArea->Controls->Add(items->commonCoin->CommonCoinItem);
	    }
    }
    if (expBottleSpawner->ExpBottle != nullptr) {
        if (snake->SnakeEntity[0]->Bounds.IntersectsWith(expBottleSpawner->ExpBottle->Bounds))
        {
            gameStats->Expirience += expBottleSpawner->AddAmountOfExperience();
            lblGameExp->Text = "Exp: " + gameStats->Expirience;

            expBottleSpawner->Deconstruct();
            if (expBottleSpawner->isAbleToRemove)
            {
				expBottleSpawner->isAbleToAdd = false;
                OnAbleToRemoveExpBottle();
            }
        }
    }

    if (speedPotionSpawner->SpeedPotionBottle != nullptr)
    {
        if (snake->SnakeEntity[0]->Bounds.IntersectsWith(speedPotionSpawner->SpeedPotionBottle->Bounds))
        {
            speedPotionSpawner->Deconstruct();
            if (snake->GetSpeed() > snake->normalSpeed)
            {
                speedPotionSpawner->Duration->Stop();
                speedPotionSpawner->StartPotionEffectDuration();
                snake->IncreaseSpeed(speedPotionSpawner->GetSpeedAmount());
            }
            else
            {
                snake->IncreaseSpeed(speedPotionSpawner->GetSpeedAmount());
                speedPotionSpawner->StartPotionEffectDuration();
            }
            lblSpeedPotionEffect->Visible = true;
        	
            if (speedPotionSpawner->isAbleToRemove)
            {
				speedPotionSpawner->isAbleToAdd = false;
                OnAbleToRemoveSpeedPotion();
            }
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
    {
        snake->isDead = true;
    	GameOver();
    }
}

void Snake::Game::GameOver()
{
    isPlayable = true;
    isDead = snake->isDead;
    pnlGameOver->Visible = true;
}


void Snake::Game::OnIntersectBorder()
{
    if (snake->SnakeEntity[0]->Location.X <= 0)
    {
        snake->SnakeEntity[0]->Location = Point(680, snake->SnakeEntity[0]->Location.Y);
    }
    else if (snake->SnakeEntity[0]->Location.X >= 680)
    {
        snake->SnakeEntity[0]->Location = Point(0, snake->SnakeEntity[0]->Location.Y);
    }
    else if (snake->SnakeEntity[0]->Location.Y <= 0)
    {
        snake->SnakeEntity[0]->Location = Point(snake->SnakeEntity[0]->Location.X, 530);
    }
    else if (snake->SnakeEntity[0]->Location.Y >= 530)
    {
        snake->SnakeEntity[0]->Location = Point(snake->SnakeEntity[0]->Location.X, 0);
    }
}

void Snake::Game::GenerateCommonFruits()
{
    commonFruit->Initialize();
    commonFruit->GenerateCommonFruit();
    pnlGameArea->Controls->Add(commonFruit->CommonFruitItem);
}

void Snake::Game::GenerateCommonCoin()
{
    coinSpawner->Initialize();
    coinSpawner->SpawnCoins();
}

void Snake::Game::GenerateExperienceBottle()
{
    expBottleSpawner->Initialize();
    expBottleSpawner->SpawnExpBottles();
}

void Snake::Game::GenerateSpeedPotion()
{
    speedPotionSpawner->Initialize();
    speedPotionSpawner->SpawnSpeedPotions();
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
    pnlGameArea->Controls->Add(coinSpawner->CommonCoinItem);
    coinSpawner->isAbleToAdd = false;
}

void Snake::Game::OnAbleToRemoveCoin()
{
    pnlGameArea->Controls->Remove(coinSpawner->CommonCoinItem);
    GenerateCommonCoin();
}

void Snake::Game::OnAbleToAddExpBottle()
{
    pnlGameArea->Controls->Add(expBottleSpawner->ExpBottle);
    expBottleSpawner->isAbleToAdd = false;
}

void Snake::Game::OnAbleToRemoveExpBottle()
{
    pnlGameArea->Controls->Remove(expBottleSpawner->ExpBottle);
    GenerateExperienceBottle();
}

void Snake::Game::OnAbleToAddSpeedPotion()
{
    pnlGameArea->Controls->Add(speedPotionSpawner->SpeedPotionBottle);
    speedPotionSpawner->isAbleToAdd = false;
}

void Snake::Game::OnAbleToRemoveSpeedPotion()
{
    pnlGameArea->Controls->Remove(speedPotionSpawner->SpeedPotionBottle);
    GenerateSpeedPotion();
}

void Snake::Game::SnakeHealthHungerUpdate()
{
    lblSnakeHealth->Text = "Health: " + snake->GetHealth();
    lblSnakeHunger->Text = "Hunger: " + snake->GetSaturation();
}


System::Void Snake::Game::GameFormUpdate(System::Object^ sender, System::EventArgs^ e)
{
	isDead = snake->isDead;
    if (!isDead && isPlayable) //BAD CODE
    {
        Movement();
        SnakeHealthHungerUpdate();
    	Eating();
    	SelfEating();
    	OnIntersectBorder();
    	
        if (coinSpawner->isAbleToAdd)
        {
            OnAbleToAddCoin();
        }
        if (coinSpawner->isAbleToRemove)
        {
            OnAbleToRemoveCoin();
        }

        if (expBottleSpawner->isAbleToAdd)
        {
            OnAbleToAddExpBottle();
        }
        if (expBottleSpawner->isAbleToRemove)
        {
            OnAbleToRemoveExpBottle();
        }
    	
    	if (speedPotionSpawner->isAbleToAdd)
        {
            OnAbleToAddSpeedPotion();
        }
        if (speedPotionSpawner->isAbleToRemove)
        {
            OnAbleToRemoveSpeedPotion();
        }
        if (speedPotionSpawner->isAbleToRemoveSpeedEffect)
        {
            snake->DecreaseSpeed(speedPotionSpawner->GetSpeedAmount());
            speedPotionSpawner->isAbleToRemoveSpeedEffect = false;
            lblSpeedPotionEffect->Visible = false;
        }
    }
    else if (isDead && isPlayable)
    {
        GameTimer->Stop();
        coinSpawner->Pause();
        expBottleSpawner->Pause();
        speedPotionSpawner->Pause();
        snake->StopSnakeTimers();
    	
        pnlGameOver->Visible = true;
    }
    else if (!isDead && !isPlayable)
    {
        GameTimer->Stop();
        coinSpawner->Pause();
        expBottleSpawner->Pause();
        speedPotionSpawner->Pause();
        snake->StopSnakeTimers();
    }
}
