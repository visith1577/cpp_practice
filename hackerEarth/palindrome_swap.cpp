#include<bits/stdc++.h>
using namespace std;

bool make_equal (string t, string s) {

    int n = s.length();

    int p=0;
    for( int i=0;i<=(t.size()/2)-1;i++){
        unordered_map<char,int>mp;
        mp[t[i]]++;
        mp[s[i]]++;
        mp[s[n-i-1]]++;
        mp[t[n-i-1]]++;
        // cout<<mp.size();
        if(mp.size()>2)return false;
        p++;
    }
    if(n%2)if(s[p]==t[p])return true;
        else return false;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    string T;
    cin >> T;
    string S;
    cin >> S;

    bool out_;
    out_ = make_equal(T, S);
    cout << (out_ ? "YES" : "NO");
}
