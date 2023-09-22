#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

void print_vector(vector<int> &vec)
{

}

int main()
{
    stack<string> books;
    queue<int> q;

    deque<int> first;
    deque<int> second(4, 100);
    deque<int> third(second.begin(), second.end());

    int myInts[] = {16, 17, 56, 78, 4, 22};

    int n = sizeof(myInts) / sizeof(int);
    deque<int> fifth (myInts, myInts+n);

    fifth.push_back(45);
    cout << fifth.back() << endl;
    fifth.push_front(32);
    cout << fifth.front() << endl;

    books.emplace("c++");
    books.emplace("Python");
    books.emplace("rust");

    while(!books.empty())
    {
        cout << books.top();
        books.pop();
    }

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    cout << "\n";
    
    priority_queue<int> heap;

    for(int x: myInts)
    {
        heap.push(x);
    }

    while(!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }
}