#include <iostream>
#include <algorithm>
using namespace std;

void print_vector(vector<int> &vec)
{
    for(int i : vec)
    {
        cout << i << "\t";
    }
}

int main()
{
    vector<int> first;

    vector<int> second(4, 10);
    print_vector(second);
    int arr[5] = {1, 3, 4, 5, 3};
    vector<int> third(arr, arr+6);
    print_vector(third);
}