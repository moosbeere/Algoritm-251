// Lab3.cpointerpointer : This file contains the 'main' function. pointerrogram execution begins and ends there.
//

#include <iostream>
using std::cout;
using std::endl;

void separator() {
    cout << "\n---------\n";
}

void printArray(int arr[], int len) {
    //for (int i = 0; i < len; i++) {
    //    cout << arr[i] << ", ";
    //}
    for (int* pArr = arr; pArr <= &arr[len - 1]; pArr++) {
        cout << *pArr << ", ";
    }
}

void printArray_2(int* begin, int* end) {
    for (begin; begin <= end; begin++) {
        cout << *begin << ", ";
    }
}

const int cols = 2;

//int (*array)[cols] указатель на массив массивов
//int* array[] массив указателей

void printMatriza(int (*array)[cols], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << array[i][j] << ", ";
    }
}


void function1() {
    cout << "function1" << endl;
}

void function2() {
    cout << "function2" << endl;
}



float sub(float a, float b) {
    return a - b;
}

int getMax(int array[], int length, bool(*compare)(int, int)) {
    int max = array[0];
    for (int i = 1; i < length; i++) {
        if (compare(array[i], max)) max = array[i];
    }
    return max;
}

bool max(int x, int y) {
    if (x > y) return true;
}
bool min(int x, int y) {
    if (x < y) return true;
}

void negative() {
    cout << "-\n";
}

void positive() {
    cout << "+\n";
}
float add(float a, float b) {
    return a + b;
}

void(*function(int x))() {
    if (x < 0) return negative;
    else return positive;
}

float (*funcChar(char c))(float, float) {
    if (c == '+') return add;
    else if(c=='-') return sub;
};

int* test() {
    return new int(13);
}

int main()
{
    //Динамические объекты
    int* x = new int(25);
    cout << *x;
    delete x;
    int* z = test();
    cout << z << " = " << *z << "\n";
    delete z;
    //delete z;

    int* array = new int[3] {2, 3, 4};
    for (int* i = array; i < array + 3; i++) {
        cout << *i << ", ";
    }
    delete[] array;

    //Функции и массивы
    // указатель на функцию
    //int array[] = { 3, -6, 2, 6, 7 };
    //cout << getMax(array, 5, max);
    //function(-3)();

    //cout << funcChar('-')(3, 3);
    

    /*float (*operation)(float, float);
    operation = add;
    cout << operation(3, 6) << "\n";

    operation = sub;
    cout << operation(3, 6);*/

    //void (*pf)() = function1;
    //void (*pmasf[])() = {function1, function2};
    //pmasf[0]();
    ////pf();
    //pf = function2;
    //pf();
     
     
    // двумерные массивы
    /*int matriza[3][2] = { {2,3}, {4,5}, {6,7} };
    printMatriza(matriza, std::size(matriza[0]));*/
    
    //массивы
    /*int arr[] = {3,5,2,7,7};
    cout << std::begin(arr);
    separator();
    int len = std::size(arr);
    printArray(arr, len);
    separator();
    printArray_2(std::begin(arr), std::end(arr));*/


    //setlocale(LC_ALL, "RUS");
    //int* pointer;
    //int a = 25;
    //pointer = &a;
    //cout << "Адрес указателя  " << pointer;
    //cout << endl;
    //cout << "Разименовывание указателя  " << *pointer;
    //cout << endl;

    //pointer++;//Инкремент
    //cout << "Инкремент по указателю   " << pointer;
    //cout << endl;
    //cout << "Разименовывание указателя  " << *pointer;
    //pointer--;//декремент
    //cout << endl;

    //cout << "Декремент по указателю   " << pointer;
    //cout << endl;
    //cout << "Разименовывание указателя  " << *pointer;

    //int mult = *pointer * 2;
    //cout << endl << mult << endl;

    //int array[] = { 5,2,7,2,9 };
    //cout << "*Array   " << *array << endl;

    //for (int i = 0; i < 5; i++) {
    //    cout << *(array + i) << ", ";// аналог cout << array[i] << ", ";
    //}

    //cout << endl;
    //for (int* pntr = array; pntr <= &array[4]; pntr++) {
    //    cout << *pntr << ", ";
    //}

    //int matriza[3][2] = {{2,3}, {4,5}, {6,7}};

    //cout << matriza << endl;
    //int row = std::size(matriza);
    //int colomn = std::size(matriza[0]);

    //int* end = matriza[0] + row * colomn - 1;

    //for (int* pntr = matriza[0]; pntr <= end; pntr++) {
    //    cout << *pntr << ", ";
    //}

    //cout << endl;
    //char chars[] = "String";
    ////cout << chars[3];
    //char* pchars = chars;
    //cout << (void*)pchars; // для определения адреса указателя на массив символов

    //const float PI = 3.14f;
    //const float* const pPI = &PI;
    //float f = 0.6f;
    //cout << endl;   
    ////pPI = &f;
    ////*pPI = 0.6f;
    //cout << *pPI;

    
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


