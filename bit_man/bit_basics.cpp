#include <iostream>

using namespace std;

void odd_even(int x)
{
    if(x&1)
    {
        cout << "odd";
    } else {
        cout << "even";
    }
}

int get_ith(int n, int i)
{
    int mask = (1<<i);
    return (n&mask) > 0 ? 1:0;
}

void clear_ith(int &n, int i)
{
    int mask = ~(1<<i);
    n = (n&mask);
}

void set_ith(int &n, int i)
{
    int mask = (1<<i);
    n = (n|mask);
}

void updateIthbit(int &n, int i, int v)
{
    clear_ith(n, i);
    int mask = (v<<i);
    n = n|mask;
}


void clearLastIthbits(int i, int &n)
{
    int mask = (-1<<i);
    n = n & mask;
}

void clearBitsInRange(int &n, int j, int i)
{
    int a = (~0)<<(j+1);
    int b = (1<<i) - 1;
    int mask = a|b;
    n = n & mask;
}

void replaceBits(int &n, int j, int i, int m)
{
    clearBitsInRange(n, j, i);
    int mask = (m<<i);
    n = n | mask;
}

int count_bits(int &n)
{
    int count = 0;
    while(n > 0)
    {
        int last_bit = (n&1);
        count += last_bit;

        n = n>>1;
    }
    return count;
}

int convert_to_binary(int n)
{
    int ans = 0;
    int p = 1;

    while(n>0)
    {
        int last_bit = (n&1);
        ans += p*last_bit;

        p = p*10;
        n = n>>1;
    }
    return ans;
}

int main()
{
    int x;

    cin >> x;
    odd_even(x);

    // check power of 2 ?

    if((x&(x-1)) == 0)
    {
        cout << "power of two" << endl;
    } else {
        cout << "Not a power of two" << endl;
    }
}