/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 26
* @compiler GCC
*
* Assignment:
*   Да се състави програма, която по дадено естествено число от интервала [100 - 30000]
*   намира най-голямата, най-малката от цифрите му и тяхната средна стойност (на цифрите).
*      Пример:
*      при въведено число 1234, най-малката цифра е 1, а най-голямата 4.
*      Тяхната средна стойност е 2.5.
*/

#include <iostream>

int main()
{
    int number = 0, currentDigit = 0;
    int smallestDigit = 9, biggestDigit = 0;

    std::cout << "Enter integer number between 100 and 30000\n";
    std::cin >> number;

    if (number < 100 && number > 30000)
    {
        std::cout << "Invalid number\n";
        return 0;
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
        number /= 10;
    }

    std::cout << "The smallest digit is: " << smallestDigit << "\n";
    std::cout << "The biggest digit is: " << biggestDigit << "\n";
    std::cout << "The average is: " << (biggestDigit + smallestDigit) / 2.0 << "\n";
    return 0;
}
