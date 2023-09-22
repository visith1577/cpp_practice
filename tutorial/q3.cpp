#include <iostream>
#include <cmath>
using namespace std;

double area(double S)
{
    return S*S;
}


double area(double L, double B)
{
    return L*B;
}

double area(double R, bool isCircle)
{
    return M_PI * pow(R, 2);
}


double area(double base, double height, bool isTriangle)
{
    return 0.5*base*height;
}


int main()
{
    double S, L, B, R, base, height;
    cout << "Enter a side of a square:";
    cin >> S;
    cout << "Enter a side of a rectangle:";
    cin >> L >> B;
    cout << "Enter a side of a Circle:";
    cin >> R;
    cout << "Enter a side of a triangle:";
    cin >> base >> height;


    cout << "Area of square is " << area(S) << endl;
    cout << "Area of rectangle is " << area(L, B) << endl;
    cout << "Area of circle is " << area(R, true) << endl;
    cout << "Area of square is " << area(base, height, true) << endl;
}