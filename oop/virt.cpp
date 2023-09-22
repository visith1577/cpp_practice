#include <iostream>
using namespace std;


// virtual functions give you the ability of runtime polymorphism
// it allows us to execute the most derived version of that function is executed
// pure virtual functions -> the base class do not have the implementation, but it should make sure all
// child classes will make an implementation if it inherits base class

class Instrument{
public:
    virtual void make_sound() = 0;
//    {
//        cout << "Paying instrument..." << endl;
//    }
};

class Accordion: public Instrument{
public:
    void make_sound() override{
        cout << "PLaying Accordion" << endl;
    }
};

int main(){
    Instrument *il = new Accordion();
    il->make_sound();
}