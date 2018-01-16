/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 53
* @compiler GCC
*
* Assignment:
* Да се състави програма, чрез която се въвеждат символи до въвеждането на знака 'Z'.
* Програмата да изведе всички въведени символи в ред обратен на въвеждането им.
*   Пример: ACDFZ
*   Изход: ZFDCA
*/

#include <iostream>

const int MAX_SIZE = 1024;

int main()
{
    char arr[MAX_SIZE];
    char currentSymbol = 0;
    int index = 0;

    std::cout << "Enter an array of characters:\n";
    std::cin >> currentSymbol;
    while (currentSymbol != 'Z')
    {
        arr[index] = currentSymbol;
        index++;
        std::cin >> currentSymbol;
    }

    arr[index] = 'Z';
    index++;

    for (int i = index - 1; i >= 0; i--)
    {
        std::cout << arr[i];
    }

    return 0;
}
