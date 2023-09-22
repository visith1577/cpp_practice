#include <iostream>
using namespace std;

void print_dec(int n){
    if(n==0){
        return;
    }

    cout<<n<<" , ";
    print_dec(n-1);
}

void print_inc(int n){
    if(n==0){
        return;
    }

    print_inc(n-1);
    cout << n << " , ";
}


int power(int n, int m){
    if(n==0) return 1;
    return n*power(n, m-1);
}

int power_faster(int n, int m){
    if(n==0) return 1;

    int subProblem = power_faster(n, m/2);
    int subProbSq = subProblem*subProblem;

    if(m&1){
        return n*subProbSq;
    } else {
        return subProbSq;
    }
}