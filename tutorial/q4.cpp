#include <iostream>
using namespace std;

class Counter {
    int a, b;

public:
    Counter(int x, int y)
    {
        a = x;
        b = y;
    }

    int getCount1() const
    {
        return a;
    }

    int getCount2() const
    {
        return b;
    }

    Counter operator ++(){
        ++a;
        ++b;
        return *this;
    }

    Counter operator-- (){
        --a;
        --b;
        return *this;
    }
};


int main()
{
    int a, b;

    cout << "Enter two numbers : " << endl;
    cin >> a;
    cin >> b;

    Counter c = Counter(a, b);

    cout << "After Decrementing" << endl;
    --c;
    cout << c.getCount1() << endl;
    cout << c.getCount2() << endl;
    ++c;
    cout << "After Increment" << endl;
    ++c;
    cout << c.getCount1() << endl;
    cout << c.getCount2() << endl;
}
