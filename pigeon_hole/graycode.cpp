#include <iostream>
#include <vector>

using namespace std;

vector<int> grayCode(int n){
    vector<int> arr(1<<n);
    for(int i = 0; i < (1<<n); i++)
    {
        arr[i] = i^(n>>1);
    }

    return arr;
}


int main()
{
    for(int x: grayCode(2)) cout << x << '\n';
}