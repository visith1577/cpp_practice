#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void updateArray(array<int, 6> &arr, int i, int n)
{
    arr[i] = n;
}

int main() {
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    cout << arr.empty() << endl;
    cout << arr.size() << endl;
    cout << arr.at(3) << endl;
    cout << *arr.cbegin() << endl;
    cout << *arr.crbegin() << endl;
    cout << arr.max_size() << endl;

    updateArray(arr, 2, 89);
    cout << arr.at(2) << endl;
    sort(arr.begin(), arr.end());

    cout << arr.at(2) << endl;

    array<int, 10> fives = {};
    fives.fill(5);

    for(int x: fives)
    {
        cout << x;
    }


    return 0;
}
