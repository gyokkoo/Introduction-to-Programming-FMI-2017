/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 2
* @compiler GCC
*
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n = 0, remainder = 0, reversedNumber = 0;

    cout << "Enter positive integer number:" << endl;
    cin >> n;

    while (n > 0)
    {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10; // Reduce the number with the last digit
    }

    cout << "The reversed number in HEX is: ";
    cout << hex << reversedNumber; // hex is built-in function

    return 0;
}
