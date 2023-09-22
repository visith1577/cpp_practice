#include <iostream>

using namespace std;


class Money {

public:
    Money(unsigned int  d = 0, unsigned int c = 0);
    Money operator+(const Money& op2) const; // addition operator
    Money& operator++(); // increment operator

private:
    unsigned int dollars;
    unsigned int cents;
};

Money::Money(unsigned int d, unsigned int c) {
    dollars = d;
    cents = c;
}

Money Money::operator+(const Money &op2) const {
    unsigned int total_cents = cents + op2.cents;
    unsigned int carry = total_cents / 100;
    total_cents = total_cents % 100;
    unsigned int total_dollars = dollars + op2.dollars + carry;
    return Money(total_dollars, total_cents);
}

Money &Money::operator++() {
    dollars++;
    return *this;
}

int main(){
    Money amount1(1, 50), amount2(2, 60);
    Money amount3;
    amount3 = amount1 + amount2;
    ++amount3;
    return 0;
}