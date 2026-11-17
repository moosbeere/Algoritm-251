// Greedy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <set>
#include <string>
#include <unordered_map>
#include <algorithm>
using std::string;
using std::set;
using std::unordered_map;

int main()
{
    set<string> states_needed = {"mt", "wa", "or", "id", "nv", "ut", "ca", "az"};
    unordered_map<string, set<string>> stations = {};
    stations["kone"] = { "id", "nv", "ut" };
    stations["ktwo"] = {"wa", "id", "mt"};
    stations["kthree"] = {"or", "nv", "ca"};
    stations["kfour"] = { "nv", "ut" };
    stations["kfife"] = { "ca", "az" };
    set<string>final_stations = {};

    while (!states_needed.empty()) {
        string best_station = "";
        set<string> states_covered = {};
        for (auto& states_for_station : stations) {
            set<string> covered = {};
            set_intersection(states_needed.begin(), states_needed.end(),
                states_for_station.second.begin(), states_for_station.second.end(),
                inserter(covered, covered.begin()));
            if (covered.size() > states_covered.size()) {
                best_station = states_for_station.first;
                states_covered = covered;
            }
        }
        for (auto& elem : states_covered) {
            states_needed.erase(elem);
        }
        final_stations.insert(best_station);
    }

    for (auto elem : final_stations) {
        std::cout << elem << "\n";
    }

    while (!states_needed.empty()) {
        string best_stations = "";
        set<string> states_covered = {};
        for (auto& states_for_station : stations) {
            set<string> covered = {};
            std::set_intersection(states_needed.begin(), states_needed.end(),
                states_for_station.second.begin(), states_for_station.second.end(),
                std::inserter(covered, covered.begin()));
            if (covered.size() > states_covered.size()) {
                best_stations = states_for_station.first;
                states_covered = covered;
            }
            for (auto elem : states_covered) {
                states_needed.erase(elem);
            }
            final_stations.insert(best_stations);
        }
    }
    for (auto elem : final_stations) {
        std::cout << elem << "\n";
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
