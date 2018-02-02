/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 63
* @compiler GCC
*
*/

#include <iostream>

using namespace std;

int main()
{
    int numberToCheck = 5;
    int counter = 0;
    int a = 0;
    int b = 0;
    int number = 0;

    std::cout << "Enter a and b intervals to check \n";
    std::cin >> a;
    std::cin >> b;

    if (a > b)
    {
        std::swap(a, b);
    }

    for (int i = a; i <= b; i++)
    {
        number = i;
        while (number > 0)
        {
            if (number % 10 == numberToCheck)
            {
                counter++;
            }
            number /= 10;
        }
    }

    std::cout << counter << "\n";

    return 0;
}
