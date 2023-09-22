#include <iostream>
#include <list>


using namespace std;

class Graph {
    int V;
    list<int>* l;

public:
    explicit Graph(int v){
        V = v;
        l = new list<int>[V];
    }

    void addEdge(int m, int n, bool unDir = true)
    {
        l[m].push_back(n);

        if(unDir) l[n].push_back(m);
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

    void dfsHelper(int node, bool *visited){
        visited[node] = true;
        cout << node << '\n';

        for(auto nbr: l[node]){
            if(!visited[nbr]) dfsHelper(nbr, visited);
        }
    }

    void DFS(int source)
    {
        bool *visited = new bool[V]{false};
        dfsHelper(source, visited);
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
    g.DFS(4);
}