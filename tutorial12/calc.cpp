#include <iostream>
using namespace std;

template <class T>
class Calculator {
public:
    T num1, num2;

    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 == 0) {
            cout << "Cannot divide by zero!";
            return 0;
        } else {
            return num1 / num2;
        }
    }
};

int main() {
    string input;

    cout << "Enter a value: ";
    getline(cin, input); // take input as string
    bool isFloat = false;

    string num2;
    cout << "Enter a value: ";
    getline(cin, num2);

    // check if string contains a float
    for (char c : input) {
        if (c == '.') {
            isFloat = true;
            break;
        }
    }

    // check if string contains an integer
    if (!isFloat) {
        for (char c : input) {
            if (!isdigit(c)) {
                cout << "Invalid input - not an integer or float." << endl;
                return 0;
            }
        }
        int num = stoi(input);
        int num1 = stoi(num2);
        Calculator<int> intCalc(num1, num);
        cout << "Integers:" << endl;
        cout << intCalc.num1 << " + " << intCalc.num2 << " = " << intCalc.add() << endl;
        cout << intCalc.num1 << " - " << intCalc.num2 << " = " << intCalc.subtract() << endl;
        cout << intCalc.num1 << " * " << intCalc.num2 << " = " << intCalc.multiply() << endl;
        cout << intCalc.num1 << " / " << intCalc.num2 << " = " << intCalc.divide() << endl;
    }
    else {
        float num = stof(input);
        float num1 = stof(num2);

        Calculator<float> floatCalc(num, num1);
        cout << "Floats:" << endl;
        cout << floatCalc.num1 << " + " << floatCalc.num2 << " = " << floatCalc.add() << endl;
        cout << floatCalc.num1 << " - " << floatCalc.num2 << " = " << floatCalc.subtract() << endl;
        cout << floatCalc.num1 << " * " << floatCalc.num2 << " = " << floatCalc.multiply() << endl;
        cout << floatCalc.num1 << " / " << floatCalc.num2 << " = " << floatCalc.divide() << endl;
    }

    return 0;
}
