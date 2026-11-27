#pragma once
#include "Monster.h"
class FlyMonster:
    public Monster
{
public:
    FlyMonster(string name, float health, float damage, float maxHealth, float flySpeed);
    FlyMonster();
    void fly();
    float getFlySpeed();
    void print() override;
    FlyMonster operator +(FlyMonster& f);
    explicit operator string() const;//запрещает неявное преобразование такого типа 
    //string s = flymonster; нужно string s = (string)flymonster;
    bool operator == (FlyMonster& m);
    bool operator != (FlyMonster& m);
    void attack(Monster& m) override;

private:
    float flySpeed;
};

