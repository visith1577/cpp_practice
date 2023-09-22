// int is also represented as string in production level
// time complexity os O(m)
// (n - m) * m matches
// (n - n/) * n/2
// O(nm) or O(n^2)

#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string text = "ababaababbbbabaaa";
    string pat = "aa";

    int m = pat.size();
    int n = text.size();

    for(int i = 0; i+m <= n; i++)
    {
        if (text.substr(i, m) == pat){
            cout << i << '\n';
        }
    }

    return 0;
}