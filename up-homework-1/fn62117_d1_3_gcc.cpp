/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 3
* @compiler GCC
*
*/
#include <iostream>
#include <math.h>

using namespace std;

const int HOURS_PER_DAY = 24;
const int MINUTES_PER_HOUR = 60;
const int SECONDS_PER_MINUTE = 60;

int main()
{
    int seconds = 0, minutes = 0, hours = 0, totalMinutes = 0;

    cout << "Enter seconds passed from the beginning of the day:" << endl;
    cin >> seconds;

    if (seconds <= HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE)
    {
        totalMinutes = seconds / SECONDS_PER_MINUTE;
        minutes = totalMinutes % MINUTES_PER_HOUR; // Minutes passed
        hours = totalMinutes / MINUTES_PER_HOUR; // Hours passed

        // Format output
        if (hours < 9)
        {
            cout << 0 << hours << ":";
        }
        else
        {
            cout << hours << ":";
        }

        if (minutes < 9)
        {
            cout << 0 << minutes << endl;
        }
        else
        {
            cout << minutes << endl;
        }
    }
    else
    {
        cout << "Invalid input!" << endl;
    }

    return 0;
}
