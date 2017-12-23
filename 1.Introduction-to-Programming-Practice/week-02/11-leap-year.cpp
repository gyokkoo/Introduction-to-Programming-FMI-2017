/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 11
* @compiler GCC
*
* Assignment:
*   Да се напише програма, в която потребителя въвежда
*   година и определя дали тя е високосна.
*   (https://en.wikipedia.org/wiki/Leap_year)
*/

#include <iostream>

int main()
{
    int year = 0;
    bool isLeapYear = false;

    std::cout << "Enter a year ";
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

    std::cout << (isLeapYear == true ? "Leap year" : "Common year") << "\n";
    return 0;
}
