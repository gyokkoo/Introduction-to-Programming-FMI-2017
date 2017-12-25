/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 29+
* @compiler GCC
*
* Assignment:
*   Едно положително цяло число е съвършено, ако е равно на сумата от своите делители (без самото число).
*   Например 6 е съвършено, защото 6 = 1+2+3; числото 1 не е съвършено.
*   Да се напише процедура, която отпечатва на екрана всички съвършени числа
*   ненадминаващи дадено положително цяло число в параметър n
*/

#include <iostream>

bool isPerfectNumber(int number);

int main()
{
    int n = 0;

    std::cout << "Enter n:\n";
    std::cin >> n;

    std::cout << "The complete numbers are: \n";
    for (int number = 1; number <= n; number++)
    {
        if (isPerfectNumber(number))
        {
            std::cout << number << "\n";
        }
    }

    return 0;
}

bool isPerfectNumber(int number)
{
    long sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    return sum == number;
}
