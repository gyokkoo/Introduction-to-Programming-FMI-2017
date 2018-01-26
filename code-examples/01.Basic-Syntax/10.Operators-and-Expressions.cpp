#include<iostream>
using namespace std;

int main() 
{
    {
        int squarePerimeter = 17;
        double squareSide = squarePerimeter / 4.0;
        double squareArea = squareSide * squareSide;
        double squareSideWronglyCalculated = squarePerimeter / 4;
        cout << squareSideWronglyCalculated << endl;
        cout << squareSide << endl;
        cout << squareArea << endl;
    }

    cout << "---" << endl;

    {
        cout << 1.5 / 0.0 << endl;;  // inf
        cout << -1.5 / 0.0 << endl;; // -inf
        cout << 0.0 / 0.0 << endl;;  // nan
    }

    cout << "---" << endl;

    {
        bool a = true;
        bool b = false;
        cout << (a && b) << endl; // false
        cout << (a || b) << endl; // true
        cout << (a ^ b) << endl; // true
        cout << (!b) << endl; // true
        cout << (a == b) << endl; // true
    }

    cout << "---" << endl;

    {
        int a = 3;                // 00000000 00000011
        int b = 5;                // 00000000 00000101
        cout << ( a | b) << endl; // 00000000 00000111
        cout << (a & b) << endl;  // 00000000 00000001
        cout << (a ^ b) << endl;  // 00000000 00000110
    }

    cout << "---" << endl;

    {
        double metersToFeet = 3.28084;
        // NOTE: this is not the best conversion, it always rounds-down
        int feetPerMeter = (int) metersToFeet;

        int meters = 15;
        cout << meters << " meters are about " << feetPerMeter * meters << " feet" << endl;
    }

    cout << "---" << endl;

    {
        int a = 5;
        int b;
        int assignmentResult = b = a;
        bool assignmentResultBoolean = b = a;
        cout << assignmentResult << endl;
        cout << assignmentResultBoolean << endl;
        cout << (assignmentResultBoolean ? 't' : 'f') << endl;
    }

    cout << "---" << endl;

    {
        int a = 5;
        int b = 7;
        cout << (a < b) << endl;
        cout << (a == b) << endl;
        cout << (a >= b) << endl;
    }

    return 0;
}
