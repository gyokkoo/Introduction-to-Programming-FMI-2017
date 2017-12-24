/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 17
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителят въвежда оценка от 2 до 6
*   и извежда на екрана оценката с думи.
*/

#include <iostream>

int main()
{
    int grade = 0;
    std::cout << "Enter integer number between 2 and 6\n";
    std::cin >> grade;

    switch (grade)
    {
        case 2:
            std::cout << "Poor\n";
            break;
        case 3:
            std::cout << "Average\n";
            break;
        case 4:
            std::cout << "Good\n";
            break;
        case 5:
            std::cout << "Very good\n";
            break;
        case 6:
            std::cout << "Excellent\n";
            break;
        default:
            std::cout << "Invalid number!\n";
            break;
    }

    return 0;
}
