#include "Monster.h"
#include <iostream>

Monster::Monster(string name, float health, float damage, float maxHealth) :
	name(name), health(health), damage(damage), maxHealth(maxHealth) 
{
	counter++;
}

Monster::~Monster()
{
	std::cout << "Объект уничтожается" << std::endl;
}

void Monster::resetCounter()
{
	counter = 0;
}

string Monster::getName()
{
	return name;
}

float Monster::getLevel() {
	return this->maxHealth / 5;
}
float Monster::getMaxHealth() {
	return maxHealth;
}
float Monster::getHealth() {
	return health;
}
void Monster::setHealth(float health)
{
	if (health > maxHealth) this->health = maxHealth;
	else if (health >= 0) this->health = health;
	else this->printWarning("health < 0");
}

void Monster::applyDamage(float damage) {
	health -= damage;
}
void Monster::applyDamage() {
     applyDamage(1);
}
void Monster::recovery() {
    health = maxHealth;
}
//передаем по ссылке
void Monster::attack(Monster& m) {//если мы не хотим менять объект внутри метода, то передаем его как 
	                             //константную ссылку const Monster& 
	m.applyDamage(damage);
}
//передаем по указателю
void Monster::attack(Monster* m) {
	m->applyDamage(damage);
}

void Monster::printWarning(std::string msg)
{
	std::cout << "Warning, " << msg << std::endl;
}
