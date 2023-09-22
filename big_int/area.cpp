#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void area(vector<int> &height)
{
    vector<int> copy;
    copy = height;
    sort(copy.begin(), copy.end(), greater<int>());
    copy.erase(unique(copy.begin(), copy.end()), copy.end());

    vector<int> i_max, n_max;
    int base = 0;

    for(int i = 0; i<height.size(); i++)
    {
        if (height.at(i) == copy[0])
        {
            i_max.push_back(i);
        } else if (height.at(i) == copy[1]) {
            n_max.push_back(i);
        }
    }

    for(int x: i_max)
    {
        for(int y: n_max)
        {
            base = max(base, abs(x - y));
        }
    }

    int area = base*copy[1];

    cout << area << endl;
    cout << copy[1] << endl;
    cout << base << endl;
}

int main()
{
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    area(height);
}