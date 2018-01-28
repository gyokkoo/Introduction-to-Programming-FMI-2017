/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 3
* @compiler GCC
*
*/

#include <iostream>

using std::cout;

const int CONSOLE_WIDTH = 80;
const int CONSOLE_HEIGH = 25;

void printRectangle(int n, int m, char symbol)
{
    int x = (CONSOLE_HEIGH - n) / 2;
    int y = (CONSOLE_WIDTH - m) / 2;

    for (int i = 0; i < x; i++)
    {
        cout << '\n';
    }

    for (int i = x; i < x + n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << " ";
        }
        for (int j = y; j < y + m; j++)
        {
            cout << symbol;
        }
        for (int j = y + m; j < CONSOLE_WIDTH; j++)
        {
            cout << " ";
        }
    }
}

int main()
{
    int n = 10;
    int m = 50;
    char symbol = 'O';

    printRectangle(n, m, symbol);

    return 0;
}
