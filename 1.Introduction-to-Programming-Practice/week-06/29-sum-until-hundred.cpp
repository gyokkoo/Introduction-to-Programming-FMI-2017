/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 29
* @compiler GCC
*
* Assignment:
*  Да се напише програма, която:
*    а) чете числа от клавиатурата и прави сума на тези от тях,
*       които са по-малки или равни на 30, докато тази сума не надхвърли 100.
*    б) чете числа от клавиатурата и ги сумира, докато сумата им не надхвърли 100.
*/

#include <iostream>

int main()
{
    int sum = 0;
    double number = 0;

    std::cout << "Enter numbers:\n";
    std::cin >> number;

    // a)
    while (sum + number <= 100)
    {
        // b) without the if
        if (number <= 30)
        {
            sum += number;
        }

        std::cin >> number;
    }

    std::cout << "The target sum is: " << sum;
}
