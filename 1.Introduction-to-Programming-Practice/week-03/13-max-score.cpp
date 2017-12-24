/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 13
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителя въвежда оценка по програмиране от 0 до 100
*   и ако е получил максимум точки, да се изведе подходящо съобщение на екрана.
*/

#include <iostream>

int main()
{
    double points = 0;

    std::cout << "Enter score points: ";
    std::cin >> points;

    if (points == 100)
    {
        std::cout << "Congratulations your score is 100!\n";
    }
    else if (0 <= points && points <= 99)
    {
        std::cout << "Your score is not maximum!\n";
    }
    else
    {
        std::cout << "Your score is invalid\n";
    }

    return 0;
}
