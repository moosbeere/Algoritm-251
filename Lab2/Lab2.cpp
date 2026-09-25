// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MyMath.h"

using std::cout;
using std::endl;
using namespace MyMath;

//макросы
#define PI 3.14f;
#define CIRCLE_AREA(r) (r)*(r)*PI; //3 + 1 * 3 + 1 * 3.14
#define RECTANGLE_AREA(a, b) a=a*b;

//функции
void sayHello(); //объ€вление функции
void print(int number);
int sum(int a, int b = 8);
int mult2(int& x);
void ABC(int& a, int& b, int &c);

void test() {
    static int x = 0;
    x++;
    cout << x << endl;
}

bool TMax(int x, int y) {
    return (x > y);
}

bool TMin(int x, int y) {
    return (x < y);
}

int main()
{
    //подключение внешних файлов
    float g = 0;
    //float g = MyMath::div(5, 4);
    g = sum(5, 4);
    //g = mult(5, 4);
    //g = sub(5, 4);
    cout << g;
    //макросы
    std::cin.get();


//#define PRT(s) cout<<s<<endl;
//    PRT("hello");
//#define CALL(f,x,y) T##f##(x, y);
//    bool z = CALL(Max, 10, 20);
//    PRT(z);
//
//
//    cout << PI;
//    cout << endl;
//    int x = 3;
//    int b = 5;
//    cout << CIRCLE_AREA(x+b);
//    RECTANGLE_AREA(x, b); // x = x*b;
//    cout << endl;

    //cout << x;

     
    //статические переменные
    /*test();
    test();
    test();*/

    //int arr[] = { 4,7,2,98,3 };
    //int length = size(arr);
    //for (int i = 0; i < length; i++) {
    //    if (i == 2) continue;
    //    if (i == 3) break;
    //    cout << arr[i] << ", ";
    //}
    //cout << endl;
    //for (auto i : arr) { //foreach
    //    cout << i << ", ";
    //}

    //cout << endl;
    //int a = 6;
    //while (a != 0 ) {
    //    cout << a << ", ";
    //    a--;
    //}
    //
    //cout << endl;
    //do {
    //    cout << a << ", ";
    //    a++;
    //} while (a < 6);

    //многомерный массив
   /* int m_arr [2][2] = {{1,2}, 
                        {3,4}};
    for (auto &one : m_arr) {
        for (auto two : one) {
            cout << two << ", ";
        }
        cout << endl;
    }*/

    //ссылки

   /* int x = 45;
    int& y = x;

    cout << y << endl;
    x = 50;
    cout << y << endl;
    y = 60;
    cout << x<< endl;*/

    //функции

    //sayHello(); // вызов функции
    //print(5);
    //int b = sum(3, 7);
    //cout << b;
    //number = 10;

    //функции и ссылки
    /*int x = 10;
    mult2(x);
    cout << x << endl;

    int a = 2;
    int b = 4;
    int c = 6;
    ABC(a,b,c);
    cout << a << " " << b << " " << c;*/
}

void sayHello() //реализаци€ функции
{
    cout << "Hello, World!" << endl;
}

void print(int number)
{
    cout << number << endl;
}

int sum(int a, int b)
{
    return a + b;
}

int mult2(int& x)
{
    return x = x * x;
    //pow(x, 2) //функци€ возведени€ в степень. 
}

void ABC(int& a, int& b, int& c)
{
    a = pow(a, 5);
    b = pow(b, 2);
    c = pow(c, 3);
}


