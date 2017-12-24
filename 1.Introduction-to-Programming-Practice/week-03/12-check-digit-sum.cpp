/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 12
* @compiler GCC
*
* Assignment:
*   Да се напише програма, която проверява дали сумата
*   от цифрите на дадено четирицифрено число е кратна на 3.
*/

#include <iostream>

int main()
{
    int ones = 0, tens = 0, hundreds = 0, thousands = 0;
    int number = 0, digitSum = 0;

    std::cin >> number;

    ones = number % 10;
    tens = number / 10 % 10;
    hundreds = number / 100 % 10;
    thousands = number / 1000;

    digitSum = ones + tens + hundreds + thousands;
    if (digitSum % 3 == 0)
    {
        std::cout << "The number digit's sum can be divided by 3\n";
    }
    else
    {
        std::cout << "The number digit's sum cannot be divided by 3\n";
    }

    return 0;
}
