#include <iostream>
#include <stdlib.h>

using namespace std;

/*
    Да се състави програма, в която компютърът да генерира случайно целочислено число в интервала [1, 100],
    а потребителят трябва да го познае, въвеждайки число. При всяко въвеждане на число програмта трябва да
    изведе подходящо съобщение указващо дали въведеното число е по-мaлко или по-голямо от генерираното.
    Програмата приключва, когато потребителят познае числото и трябва да изведе на екрана броят опити неоходими за пазнаване на генерираното число.
*/
int main()
{
    int secretNumber, userInput;

    secretNumber = rand() % 100 + 1; // Генерира произволно число между 1 и 100 включително

    cout << "Please enter your guess: ";
    cin >> userInput;
    while (userInput != secretNumber)
    {
        if (userInput > secretNumber)
        {
            cout << "Your number is higher than target number" << endl;
        }
        if (userInput < secretNumber)
        {
            cout << "Your number is lower than target number" <<endl;
        }

        cout << "Please enter your guess: ";
        cin >> userInput;
    }

    cout << "You guessed the number!!!" << endl;
    return 0;
}
