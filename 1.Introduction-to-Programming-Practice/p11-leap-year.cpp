#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителя въвежда
    година и определя дали тя е високосна.
    (https://en.wikipedia.org/wiki/Leap_year)
*/

int main()
{
    int year;
    bool isLeapYear;

    cout << "Enter a year ";
    cin >> year;


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

    cout << (isLeapYear == true ? "Leap year" : "Common year") << endl;
    return 0;
}
