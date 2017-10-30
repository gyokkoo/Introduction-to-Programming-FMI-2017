#include <iostream>

using namespace std;

/*
    Да се напише програма, в която потребителя въвежда 3 числа
    от клавиатурата и извежда на екрана най- голямото от тях.
*/
int main()
{
    int firstNumber = 0;
    int secondNumber = 0;
    int thirdNumber = 0;
    cout << "Enter three numbers:" << endl;
    cin >> firstNumber;
    cin >> secondNumber;
    cin >> thirdNumber;

    // Предполагаме, че първото число е най-голямо
    int biggestNumber = firstNumber;

    if (secondNumber > biggestNumber)
    {
        biggestNumber = secondNumber;
    }

    if (thirdNumber > biggestNumber)
    {
        biggestNumber = thirdNumber;
    }

    cout << "The biggest number is " << biggestNumber << endl;

    return 0;
}
