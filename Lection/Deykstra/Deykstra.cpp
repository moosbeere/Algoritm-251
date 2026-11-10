// Deykstra.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <limits>
using std::string;
using std::unordered_map;

string find_lowest_cost_node(unordered_map<string, int> costs, std::vector<string> processor);
bool node_not_in_processor(std::vector<string> processor, string usel);

int main()
{
    std::unordered_map<std::string, std::unordered_map<std::string,int>> graph;
    //graph = {};
    graph["start"]["a"] = 6;
    graph["start"]["b"] = 2;
    graph["a"]["fin"] = 1;
    graph["b"]["fin"] = 5;
    graph["b"]["a"] = 3;

    int inf = std::numeric_limits<int>::max();
    std::unordered_map<std::string, int> costs;
    costs["a"] = 6;
    costs["b"] = 2;
    costs["fin"] = inf;

    std::unordered_map<std::string, std::string> parents;
    parents["a"] = "start";
    parents["b"] = "start";
    parents["fin"] = "";

    std::vector<std::string> processed = {};
    string node = find_lowest_cost_node(costs, processed);
    //std::cout << node;
    std::unordered_map<std::string, int> neighbors;
    while (!empty(node)) {
        neighbors = graph[node];
        int cost = costs[node];
        for (auto elem : neighbors) {
            int new_cost = cost + elem.second;
            if (costs[elem.first] > new_cost) {
                costs[elem.first] = new_cost;
                parents[elem.first] = node;
            }
        }
        processed.push_back(node);
        node = find_lowest_cost_node(costs, processed);
    }
    
    for (auto elem : parents) {
        std::cout << elem.first << " => " << elem.second << "\n";
    }
}

string find_lowest_cost_node(unordered_map<string, int> costs, std::vector<string> processor) {
    int lower_cost = std::numeric_limits<int>::max();
    string lower_cost_node = "";
    for (auto elem : costs) {
        if (elem.second < lower_cost && !node_not_in_processor(processor, elem.first)) {
            lower_cost = elem.second;
            lower_cost_node = elem.first;
        }
    }
    return lower_cost_node;
}
bool node_not_in_processor(std::vector<string> processor, string usel) {
    for (auto elem : processor) {
        if (elem == usel) return true;
    }
    return false;
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
