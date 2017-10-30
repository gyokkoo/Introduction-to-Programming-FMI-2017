#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителя въвежда 3 числа от клавиатурата и
    извежда средно аритметичното от сумата на тези, които са кратни на 2 и на 3.
*/
int main()
{
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;
    double sum = 0;
    int counter = 0;

    cout << "Enter three numbers:" << endl;
    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;

    // Ако едно число се дели на 2 и 3 едновременно, то се дели и на 6
    if (firstNumber % 6 == 0)
    {
        sum += firstNumber;
        counter++;
    }
    if (secondNumber % 6 == 0)
    {
        sum += secondNumber;
        counter++;
    }
    if (thirdNumber % 6 == 0)
    {
        sum += thirdNumber;
        counter++;
    }

    cout << "The average of numbers sum divisible by 2 and 3 is " << sum / counter << endl;
    return 0;
}
