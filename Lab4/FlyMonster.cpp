#include <iostream>
#include "FlyMonster.h"



FlyMonster::FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed):
			Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

FlyMonster::FlyMonster()
{
	FlyMonster("FlyMonster", 1, 1, 5, flySpeed);
}


void FlyMonster::fly()
{
	setHealth(getHealth() - 1);
	std::cout << name << " is flying!\n";
}

float FlyMonster::getFlySpeed()
{
	return flySpeed;
}
