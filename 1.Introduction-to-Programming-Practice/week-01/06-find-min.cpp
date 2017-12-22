/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 6
* @compiler GCC
*
* Assignment:
*   Напишете програма, която намира минималното (максималното) от две цели числа.
*/
#include <iostream>

int main()
{
    int firstNumber = 5;
    int secondNumber = -3;

    std::cout << "First number is: " << firstNumber << "\n";
    std::cout << "Second number is: " << secondNumber << "\n";

    if (firstNumber < secondNumber)
    {
        std::cout << "The smaller number is: " << firstNumber << "\n";
        std::cout << "The bigger number is: " << secondNumber << "\n";
    }
    else if (firstNumber > secondNumber)
    {
        std::cout << "The smaller number is: " << secondNumber << "\n";
        std::cout << "The bigger number is: " << firstNumber << "\n";
    }
    else
    {
        std::cout << "The numbers are equal.\n";
    }

    return 0;
}
