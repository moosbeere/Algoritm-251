#include <iostream>
#include "Monster.h"
#include "AIMonster.h"
#include "Move.h"
#include "FlyMonster.h"
#include "CrawlingMonster.h"

using std::cout;
using std::string;


//дружественный метод
void test(const Monster& m)
{
    cout << "name " << m.name << "\n";
}

int Monster::counter = 0;

struct Item {
    string name;
    string description;
    float price = 0.0f;
};

void printItem(Item& item) {
    cout << "Name: " << item.name << "\n";
    cout << "Description: " << item.description << "\n";
    cout << "Price: " << item.price << "\n";
}

bool operator > (FlyMonster m1, FlyMonster m2) {
    return m1.getHealth() > m2.getHealth();
}

bool operator < (FlyMonster m1, FlyMonster m2) {
    return m1.getHealth() < m2.getHealth();
}

int main()
{
    setlocale(LC_ALL, "RU");
    //абстрактный класс
    FlyMonster f("Dragon", 10, 3, 20, 40);
    FlyMonster f2("Dragon", 10, 4, 20, 40);
    f2.attack(f);
    f.print();

    CrawlingMonster m3;

    m3.attack(f2);

    //перегрузка и виртуальные методы
    //FlyMonster f1("dragon", 10, 5, 20, 4);
    //FlyMonster f2("aeroflot", 20, 5, 20, 4);
    //cout << (f1 > f2) << "\n";
    //cout << (f1 < f2) << "\n";
    //FlyMonster sumF = f1 + f2;
    //sumF.print();

    //cout << (string)sumF << "\n";





    //наследование
    //FlyMonster fl;
    //cout << fl.getName() << "\n";
    //FlyMonster fl2("Dragon", 5,7,8,8);
    //fl2.fly();
    //cout << fl2.getHealth() << "\n";
    //Monster m1;
    //m1.print();
    //fl.print();

    //Monster monsters[] = { Monster(), FlyMonster(), FlyMonster() };
    //for (auto m : monsters) {
    //    m.print();
    //}

 /*   Monster* pmonsters[] = { new Monster(), new FlyMonster(), new FlyMonster() };
    for (Monster* m : pmonsters) {
        m->print();
        delete m;
    }*/


    //структура
    /*Item item;
    item.name = "Зелье здоровья";
    item.description = "Восстанавливает 50 единиц здоровья";
    item.price = 20.0;

    printItem(item);*/

    //перечисление
    /*Move::move(Direction::NORTH);
    Move::move(Direction::EAST);
    Move::move(Direction::WEST);
    Move::move(Direction::SOUTH);*/

    //Move::move(5);// ошибка

    //дружественный класс
    //Monster truck("Truck", 30, 20, 50);
    //AIMonster ai;
    //ai.move(&truck);
    //truck.applyDamage(40);
    //ai.move(&truck);


    //std::cout << truck.getLevel() << std::endl;
    //truck.applyDamage(10);
    //std::cout << truck.getHealth() << std::endl;
    //truck.applyDamage();
    //std::cout << truck.getHealth() << std::endl;
    //truck.recovery();
    //std::cout << truck.getHealth() << std::endl;
    //Monster lada("lada", 100, 20, 100);
    //lada.attack(truck);//позыв по сслыке
    //lada.attack(&truck);//позыв по указателю
    //std::cout << "attack: " << truck.getHealth() << std::endl;
    //lada.setHealth(-3);
    //std::cout << lada.getHealth() << std::endl;   
    //test(truck);
    //cout << "counter = " << Monster::counter << "\n";
    //Monster::resetCounter();
    //cout << "counter = " << Monster::counter << "\n";

    
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
