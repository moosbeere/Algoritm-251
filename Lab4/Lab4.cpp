// Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//memory
//Monster() {
    //    name = "Tiger";
    //    health = 10;
    //    damage = 5;
    //}

   /* Monster(std::string name, float health, float damage) {
        this->damage = damage;
        this->health = health;
        this->name = name;
    }*/
    /*Monster() : Monster("Goblin", 12, 2) {};*/


#include <iostream>


class Monster {
public:
    std::string name;
    float health;
    float damage;
    float maxHealth;
    
    Monster(std::string name, float health, float damage, float maxHealth) : name(name), health(health), damage(damage), maxHealth(maxHealth) {};
    ~Monster() {
        std::cout << "Объект уничтожается" << std::endl;
    };

    float getLevel() {
        return maxHealth / 5;
    }

};

int main()
{
    setlocale(LC_ALL, "RU");
    Monster truck("Truck", 30, 20, 50);
    std::cout << truck.getLevel() << std::endl;




    //Monster m2();
    //Monster m1("Leo", 3, 4);
    //Monster m = Monster("Zebra", 10, 30);
    ////m.name = "Monster";
    //std::cout << m.name << std::endl;

    //Monster copy = m1;
    //std::cout << copy.damage << " " << copy.name << " " << copy.health << std::endl;
    //m1.name = "Goblin";
    //std::cout << copy.damage << " " << copy.name << " " << copy.health << std::endl;
    //if (true) {
    //    Monster* truck = new Monster("Truck", 45, 3);
    //    delete truck;
    //}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
