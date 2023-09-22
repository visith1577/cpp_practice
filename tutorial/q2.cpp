#include <iostream>

using namespace std;

class Calculator{
    int A, B;
public:
    Calculator(int a, int b)
    {
        A = a;
        B = b;
    }

    void Add() const
    {
        cout << "Result: " << A+B << endl;
    }

    void Subtract() const
    {
        cout << "Result: " << A-B << endl;
    }

    void Multiply() const
    {
        cout << "Result: " << A*B << endl;
    }

    void Divide() const
    {
        cout << "Result: " << A/B << endl;
    }

    void Modulus() const
    {
        cout << "Result: " << A%B << endl;
    }
};

int main()
{
    int a, b, x;

    cout << "1. Add" << '\n';
    cout << "2. Subtract" << '\n';
    cout << "3. Multiply" << '\n';
    cout << "4. Divide" << '\n';
    cout << "5. Modulo" << '\n';

    cout << "Enter your choice: ";
    cin >> x;

    cout << "Enter your two numbers: ";
    cin >> a >> b;

    Calculator calc = Calculator(a, b);

    switch(x){
        case 1:
            calc.Add();
            break;
        case 2:
            calc.Subtract();
            break;
        case 3:
            calc.Multiply();
            break;
        case 4:
            calc.Divide();
            break;
        case 5:
            calc.Modulus();
            break;
        default:
            cout << "Invalid option" << endl;
    }


}