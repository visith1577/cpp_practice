#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> pairSum(vector<int> arr, int sum)
{
    unordered_set<int> s;
    vector<int> result;

    for(int i : arr)
    {
        int x = sum - i;
        if(s.find(x) != s.end())
        {
            result.push_back(i);
            return result;
        }
        s.insert(i);
    }
    return {};
}