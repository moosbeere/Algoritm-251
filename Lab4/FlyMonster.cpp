#include <iostream>
#include "FlyMonster.h"



FlyMonster::FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed):
			Monster(name, health, damage, maxHealth)
{
	this->flySpeed = flySpeed;
}

FlyMonster::FlyMonster()
{
	FlyMonster("FlyMonst", 1, 1, 5, flySpeed);
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

void FlyMonster::print()
{
	Monster::print();
	std::cout << "FlySpeed " << flySpeed << "\n";
}

FlyMonster FlyMonster::operator+(FlyMonster& f)
{
	return FlyMonster(this->name, this->health + f.health,
		this->damage + f.damage, this->maxHealth + f.maxHealth,
		this->flySpeed + f.flySpeed);
}

FlyMonster::operator string() const
{
	//this->name = "new name"; не можем менять значения свойств объекта
	return name + " " + std::to_string(health);
}

bool FlyMonster::operator==(FlyMonster& m)
{
	return m.getName() == this->getName();
}

bool FlyMonster::operator!=(FlyMonster& m)
{
	return m.getName() != this->getName();
}

void FlyMonster::attack(Monster& m)
{
	m.applyDamage(this->damage);
}

