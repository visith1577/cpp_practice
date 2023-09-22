#include <iostream>
 using namespace std;


template<typename T>
T Max(T x, T y){
    return (x>y)? x:y;
}

int main()
{
      cout << Max<int>(3, 7) << ", ";
      cout << Max<char>('h', 'f')<<endl;
    return 0;
}