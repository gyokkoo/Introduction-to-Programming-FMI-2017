#include<iostream>
using namespace std;

const int secondsInMinute = 60;
const int minutesInHour = 60;
const int hoursInDay = 24;
const int secondsInHour = secondsInMinute * minutesInHour;

const float pi = 3.14f;

int main() 
{
    secondsInMinute = 13; //compilation error
    int days = 3;
    int totalSeconds = days * hoursInDay * secondsInHour;

    cout << days << " days have " << totalSeconds << " seconds" << endl;
}
