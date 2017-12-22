#include <iostream>

using namespace std;

/*
    Да се състави програма, която по дадено естествено число от интервала [100 - 30000]
    намира най-голямата, най-малката от цифрите му и тяхната средна стойност (на цифрите).
        Пример:
            при въведено число 1234, най-малката цифра е 1, а най-голямата 4.
            Тяхната средна стойност е 2.5.
*/
int main()
{
    int number = 0;
    int currentDigit = 0;
    int smallestDigit = 9;
    int biggestDigit = 0;

    cout << "Enter integer number between 100 and 30000" << endl;
    cin >> number;

    if (number < 100 && number > 30000)
    {
        cout << "Invalid number" << endl;
        return 0; // програмата спира изпълнение
    }

    while (number > 0)
    {
        currentDigit = number % 10;
        if (smallestDigit > currentDigit)
        {
            smallestDigit = currentDigit;
        }
        if (biggestDigit < currentDigit)
        {
            biggestDigit = currentDigit;
        }
        number /= 10; // премахва всеки път цифрата на единиците
    }

    cout << "The smallest digit is: " << smallestDigit << endl;
    cout << "The biggest digit is: " << biggestDigit << endl;
    cout << "The average is: " << (biggestDigit + smallestDigit) / 2.0 << endl;
    return 0;
}
