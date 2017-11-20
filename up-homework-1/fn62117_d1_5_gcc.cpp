/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 5
* @compiler GCC
*
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 0, firstDigit = 0, lastDigit = 0, digitsCount;
    long long result = 0; // If the input is 2^31 - 1 the result should be bigger
    double firstDecimal = 0;
    bool isNegative = false;

    cout << "Enter positive integer number:" << endl;
    cin >> n;

    if (n < 0)
    {
        n = fabs(n); // fabs is absolute value
        isNegative = true;
    }

    if (0 < n && n < 10)
    {
        // No swaps required
        result = n;
    }
    else
    {
        digitsCount = log10(n); // Gets digits count - 1
        firstDecimal = pow(10, digitsCount); // e.g n = 1234 -> 1000
        firstDigit = n / firstDecimal; // First digit of number
        lastDigit = n % 10; // Last digit of number

        // Remove first and last digit
        result =  (long)((n - firstDigit * firstDecimal) / 10) * 10; // e.g 1234 -> 230
        // Swap first and last digit
        result = result + lastDigit * firstDecimal + firstDigit; // e.g. 1234 -> 4231
    }

    // Print minus if the number is negative
    if (isNegative)
    {
        cout << "-";
    }
    cout << result << endl;

    return 0;
}
