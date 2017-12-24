/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 23
* @compiler GCC
*
* Assignment:
*   Да се състави програма, която извежда всички естествени трицифрени числа,
*   които нямат еднакви цифри т.е. 100, 101 и подобните на тях не се извеждат.
*/

#include <iostream>

int main()
{
    int ones = 0, tens = 0, hundreds = 0;

    for (int i = 100; i <= 999; i++)
    {
        ones = i % 10;
        tens = i / 10 % 10;
        hundreds = i / 100;
        if (ones != tens && ones != hundreds && tens != hundreds)
        {
            std::cout << i << "\n";
        }
    }

    return 0;
}
