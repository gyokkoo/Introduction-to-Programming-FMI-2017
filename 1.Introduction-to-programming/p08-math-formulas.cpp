#include <iostream>
#include <math.h>

using namespace std;

/*
    Запишете на езика C++ следните математически формули:
        А) ln(x^4 + e^x +10)
        Б) |x| - sin(x)
        В) |x| + cos(|x-1|)
        Г) sin^2(x) + cos^2(x)
*/

int main()
{
    double x = 7.0;

    // A)
    cout << log10(pow(x, 4) + exp(x) + 10) << endl;

    // Б)
    cout << fabs(x) - sin (x) << endl;

    // В)
    cout << fabs(x) + cos(fabs(x - 1)) << endl;

    // Г
    cout << pow(sin(x), 2) + pow(cos(x), 2) << endl;

    return 0;
}
