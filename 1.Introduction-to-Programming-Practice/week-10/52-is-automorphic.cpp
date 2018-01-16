/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 52
* @compiler GCC
*
* Assignment:
*   Да се състави програма, която проверява дали даено число е автоморфно:
* Примери:
* 10 -> No
* 5 -> Yes
* 76 -> Yes
* 81 -> No
* 25 -> Yes
* 11 -> No
* 1 -> Yes
*/

#include <iostream>
#include <cmath>

// Recursive function that removes the first digit of number
unsigned int removeFirstDigit(unsigned int n)
{
    if (n < 10)
    {
        return 0;
    }

    return n % 10 + removeFirstDigit(n / 10) * 10;
}

int main()
{
    int number = 0, squareNumber = 0;
    bool isAutomorphic = false;

    std::cout << "Enter an integer number:\n";
    std::cin >> number;
    squareNumber = number * number;

    while (squareNumber > 0)
    {
        if (squareNumber == number)
        {
            isAutomorphic = true;
            break;
        }

        squareNumber = removeFirstDigit(squareNumber);
    }

    cout << (isAutomorphic ? "Yes" : "No") << endl;
    return 0;
}
