/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 21
* @compiler GCC
*
* Assignment:
*   Да се състави програма, в която потребителят въвежда естествено число
*   и извежда неговите делители.
*   Използвайте операторът за цикъл for.
*/

#include <iostream>
#include <math.h>

int main()
{
    int number = 0;

    std::cout << "Enter an integer number:\n";
    std::cin >> number;

    std::cout << "The numbers divisors are:\n";
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}
