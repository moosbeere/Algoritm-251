#pragma once
#include <list>

class HashTable
{
	int capacity;
	std::list<int>* table;
public:
	HashTable(int c);
	void insertItem(int key, int data);
	void displayHash();
	int hashFunction(int key);
	int getPrime(int n);
	bool checkPrime(int n);
};

