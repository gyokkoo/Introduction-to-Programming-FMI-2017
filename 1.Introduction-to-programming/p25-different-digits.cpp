#include <iostream>

using namespace std;

/*
    Да се състави програма, която извежда всички естествени трицифрени числа,
    които нямат еднакви цифри т.е. 100, 101 и подобните на тях не се извеждат.
*/
int main()
{
    int ones = 0;
    int tens = 0;
    int hundreds = 0;

    for (int i = 100; i <= 200; i++)
    {
        ones = i % 10;
        tens = i / 10 % 10;
        hundreds = i / 100;
        if (ones != tens && ones != hundreds && tens != hundreds)
        {
            cout << i << endl;
        }
    }

    return 0;
}
