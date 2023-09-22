#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> map;

    map["cola"] = 180;
    map["milo"] = 120;
    map["Milk"] = 80;

    string item;
    cin>>item;

    if(map.count(item) == 0)
    {
        cout << "Item not in list";
    } else {
        cout << item << " is in list and costs " << map[item] << endl;
    }

    for(pair<string, int> item_: map)
    {
        cout << item_.first << " - " << item_.second << endl;
    }
}