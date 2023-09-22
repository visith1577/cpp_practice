#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// when number of pigeons > number of pigeons then there will be at least one pigeonhole with two pigeons


int numSubsets(vector<int> &nums, int k)
{
    int count = 0;
    int sum = 0;
    unordered_map<int, int> mp;
    mp[sum]++;

    for(int num: nums){
        sum = (sum + num) % k;

        if(mp.find(sum) != mp.end()){
            count += mp[sum]++;
        } else {
            mp[sum]++;
        }
    }

    return count;
}


bool hasSubsets(vector<int> &nums, int k){
    if(numSubsets(nums, k)){
        return false;
    } else {
        return true;
    }
}


int main()
{
    vector<int> arr = {1, 3, 4, 2, 5, 6, 7, 4};
    int k = 5;

    cout << hasSubsets(arr, k);
}