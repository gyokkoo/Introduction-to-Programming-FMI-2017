/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 51
* @compiler GCC
*
* Assignment:
*  Да се напише програма, която проверява дали дадено число е палиндром.
* Примери:
* 12 -> No
* 52788725 -> Yes
* 56743765 -> No
* 121 -> Yes
* 5 -> Yes
*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long number = 0;
    int numArray[100], numberDigits = 0;
    bool isPalindrome = true;

    cout << "Enter an integer number:" << endl;
    cin >> number;
    numberDigits = (int) log10 ((double) number) + 1;

    cout << "Is " << number << " palindrome? -> ";

    // Filling the array with digits of the number
    for (int i = 0; i < numberDigits; i++)
    {
        numArray[i] = number % 10;
        number /= 10;
    }

    // Palindrome check loop
    for (int i = 0; i < numberDigits / 2; i++)
    {
        if (numArray[i] != numArray[numberDigits - i - 1])
        {
            isPalindrome = false;
            break;
        }
    }

    cout << (isPalindrome ? "Yes" : "No") << endl;

    return 0;
}
