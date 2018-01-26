#include<iostream>

using namespace std;

int main() 
{
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;

    double pi = 3.14159265359;
    double doubleRadius = 15123.123;
    double area = pi * doubleRadius * doubleRadius;

    // NOTE: cout rounds-off floating-point values. These two lines tell it to print out all 17 positions of a floating-point
    cout.precision(17);
    cout << fixed;

    cout << area << endl;

    float singlePi = 3.14159265359;
    float singleRadius = 15123.123;
    float singleArea = singlePi * singleRadius * singleRadius;

    cout << singleArea << endl;

    cout << (singleArea == area) << endl;

    return 0;
}
