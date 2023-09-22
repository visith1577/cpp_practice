#include <iostream>
#include <queue>
#include <list>

using namespace std;

class Graph {
    int V;
    list<int>* l;
    int dest;

public:
    explicit Graph(int v, int dst = -1){
        V = v;
        l = new list<int>[V];
        dest = dst;
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


    void BFS_shortestpath(int source)
    {
        queue<int> q;
        bool *visited = new bool[V]{false};

        q.push(source);
        visited[source] = true;
        int *dist = new int[V]{0};
        int *parent = new int[V]{0};


        for(int i = 0; i<V; i++)
        {
            parent[i] = -1;
        }
        parent[source] = source;
        dist[source] = 0;

        while(!q.empty()){
            int f = q.front();
            q.pop();

            for(auto nbr: l[f]){
                if(!visited[nbr]){
                    q.push(nbr);

                    parent[nbr] = f;
                    dist[nbr] = dist[f] + 1;
                    visited[nbr] = true;
                }
            }
        }

        // print shortest distance to all node
        for(int i = 0; i < V; i++)
        {
            cout<<"Shortest dist to "<<i<<" is "<<dist[i] << endl;
        }

        if(dest != -1)
        {
            int temp = dest;
            while(temp != source){
                cout<< temp << "---";
                temp = parent[temp];
            }
            cout << source << endl;
        }
    }
};



int main()
{
    Graph g(7, 6);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    g.addEdge(3, 4);
    g.addEdge(0, 4);
    g.addEdge(4, 5);
    g.BFS_shortestpath(1);
}