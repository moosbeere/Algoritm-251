#include <iostream>
#include "HashTable.h"

HashTable::HashTable(int c)
{
    int size = getPrime(c);
    capacity = size;
    table = new std::list<int>[size];
}

void HashTable::insertItem(int key, int data)
{
    int index = hashFunction(key);
    table[index].push_back(data);
}

void HashTable::displayHash()
{
    for (int i = 0; i < capacity; i++) {
        std::cout << "table[" << i << "]";
        for (auto x : table[i]) {
            std::cout << "-->" << x;
        }
        std::cout << std::endl;
    }
}

int HashTable::hashFunction(int key)
{
    return key % capacity;
}

int HashTable::getPrime(int n)
{
    if (n % 2 == 0) n++;
    while (!checkPrime(n)) {
        n += 2;
    }
    return n;
}

bool HashTable::checkPrime(int n)
{
    if (n <= 1) return false;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
