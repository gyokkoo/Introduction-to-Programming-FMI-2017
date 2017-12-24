/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 18
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителят въвежда номер на месец и година,
*   програмата извежда броят на дните в него.
*/

#include <iostream>

int main()
{
    int month = 0, year = 0;
    bool isLeapYear = false;

    std::cout << "Enter month number and year:\n";
    std::cin >> month;
    std::cin >> year;

    if (year % 4 != 0)
    {
        isLeapYear = false;
    }
    else if (year % 100 != 0)
    {
        isLeapYear = true;
    }
    else if (year % 400 != 0)
    {
        isLeapYear = false;
    }
    else
    {
        isLeapYear = true;
    }

    if (isLeapYear)
    {
        std::cout << "The month has 29 days!\n";
        return 0;
    }

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "The month has 31 days\n";
            break;
        case 2:
            std::cout << "The month has 29 days\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "The month has 30 days\n";
            break;
    }

    return 0;
}
