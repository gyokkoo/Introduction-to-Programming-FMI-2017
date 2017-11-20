/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 4
* @compiler GCC
*
*/
#include <iostream>
#include <limits.h> // for INT_MAX

using namespace std;

int main()
{
    // smallest initial value is INT_MAX = 2^32-1
    int currentNumber = 0, smallest = INT_MAX;

    cout << "Enter natural numbers:" << endl;
    cin >> currentNumber;
    smallest = currentNumber;

    while (currentNumber > 0)
    {
        // if current number is smaller then the value of smallest becomes currentNumber
        smallest = currentNumber < smallest ? currentNumber : smallest; // ternary operator
        cin >> currentNumber;
    }

    cout << "The smallest number greater than zero is: " << smallest << endl;

    return 0;
}
