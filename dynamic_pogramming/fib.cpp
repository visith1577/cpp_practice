#include <iostream>

using namespace std;


//// top-down dp
//int fib(int n, int dp[]){
//    if(n==0 or n==1){
//        return n;
//    }
//
//    if(dp[n]!=0){
//        return dp[n];
//    }
//
//    return dp[n] = fib(n-1, dp) + fib(n-2, dp);
//}
//
//// bottom up
//int fib2(int n){
//
//    int dp[n+1] = 0;
//    dp[0] = 0;
//    dp[1] = 1;
//
//    for(int i = 2; i<=n; i++){
//        dp[i] = dp[i-1] + dp[i-2];
//    }
//    return dp[n];
//}

template <typename T, typename U>
T myMax(T x, U y){
    return x*y;
}

int main(){
//    int x = 10;
//    try {
//        throw x;
//        cout << "p";}
//    catch (int y) {
//        cout << "Q" ; }
//    catch (...) {
//        cout << "R"; }
//    cout << "S";
    cout << myMax<int, int>(2, 3.5);
}