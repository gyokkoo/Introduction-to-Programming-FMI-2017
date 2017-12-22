#include <iostream>

using namespace std;

/*
    Да се напише програма, която проверява дали сумата
    от цифрите на дадено четирицифрено число е кратна на 3.
*/

int main()
{
    int number = 0;
    cin >> number;

    int ones = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100 % 10;
    int thousands = number / 1000;

    int digitSum = ones + tens + hundreds + thousands;
    if (digitSum % 3 == 0)
    {
        cout << "The number digit's sum can be divided by 3" << endl;
    }
    else
    {
        cout << "The number digit's sum cannot be divided by 3" << endl;
    }

    return 0;
}
