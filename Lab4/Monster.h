#pragma once
#include <string>
using std::string;

class Monster
{
protected:
    string name;
    float health;
    float damage;
    float maxHealth;
    void setHealth(float health);


public:
    static int counter;

    Monster();
    Monster(string name, float health, float damage, float maxHealth);
    ~Monster();

   friend void test(const Monster& m);
   friend class AIMonster;
   static void resetCounter();
    string getName();
    void setName(string name);
    float getLevel();
    float getMaxHealth();
    float getHealth();
    void applyDamage(float damage);
    void applyDamage();
    void recovery();
    //передаем по ссылке
    void attack(Monster& m);
    //передаем по указателю
    void attack(Monster* m);
protected:
    void printWarning(std::string msg);
};

