#include <iostream>
#include <vector>

using namespace std;

// for non - directed graphs the start or end vertex do not matter ( better to use vertex1 & vertex2 )
// for directed graphs start & end matters
// in non-directed graph edge list it is unnecessary to mention same two vertex pairs twice.
class Edge{
    string startVertex;
    string endVertex;
    int weight; // only in weighted graph
};

vector<Edge> edge_list;
vector<string> vertex_list;

// space complexity = O(no. of vertices)
// if we use vector<pair<int, string>> for vertex list space complexity = O(|v| + |e|)
// but the time complexity is lower

// time complexity of finding an edge = O(|e|)
// time complexity of finding if wo nodes are connected or not = O(|e|)
// O(|e|) == O(|v|*|v|) hence the cost is higher.

