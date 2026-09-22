// SelectionSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;


int findMin(vector<int> arr, int x) {
	int min_element = arr[x];
	int min_index = x;
	for (int i = x; i < arr.size(); i++) {
		if (arr[i] < min_element) {
			min_element = arr[i];
			min_index = i;
		}
	}
	return min_index;
}
vector<int> selectionSort(vector<int> sort) {
	for (int i = 0; i < sort.size(); i++) {
		int min_index = findMin(sort, i);
		int temp = sort[i];
		sort[i] = sort[min_index];
		sort[min_index] = temp;
	}
	return sort;
}


int main()
{
	vector<int> arr = { 5, 87, 23, 4, 21, 6 };
	vector<int> sort = selectionSort(arr);
	for (int a : sort) cout << a << ", ";
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
