/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 29
* @compiler GCC
*
* Assignment:
*  Да се напише програма, която чете цяло положително число от клавиатурата, и ако
*  то е най-много четирицифрено:
*    а) намира сумата на квадратите на всички числа от 0 до даденото число;
*    б) извежда на екрана всяко от числата в интервала [0, n – 1], което е четно.
*/

#include <iostream>

int main()
{
    int number = 0;
    long long squareSum = 0;
    std::cout << "Enter integer number:\n";
    std::cin >> number;

    if (number < 10000)
    {
        // a)
        for (int i = 0; i <= number; i++)
        {
            squareSum += i * i;
        }

        // b)
        for (int i = 0; i < number - 1; i++)
        {
            if (i % 2 == 0)
            {
               std::cout << i << " ";
            }
        }

        std::cout << "\n";
    }

    std::cout << "A) Square sum is: " << squareSum << "\n";
}
