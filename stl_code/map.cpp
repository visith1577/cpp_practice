#include <iostream>
#include <map>
#include <list>
#include <string>

using namespace std;

int main()
{
    map<string, list<string>> phonebook;

    phonebook["Visith"].emplace_back("02455332");
    phonebook["Visith"].emplace_back("879003889");
    phonebook["Visith"].emplace_front("22232222");
}