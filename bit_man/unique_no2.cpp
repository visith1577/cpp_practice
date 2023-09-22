#include <iostream>
#include <vector>

using namespace std;

void unique_num2(const vector<int>& arr)
{
    int result = 0;
    for(int x: arr)
    {
        result = result^x;
    }

    int pos = 0;
    int temp = result;
    while((temp&1) == 0)
    {
        pos++;
        temp = temp>>1;
    }

    int setA = 0;
    int setB = 0;
    int mask = (1<<pos);

    for(int i: arr)
    {
        if((i & mask) > 0)
        {
            setA = setA^i;
        } else {
            setB = setB^i;
        }
    }

    cout << setA << endl;
    cout << setB << endl;
}


int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 3, 2, 5, 6};
    unique_num2(arr);
}