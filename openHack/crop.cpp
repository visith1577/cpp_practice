#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int a;
    int result = 0;
    cin >> n;
    vector<int> p;
    vector<int> loc;

    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        p.push_back(a);
    }

    while(!is_sorted(p.begin(), p.end(), greater<>())) {

        for (int i = 0; i < p.size(); i++) {
            if (p[i] < p[i + 1]) {
                if(i != p.size() -3 && p[i+2] < p[i+3]) p.erase(p.begin() + (i + 3));
                if(i != p.size() -2 && p[i+1] < p[i+2]) p.erase(p.begin() + (i + 2));
                if (i != p.size() - 1) p.erase(p.begin() + (i + 1));

            }
        }


        //for (auto item: p) {
        //    cout << item << endl;
        //}

        result++;
    }

    cout << result << endl;


    return 0;
}