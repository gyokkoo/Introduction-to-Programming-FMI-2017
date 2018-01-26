#include<iostream>

using namespace std;

int secondsInMinute = 60;
int minutesInHour = 60;
int hoursInDay = 24;
int secondsInHour = secondsInMinute * minutesInHour;

int main() 
{
    int days = 3;
    int totalSeconds = days * hoursInDay * secondsInHour;

    cout << days << " days have " << totalSeconds << " seconds" << endl;
}
