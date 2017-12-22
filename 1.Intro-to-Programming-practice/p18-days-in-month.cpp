#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителят въвежда номер на месец и година,
    програмата извежда броят на дните в него.
*/
int main()
{
    int month = 0;
    int year = 0;
    bool isLeapYear = false;

    cout << "Enter month number and year:" << endl;
    cin >> month;
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


    if (isLeapYear)
    {
        cout << "The month has 29 days" << endl;
        return 0; // Програмата спира тук и не продължава надолу ако е изпълнено условието
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
            cout << "The month has 31 days" << endl; // Важи за гореизброените случаи
            break;
        case 2:
            cout << "The month has 29 days" << endl; // Само за втория месец
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "The month has 30 days" << endl; // За 4ти 6ти, 9ти и 11ти месец
            break;
    }

    return 0;
}
