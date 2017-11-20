/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 6
* @compiler GCC
*
*/
#include <iostream>

using namespace std;

// prints a character n with space, n times
void printSymbolNtimes(char symbol, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << symbol << " ";
    }
}

int main()
{
    char triangleSymbol = NULL; // The default value is null
    char spaceSymbol = ' ';
    int height = 0;

    int spaceCount = 0;
    int symbolCount = 0;

    cout << "Enter triangle symbol:" << endl;
    cin >> triangleSymbol;

    cout << "Enter triangle height:" << endl;
    cin >> height;

    spaceCount = height;
    symbolCount = 1;
    for (int i = 0; i < height; i++)
    {
        printSymbolNtimes(spaceSymbol, spaceCount);
        printSymbolNtimes(triangleSymbol, symbolCount);
        printSymbolNtimes(spaceSymbol, spaceCount);

        spaceCount -= 1; // Each line has -1 less lines
        symbolCount += 2; // Each line has +2 more
        cout << endl;
    }

    return 0;
}
