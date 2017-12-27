/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 31
* @compiler GCC
*
* Assignment:
*    Напишете програма, която приема число и позиция на цифра и
*    определя дали дадената цифра е четна или не.
*    Броим цифрите отдясно наляво почвайки от 1.
*/

#include <iostream>

int main()
{
    int n = 0, k = 0;

    std::cout << "Enter digit and position\n";
    std::cin >> n;
    std::cin >> k;

    for (int i = 0; i < k - 1; i++)
    {
        n /= 10;
    }

    if ((n % 10) % 2 == 0)
    {
        std::cout << "The digit is even\n";
    }
    else
    {
        std::cout << "The digit is odd\n";
    }

    return 0;
}
