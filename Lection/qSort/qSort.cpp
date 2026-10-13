// qSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using std::cout;

void qSort(int data[], int start, int end) {
    if (start >= end) return;
    int current{start}; //int current = start
    for (int i = start + 1; i <= end; i++) {
        if (data[i] < data[start]) std::swap(data[i], data[++current]);
    }
    std::swap(data[start], data[current]);
    if (current > start) {
        qSort(data, start, current - 1);
    }
    if (end > current) {
        qSort(data, current + 1, end);
    }
}


int main()
{
    int arr[] = { 4,3,7,2,9,6 };
    qSort(arr, 0, std::size(arr)-1);
    for (int a : arr) {
        cout << a << " ";
    }
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
