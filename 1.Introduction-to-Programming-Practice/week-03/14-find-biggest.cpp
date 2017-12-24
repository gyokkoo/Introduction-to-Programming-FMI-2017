/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 14
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителя въвежда 3 числа
*   от клавиатурата и извежда на екрана най- голямото от тях.
*/

#include <iostream>

int main()
{
    double firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    double biggestNumber = 0;

    std::cout << "Enter three numbers:\n";
    std::cin >> firstNumber;
    std::cin >> secondNumber;
    std::cin >> thirdNumber;

    biggestNumber = firstNumber; // Guess that the first is biggest
    if (secondNumber > biggestNumber)
    {
        biggestNumber = secondNumber;
    }

    if (thirdNumber > biggestNumber)
    {
        biggestNumber = thirdNumber;
    }

    std::cout << "The biggest number is " << biggestNumber << "\n";

    return 0;
}
