#include <iostream>

using namespace std;

/*
    Напишете програма, която приема число и позиция на цифра и
    определя дали дадената цифра е четна или не.
    Броим цифрите отдясно наляво почвайки от 1.
*/
int main()
{
    int n, k;
    cout << "Enter digit and position" << endl;

    cin >> n;
    cin >> k;

    for (int i = 0; i < k - 1; i++)
    {
        n /= 10;
    }

    if ((n % 10) % 2 == 0)
    {
        cout << "The digit is even" << endl;
    }
    else
    {
        cout << "The digit is odd" << endl;
    }

    return 0;
}
