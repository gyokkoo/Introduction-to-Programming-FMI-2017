/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 24+
* @compiler GCC
*
* Assignment:
*   Напишете програма, която приема числа от клавиатурата,
*   докато не срещне 0 и отпечатва сумата и произведението им.
*/

#include <iostream>

int main()
{
    double number;
    double sum = 0;
    double multiplication = 1;

    std::cout << "Enter numbers (0 for end loop)\n";
    std::cin >> number;

    while (number != 0)
    {
        sum += number;
        multiplication *= number;

        std::cin >> number;
    }

    std::cout << "The sum is: " << sum << "\n";
    std::cout << "The multiplication is: " << multiplication << "\n";

    return 0;
}
