#include <iostream>

using namespace std;

class ClassA{
public:
    int a;
};

class ClassB: virtual public ClassA{
public:
    int b;
};


class ClassC: virtual public  ClassA{
public:
    int c;
};

class ClassD: public ClassB, public ClassC {
public:
    int d;
};

int main(){
    ClassD obj;
    obj.a = 5; obj.a = 10;
    obj.b = 10; obj.c = 20;
    cout << "A in B: " <<obj.a;
    cout << "\t A in C: " <<obj.a;
    cout << "\t B: " <<obj.b;
    cout << "\t C: " <<obj.c;
}