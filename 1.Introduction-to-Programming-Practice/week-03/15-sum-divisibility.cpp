/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 15
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителя въвежда 3 числа от клавиатурата и
*   извежда средно аритметичното от сумата на тези, които са кратни на 2 и на 3.
*/

#include <iostream>

int main()
{
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    double sum = 0;
    int counter = 0;

    std::cout << "Enter three numbers:\n";
    std::cin >> firstNumber;
    std::cin >> secondNumber;
    std::cin >> thirdNumber;

    // Ако едно число се дели на 2 и 3 едновременно, то се дели и на 6
    if (firstNumber % 6 == 0)
    {
        sum += firstNumber;
        counter++;
    }
    if (secondNumber % 6 == 0)
    {
        sum += secondNumber;
        counter++;
    }
    if (thirdNumber % 6 == 0)
    {
        sum += thirdNumber;
        counter++;
    }

    if (counter != 0)
    {
        std::cout
            << "The average of numbers sum divisible by 2 and 3 is "
            << (sum / counter)
            << "\n";
    }
    else
    {
        std::cout << "The numbers are not divisible by 2 and 3\n";
    }

    return 0;
}
