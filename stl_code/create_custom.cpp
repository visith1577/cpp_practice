#include <iostream>
#include <queue>
using namespace std;

class Compare
{
public:
    bool operator()(int a, int b)
    {
        return a < b;
    }
};

int main()
{
    int arr[6] = {34, 56, 23, 12, 76, 66};
    priority_queue<int, vector<int>, Compare> heap ;

    for(int x: arr)
    {
        heap.push(x);
    }

    while(!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }
}