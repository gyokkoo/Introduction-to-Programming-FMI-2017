/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 24
* @compiler GCC
*
* Assignment:
*   Да се състави програма, която изчислява сумата от цифрите на
*   всички естествени 2-цифрени числа до въведено от клавиатурата 2-цифрено число.
*   Пример: при въведено число 13, програмата извежда
*   51 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 1 + 0 + 1 + 1 + 1 + 2).
*/

#include <iostream>

int main()
{
    int number = 0;
    int sum = 0;

    std::cout << "Enter two digit natural number\n";
    std::cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (i < 10)
        {
            sum += i;
        }
        else
        {
            sum += i % 10;
            sum += i / 10;
        }
    }

    std::cout << sum << "\n";

    return 0;
}
