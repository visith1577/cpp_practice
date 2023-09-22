#include <iostream>
#include <vector>
using namespace std;

int uniqueNo(const vector<int>& arr)
{
    int cur_xor = 0;

    for(int i : arr)
    {
        cur_xor = cur_xor^i;
    }

    return cur_xor;
}

int main()
{
    vector<int> arr = {2, 4, 5, 6, 4, 3, 5, 3, 2};

    cout << uniqueNo(arr) << endl;
}
