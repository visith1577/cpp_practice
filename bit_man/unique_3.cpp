#include <iostream>
#include <vector>

using namespace std;

void update_sum(vector<int> &arr, int x)
{
    for(int i = 0; i < 32; i++)
    {
        int ith_bit = x & (1<<i);
        if(ith_bit)
        {
            arr[i]++;
        }
    }
}

int num_from_bits(vector<int> &sumArr)
{
    int num = 0;
    for(int i =0; i < 32; i++)
    {
        num += (sumArr[i] * (1<<i));
    }
    return num;
}


int find_unique(const vector<int>& arr)
{
    vector<int> sumArr(32, 0);
    for(int x: arr)
    {
        update_sum(sumArr, x);
    }

    for(int i = 0; i < 32; i++)
    {
        sumArr[i] = sumArr[i]%3;
    }

    return num_from_bits(sumArr);
}

int main()
{

}