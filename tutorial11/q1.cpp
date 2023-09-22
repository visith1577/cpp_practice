#include <iostream>
using namespace std;


class cust_acc {
private:
    float acc_balance{};
    long int acc_number{};

public:
    cust_acc();
    cust_acc(long int, float);
    void deposit(float);
    void withdraw(float);
    void balance() const;
    ~cust_acc();
};

cust_acc::cust_acc() = default;

cust_acc::cust_acc(long int num, float balance) {
    acc_balance = balance;
    acc_number = num;
}

void cust_acc::withdraw(float amt) {

    float new_balance = acc_balance - amt;
    if (new_balance > 0) {
        acc_balance = new_balance;
    } else {
        acc_balance = 0;
    }
}

void cust_acc::balance() const {
    cout << acc_balance << endl;
}

void cust_acc::deposit(float amt) {
    acc_balance = acc_balance + amt;
}

cust_acc::~cust_acc() = default;


