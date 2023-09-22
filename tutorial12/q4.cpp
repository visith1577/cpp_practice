#include <iostream>
#include <string>
using namespace std;

template <typename T>
class AddValues {
private:
    T sum;
public:
    AddValues() {
        sum = 0;
    }

    void add(T val) {
        sum += val;
    }

    T getTotal() {
        return sum;
    }
};

template<>
class AddValues<string> {
private:
    string str;
public:
    AddValues() {
        str = "";
    }

    void concatenate(string val) {
        str += val;
    }

    string getTotal() {
        return str;
    }
};

int main() {
    AddValues<int> intObj;
    intObj.add(1);
    intObj.add(2);
    intObj.add(3);
    cout << "Sum of integers: " << intObj.getTotal() << endl;

    AddValues<float> floatObj;
    floatObj.add(1.1);
    floatObj.add(2.2);
    floatObj.add(3.3);
    cout << "Sum of floats: " << floatObj.getTotal() << endl;

    AddValues<string> strObj;
    strObj.concatenate("Hello, ");
    strObj.concatenate("World!");
    cout << "Concatenated string: " << strObj.getTotal() << endl;

    return 0;
}
