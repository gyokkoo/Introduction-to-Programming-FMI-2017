#include<iostream>
#include<cmath> //NOTE: cmath library required to use sin() and cos()

using namespace std;

int main() 
{
    double degrees = 60;
    double radians = degrees * M_PI / 180.0;

    cout << sin(radians) << endl;
    cout << cos(radians) << endl;

    double sinValue = sin(radians);
    double cosValue = sin(radians);
    if ((sinValue * sinValue + cosValue * cosValue) - 1 > 0.00001) 
	{
        cout << "Math is correct!" << endl;
    } 
	else 
	{
        cout << "Math is NOT correct!" << endl;
    }

    return 0;
}
