#include <iostream>

using namespace std;

/*
    Да се състави програма, която изчислява сумата от цифрите на
    всички естествени 2-цифрени числа до въведено от клавиатурата 2-цифрено число.
    Пример: при въведено число 13, програмата извежда
    51 (1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 1 + 0 + 1 + 1 + 1 + 2).
*/

int main()
{
    int number;
    int sum = 0;

    cout << "Enter two digit integer number" << endl;
    cin >> number;

    for (int i = 1; i < number; i++)
    {
        if (i < 10)
        {
            sum += i;
        }
        else
        {
            sum += i % 10; // Цифрата на единиците
            sum += i / 10; // Цифрата на десетиците
        }
    }

    cout << sum << endl;

    return 0;
}
