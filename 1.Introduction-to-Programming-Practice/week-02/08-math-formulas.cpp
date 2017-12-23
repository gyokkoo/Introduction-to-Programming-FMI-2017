/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 8
* @compiler GCC
*
* Assignment:
*   Запишете на езика C++ следните математически формули:
*        А) ln(x^4 + e^x +10)
*        Б) |x| - sin(x)
*        В) |x| + cos(|x-1|)
*        Г) sin^2(x) + cos^2(x)
*/

#include <iostream>
#include <math.h>

int main()
{
    const double x = 7.0;

    // A)
    std::cout << log10(pow(x, 4) + exp(x) + 10) << "\n";

    // Б)
    std::cout << fabs(x) - sin (x) << "\n";

    // В)
    std::cout << fabs(x) + cos(fabs(x - 1)) << "\n";

    // Г)
    std::cout << pow(sin(x), 2) + pow(cos(x), 2) << "\n";

    return 0;
}
