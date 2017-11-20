/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 1
* @compiler GCC
*
*/

#include <iostream>

using namespace std;

int main()
{
    // Declaring variables
    int currentNumber = 0, previousNumber = 0;
    bool isIncreasing = false;

    cout << "Enter natural numbers:" << endl;
    cin >> currentNumber;

    // If user input is zero or negative the sequence is undefined
    if (currentNumber <= 0)
    {
        cout << "Undefined" << endl;
        return 0; // The program stops here if the sequence is undefined
    }

    previousNumber = currentNumber;
    cin >> currentNumber;
    if (currentNumber <= 0)
    {
        cout << "Undefined" << endl;
        return 0;
    }

    // With two numbers the sequence can be determined
    if (currentNumber > previousNumber)
    {
        isIncreasing = true; // Increasing e.g. 1 2 5 10 ...
    }

    if (currentNumber < previousNumber)
    {
        isIncreasing = false; // Decreasing e.g 10 8 6 4 2 ...
    }

    while (currentNumber > 0)
    {
        if (isIncreasing && (currentNumber > previousNumber))
        {
            cout << "Increasing" << endl;
        }
        else if (!isIncreasing && (currentNumber < previousNumber))
        {
            cout << "Decreasing" << endl;
        }
        else if (isIncreasing && (currentNumber <= previousNumber) ||
                !isIncreasing && (currentNumber >= previousNumber))
        {
            // Current number is in conflict with the previous number
            // the sequence becomes undefined
            break; // quits from the loop
        }

        previousNumber = currentNumber;
        cin >> currentNumber;
    }

    // The program will always finish with undefined sequence
    cout << "Undefined" << endl;
    return 0;
}
