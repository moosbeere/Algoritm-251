// HashTable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <unordered_set>
using std::cout;
using std::cin;

int main()
{
   /* std::unordered_set<std::string> voted;
    voted.insert("olga");
    std::string name;
    cout << "Enter your name: ";
    cin >> name;
    auto it = voted.find(name);
    if (it == voted.end()) {
        voted.insert(name);
        cout << "Welcome!";
    }
    else {
        cout << "Go out!";
    }*/




    std::unordered_map<std::string, int> phone_book;
    phone_book["olga"] = 965;
    phone_book["lena"] = 903;
    phone_book["rita"] = 905;
    phone_book["mira"] = 967;
    phone_book["masha"] = 987;

    //auto id = phone_book.insert({ "ab", 654 });
    //cout << id.second << "\n";
    //for (auto& elem : phone_book) {
    //    cout << elem.first << "=>" << elem.second << "\n";
    //}
    ////phone_book.erase("ab");
    ////for (auto& elem : phone_book) {
    ////    cout << elem.first << "=>" << elem.second << "\n";
    ////}
    //cout << phone_book.at("olga");
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
