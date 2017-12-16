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

using namespace std;

int main()
{
    char arr[1000] = {};
    char currentSymbol = 0;
    int index = 0;

    cout << "Enter an array of characters:" << endl;
    cin >> currentSymbol;
    while (currentSymbol != 'Z')
    {
        arr[index] = currentSymbol;
        index++;
        cin >> currentSymbol;
    }

    arr[index] = 'Z';
    index++;

    for (int i = index - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}
