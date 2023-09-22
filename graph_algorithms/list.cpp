#include <iostream>
#include <list>
using namespace std;


// create array of lists

class Graph{

    int V;
    list<int> *l;

public:
    explicit Graph(int v)
    {
        V = v;
        l = new list<int>[v];
    }

    void addEdge(int i, int j, bool unDir=true)
    {
        l[i].push_back(j);
        if(unDir) l[j].push_back(i);
    }

    void printAdjust(){
        for(int i = 0; i < V; i++)
        {
            cout << i << "-----";
            for(auto node: l[i])
            {
                cout << node << '\n';
            }
        }
    }
};

int main()
{
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.addEdge(4, 5);
}