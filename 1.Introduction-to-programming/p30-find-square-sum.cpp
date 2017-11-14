#include <iostream>

using namespace std;

/*
Да се напише програма, която чете цяло положително число от клавиатурата, и ако
то е най-много четирицифрено:
    а) намира сумата на квадратите на всички числа от 0 до даденото число;
    б) извежда на екрана всяко от числата в интервала [0, n – 1], което е четно.
*/

int main()
{
    int number;
    long long squareSum = 0;
    cout << "Enter integer number: " << endl;
    cin >> number;

    if (number < 10000)
    {
        // a)
        for (int i = 0; i <= number; i++)
        {
            squareSum += i * i;
        }

        // b)
        for (int i = 0; i < number - 1; i++)
        {
            if (i % 2 == 0)
            {
               cout << i << " ";
            }
        }

        cout << endl;
    }

    cout << "A) Square sum is: " << squareSum;
}
