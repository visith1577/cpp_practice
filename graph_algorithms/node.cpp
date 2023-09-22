#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Node {
public:
    string name;
    vector<string> nums;

    explicit Node(string name){
        this->name = std::move(name);
    }
};


class Graph{
    unordered_map<string, Node*> m;

public:
    explicit Graph(const vector<string>& cities){
        for(const auto& city: cities)
        {
            m[city] = new Node(city);
        }
    }

    void addEdge(string x, string y, bool unDir = true)
    {
        m[x]->nums.push_back(y);
        if(unDir){
            m[y]->nums.push_back(x);
        }
    }

    void printAdjList()
    {
        for(const auto& cityPair: m){
            auto city = cityPair.first;
            Node *node = cityPair.second;
            cout << city << "---->";
            for(const auto& nbr: node->nums){
                cout << nbr << ",";
            }
            cout << endl;
        }
    }
};

int main()
{

}