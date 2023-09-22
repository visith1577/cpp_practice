#include <iostream>
#include <utility>

using namespace std;

template<typename T>
T print(T x){
    return x;
}

template<typename T, typename U = char>
void status(T num, U c){
    cout << "Num: " << num << "*" << c << endl;
}

int main(){
    auto x = print<float>(3.0);
    status<float>(x, 'c');
}