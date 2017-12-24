/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 20
* @compiler GCC
*
* Assignment:
*    Да се състави програма, в която потребителят въвежда естествено число
*    и извежда на екрана дали то е просто.
*    Използвайте операторът за цикъл for.
*/

#include <iostream>
#include <math.h>

int main()
{
    int number = 0, numberSqrt = 0;
    bool isPrime = true;

    std::cout << "Enter integer number\n";
    std::cin >> number;

    numberSqrt = sqrt(number); // достатъчно е да се провери до корен квадратен от числото
    for (int i = 2; i <= numberSqrt; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    std::cout << (isPrime ? "The number is prime\n" : "The number is not prime\n");

    return 0;
}
