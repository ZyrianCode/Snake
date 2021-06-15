#include "SnakeEntity.h"

void Snake::Snake::Initialize()
{
	Random^ _rand = gcnew Random();
	int X, Y;
	X = _rand->Next(100, 680 - 50);
	Y = _rand->Next(100, 530 - 50);
	int tempX = X % 10;
	X -= tempX;
	int tempY = Y % 10;
	Y -= tempY;

	SnakeEntity = gcnew array<PictureBox^, 1>(400);
	SnakeEntity[0] = gcnew PictureBox();
	
	_step = 10;
	_speed = 1.10f;
	_health = 10.0f;
	_saturation = 5.0f;
	_snakeLength = 0;
	
	SnakeEntity[0]->Width = 10;
	SnakeEntity[0]->Height = 10;
	SnakeEntity[0]->Location = Point(X, Y);
	SnakeEntity[0]->BackColor = Color::DarkGreen;
	
	isAlive = true;
	isDead = false;
	
	StartHungerResistancePeriod();
}

void Snake::Snake::StartHungerResistancePeriod()
{
	snakeStatements->StatementsRestart();
	
	Invincibility->Interval = 15000;
	Invincibility->Tick += gcnew System::EventHandler(this, &Snake::OnInvincibilityEnd);
	Invincibility->Start();
	snakeStatements->Activate(_invincibilityPeriod);

	HealPeriod->Interval = 1000;
	HealPeriod->Tick += gcnew System::EventHandler(this, &Snake::OnHealPeriod);
	HealPeriod->Start();
	snakeStatements->Activate(_healingPeriod);
}

void Snake::Snake::CheckStatements()
{
	if (snakeStatements->InvincibilityStatus == 1)
	{
		HungerRestart();
	}
	else if (snakeStatements->HungerPeriodStatus == 1)
	{
		HungerPeriod->Start();
	}
	else if(snakeStatements->HealthDecreasePeriodStatus == 1)
	{
		HealthDecreasePeriod->Start();
	}
}

void Snake::Snake::Deconstruct()
{
	for (int i = 0; i <= _snakeLength; i++)
	{
		SnakeEntity[i]->Visible = false;
		SnakeEntity[i] = nullptr;
	}
}

void Snake::Snake::MoveForward()
{
	direction->X = 0;
	direction->Y = -1;
}

void Snake::Snake::MoveBackward()
{
	direction->X = 0;
	direction->Y = 1;
}

void Snake::Snake::MoveRight()
{
	direction->X = 1;
	direction->Y = 0;
}

void Snake::Snake::MoveLeft()
{
	direction->X = -1;
	direction->Y = 0;
}

void Snake::Snake::Move()
{
	for (int i = _snakeLength; i >= 1; i--)
	{
		SnakeEntity[i]->Location = SnakeEntity[i - 1]->Location;		
	}

	SnakeEntity[0]->Location = Point(SnakeEntity[0]->Location.X + direction->X * _step * _speed, SnakeEntity[0]->Location.Y + direction->Y * _step * _speed);
}

void Snake::Snake::Eat()
{
	StartGrowth();
}

bool Snake::Snake::SelfEat()
{
	for (int i = 2; i < _snakeLength; i++)
	{
		if (SnakeEntity[0]->Bounds.IntersectsWith(SnakeEntity[i]->Bounds))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void Snake::Snake::StartGrowth()
{
	SnakeEntity[_snakeLength] = gcnew PictureBox();
	SnakeEntity[_snakeLength]->Location = Point(SnakeEntity[_snakeLength - 1]->Bounds.X + (direction->X * _step), SnakeEntity[_snakeLength - 1]->Bounds.Y - (direction->Y * _step));
	SnakeEntity[_snakeLength]->BackColor = Color::FromArgb(55, 120, 86);
	SnakeEntity[_snakeLength]->Width = 8;
	SnakeEntity[_snakeLength]->Height = 8;
}

void Snake::Snake::OnInvincibilityEnd(System::Object^ sender, System::EventArgs^ e)
{
	Invincibility->Stop();
	Invincibility->Tick -= gcnew System::EventHandler(this, &Snake::OnInvincibilityEnd);
	snakeStatements->Deactivate(_invincibilityPeriod);
	
	HealPeriod->Stop();
	HealPeriod->Tick -= gcnew System::EventHandler(this, &Snake::OnHealPeriod);
	snakeStatements->Deactivate(_healingPeriod);
	
	HungerPeriod->Interval = 7000;
	HungerPeriod->Tick += gcnew System::EventHandler(this, &Snake::OnHungerPeriod);
	HungerPeriod->Start();
	snakeStatements->Activate(_hungerPeriod);
}

void Snake::Snake::OnHungerPeriod(System::Object^ sender, System::EventArgs^ e)
{
	float hungerSaturationDamage = 1.0f;
	DecreaseSaturation(hungerSaturationDamage);
	if (_saturation == _minSaturation)
	{
		HungerPeriod->Stop();
		HungerPeriod->Tick -= gcnew System::EventHandler(this, &Snake::OnHungerPeriod);
		snakeStatements->Deactivate(_hungerPeriod);
		
		HealthDecreasePeriod->Interval = 6000;
		HealthDecreasePeriod->Tick += gcnew System::EventHandler(this, &Snake::OnHealthDecreasePeriod);
		HealthDecreasePeriod->Start();
		snakeStatements->Activate(_healthDecreaseByHungerPeriod);
	}
}

void Snake::Snake::OnHealthDecreasePeriod(System::Object^ sender, System::EventArgs^ e)
{
	if (!isAlive)
	{
		HealthDecreasePeriod->Stop();
		HealthDecreasePeriod->Tick -= gcnew System::EventHandler(this, &Snake::OnHealthDecreasePeriod);
		snakeStatements->Deactivate(_healthDecreaseByHungerPeriod);
	}
	else
	{
		float hungerDamage = 1.0f;
		TakeDamage(hungerDamage);
	}
}

void Snake::Snake::OnHealPeriod(System::Object^ sender, System::EventArgs^ e)
{
	if (_health == _maxHealth)
	{
		HealPeriod->Stop();
		HealPeriod->Tick -= gcnew System::EventHandler(this, &Snake::OnHealPeriod);
		snakeStatements->Deactivate(_healingPeriod);
	}
	else
	{
		if (_saturation == _maxSaturation)
		{
			float HealthAmount = 2.0f;
			Heal(HealthAmount);
		}
	}
}

Snake::Vector2^ Snake::Snake::GetDirection()
{
	Vector2^ direction = gcnew Vector2();
	return direction;
}

void Snake::Snake::SetOppositDirection()
{
	if (direction->X == 0 && direction->Y == -1) { MoveBackward(); }
	else if (direction->X == 0 && direction->Y == 1) { MoveForward(); }
	else if (direction->X == 1 && direction->Y == 0) { MoveLeft(); }
	else if (direction->X == -1 && direction->Y == 0) { MoveRight(); }
}

void Snake::Snake::AddSaturation(float saturationToAdd)
{
	if (saturationToAdd <= 0.0f){ saturationToAdd = 2.0f; }
	
	if (_saturation + saturationToAdd >= _maxSaturation)
	{
		_saturation = _maxSaturation;
	}
	else
	{
		_saturation += saturationToAdd;
	}
}

void Snake::Snake::DecreaseSaturation(float saturationToRemove)
{
	if (saturationToRemove <= 0.0f) { saturationToRemove = 1.0f; }

	if (_saturation <= _minSaturation) {}
	else if (_saturation - saturationToRemove <= _minSaturation)
	{
		_saturation = _minSaturation;
	}
	else
	{
		_saturation -= saturationToRemove;
	}
}
void Snake::Snake::IncreaseSpeed(float speedAmountToAdd)
{
	if (_speed + speedAmountToAdd > _maxSpeed)
	{
		_speed = _maxSpeed;
	}
	else
	{
		_speed += speedAmountToAdd;
	}
}

void Snake::Snake::DecreaseSpeed(float speedAmountToRemove)
{
	if (_speed - speedAmountToRemove < _minSpeed)
	{
		_speed = _minSpeed;
	}
	else
	{
		_speed -= speedAmountToRemove;
	}
}

void Snake::Snake::Heal(float healthAmount)
{
	if (healthAmount <= 0.0f) { healthAmount = 2.0f; }

	else if (_health + healthAmount >= _maxHealth)
	{
		_health = _maxHealth;
	}
	else
	{
		_health += healthAmount;
	}
}

void Snake::Snake::TakeDamage(float damageToTake)
{
	if (damageToTake <= 0.0f)
	{
		damageToTake = 1.0f;
	}
	if (_health <= _minHealth) { isAlive = false; isDead = true; }
	else if (_health - damageToTake <= _minHealth)
	{
		_health = _minHealth;
		isAlive = false;
		isDead = true;
	}
	else
	{
		_health -= damageToTake;
	}
}

void Snake::Snake::HungerRestart()
{
	StopSnakeTimers();

	StartHungerResistancePeriod();
}

void Snake::Snake::StopSnakeTimers()
{
	Invincibility->Stop();
	HungerPeriod->Stop();
	HealthDecreasePeriod->Stop();

	HealPeriod->Stop();
}

int Snake::Snake::GetLength()
{
	return _snakeLength;
}

float Snake::Snake::GetSpeed()
{
	return _speed;
}

float Snake::Snake::GetHealth()
{
	return _health;
}

float Snake::Snake::GetSaturation()
{
	return _saturation;
}

void Snake::Snake::SetLength(int Length)
{
	_snakeLength = Length;
}

void Snake::SnakeStatements::StatementsRestart()
{
	InvincibilityStatus = _default;
	HungerPeriodStatus = _default;
	HealthDecreasePeriodStatus = _default;

	HealPeriodStatus = _default;
}

void Snake::SnakeStatements::SetDefault(int Period)
{
	switch (Period)
	{
	case 0: InvincibilityStatus = _default; break;
	case 1: HungerPeriodStatus = _default; break;
	case 2: HealthDecreasePeriodStatus = _default; break;
	case 3: HealPeriodStatus = _default; break;
	default:
		break;
	}
}

void Snake::SnakeStatements::Activate(int Period)
{
	switch (Period)
	{
	case 0: InvincibilityStatus = _active; break;
	case 1: HungerPeriodStatus = _active; break;
	case 2: HealthDecreasePeriodStatus = _active; break;
	case 3: HealPeriodStatus = _active; break;
	default:
		break;
	}
}

void Snake::SnakeStatements::Deactivate(int Period)
{
	switch (Period)
	{
	case 0: InvincibilityStatus = _disactivated; break;
	case 1: HungerPeriodStatus = _disactivated; break;
	case 2: HealthDecreasePeriodStatus = _disactivated; break;
	case 3: HealPeriodStatus = _disactivated; break;
	default:
		break;
	}
}
