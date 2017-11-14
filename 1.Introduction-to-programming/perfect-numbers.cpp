#include <iostream>

using namespace std;

/*
    Едно положително цяло число е съвършено, ако е равно на сумата от своите делители
    (без самото число). Например 6 е съвършено, защото 6 = 1+2+3; числото 1 не е съвършено.
    Да се напише процедура, която отпечатва на екрана всички съвършени числа
    ненадминаващи дадено положително цяло число в параметър n

    https://en.wikipedia.org/wiki/Perfect_number
*/
int main()
{
    int n, sum = 0;
    cin >> n;

    for (int num = 1; num <= n; num++)
    {
        for (int i = 1; i < num; i++)
        {
            // Проверка дали i е делител на num
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            cout << sum << endl;
        }

        sum = 0;
    }

    return 0;
}
