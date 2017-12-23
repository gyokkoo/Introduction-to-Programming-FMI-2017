/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 10
* @compiler GCC
*
* Assignment:
*    Да се състави програма, в която потребителят въвежда
*    цяло трицифрено число , а програмата извежда на екрана:
*        А) сумата от цифрите му;
*        Б) произведението от цифрите му;
*        В) корен втори от последните две цифри;
*/

#include <iostream>
#include <math.h>

int main()
{
    int number;
    int ones, tens, hundreds;

    std::cout << "Enter three digit number ";
    std::cin >> number;

    ones = number % 10;
    tens = number / 10 % 10;
    hundreds = number / 100;

    // A)
    std::cout << "Sum of digits is " << ones + tens + hundreds << "\n";

    // B)
    std::cout << "Multiplication of digits is " <<  ones * tens * hundreds << "\n";

    // C)
    std::cout << "Sqrt from last two digits is " << sqrt (tens) << " and " << sqrt(ones) << "\n";

    return 0;
}
