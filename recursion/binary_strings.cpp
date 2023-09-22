#include <iostream>
using namespace std;

int no_of_strings_with_no_consecutive_ones(int n){
    if(n==0 || n==1){
        return n+1;
    }
    return no_of_strings_with_no_consecutive_ones(n-1) + no_of_strings_with_no_consecutive_ones(n-2);
}

int friend_pairing(int n){
    if(n==0 || n==1) return 1;
    return friend_pairing(n-1) + (n-1)* friend_pairing(n-2);
}
