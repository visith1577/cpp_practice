#include <iostream>
using namespace std;

bool isSorted(int arr[], int n){
    if(n == 1 || n == 0){
        return true;
    }

    if (arr[0] < arr[1] && isSorted(arr+1, n-1)) return true;
    return false;
}

int main()
{
    int arr[5] = {3, 4, 6, 2, 6};
    int n = sizeof(arr)/sizeof(int);
    cout << isSorted(arr, n) << endl;
}
