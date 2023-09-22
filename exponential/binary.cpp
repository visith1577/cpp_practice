#include <iostream>
#define int long long int
using namespace std;

const int mod = 1e9+7;

int pow(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b&1) res = res + a, res %= mod;
        a *= a; a %= mod;
        b /= 2;
    }
    return res;
}

int multiply(int a, int b, int c)
{
    int res = 1;
    while(b){
        if(b&1) res += a, res %= c;
        a += a; a %= c;
        b /= 2;
    }

    return res;
}