#pragma once
#include <string>
using std::string;

class Monster
{
private:
    string name;
    float health;
    float damage;
    float maxHealth;

public:
    static int counter;

    Monster(string name, float health, float damage, float maxHealth);
    ~Monster();

   friend void test(const Monster& m);
   friend class AIMonster;
   static void resetCounter();
    string getName();
    float getLevel();
    float getMaxHealth();
    float getHealth();
    void setHealth(float health);
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

