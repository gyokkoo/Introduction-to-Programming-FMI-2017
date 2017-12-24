/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 25+
* @compiler GCC
*
* Assignment:
*  Напишете програма, която приема цяло положително число и
*  намира броя на цифрите му.
*   Примери:
*     1 -> 1
*     1740784 -> 7
*     875 -> 3
*     0 -> 0
*/

#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    int digitsCount = 0;

    std::cout << "Enter integer number\n";
    std::cin >> number;

    if (number < 0)
    {
        number *= -1;
    }

    if (number > 0)
    {
        digitsCount = (int) log10(number) + 1;
    }
    else if (number == 0)
    {
        digitsCount = 1;
    }

    std::cout << "The digits count is: " << digitsCount << "\n";
    return 0;
}
