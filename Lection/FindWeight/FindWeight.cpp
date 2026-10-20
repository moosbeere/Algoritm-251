// FindWeight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include  <vector>
#include <queue>

using std::string;
using std::vector;
using std::unordered_map;


bool checkSailer(string name);
bool checkPerson(string person, vector<string>& check);
void pushQueue(vector<string> arr, std::queue<string>& queue);

int main()
{
	unordered_map<string, vector<string>> graph;
	graph["you"] = { "alice", "bob", "claire" };
	graph["bob"] = { "anuj", "peggi" };
	graph["alice"] = { "peggi" };
	graph["claire"] = { "thom", "jonny" };
	graph["anuj"] = {};
	graph["peggi"] = {};
	graph["thom"] = {};
	graph["jonny"] = {};
	std::queue<string> queue;
	vector<string> check = {};

	pushQueue(graph["you"], queue);
	while (!empty(queue)) {
		string person = queue.front();
		queue.pop();
		if (checkPerson(person, check)) {
			if (checkSailer(person)) {
				std::cout << "It's sailer mango!\n";
				return true;
			}
			else {
				pushQueue(graph[person], queue);
			}
		}
	}

}
 
bool checkSailer(string name)
{
	if (name[name.size() - 1] == 'm') return true;
	return false;
}

bool checkPerson(string person, vector<string>& check)
{
	for(auto i: check) {
		if (i == person) return false;
	}
	check.push_back(person);
	return true;
}
void pushQueue(vector<string> arr, std::queue<string>& queue)
{
	for (auto a : arr) {
		queue.push(a);
	}
	

}
