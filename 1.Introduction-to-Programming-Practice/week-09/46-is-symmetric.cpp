/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 46
* @compiler GCC
*
* Assignment:
*  Да се състави програма, която определя дали редицата от символи S0, S1 ……  Sn-1 (n<=1<=100) е симетрична.
*  Една редица от символи е симетрична ако се чете еднакво от ляво на дясно и обратно.
*  Пример: 123454321
*/

#include <iostream>

const int MAX_LENGTH = 1024;

int main()
{
    char sequence[MAX_LENGTH]  = {};
    int length = 0;
    bool isSymmtetric = true;

    std::cout << "Enter sequence length: \n";
    std::cin >> length;

    for (int i = 0; i < length; i++)
    {
        std::cin >> sequence[i];
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (sequence[i] != sequence[length - i - 1])
        {
            isSymmtetric = false;
        }
    }

    std::cout << ((isSymmtetric) ? "Is Symetric" : "Is not symetric") << "\n";

    return 0;
}
