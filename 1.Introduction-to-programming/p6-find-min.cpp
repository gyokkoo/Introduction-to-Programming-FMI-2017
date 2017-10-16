#include <iostream>

using namespace std;

/*
    Напишете програма, която намира минималното (максималното) от две цели числа.
*/

int main()
{
    int firstNumber = 5;
    int secondNumber = -3;
    int smaller = 0;
    int bigger = 0;

    cout << "First number is: " << firstNumber << endl;
    cout << "Second number is: " << secondNumber << endl;

    if (firstNumber < secondNumber)
    {
        smaller = firstNumber;
        bigger = secondNumber;
    }
    else if (firstNumber > secondNumber)
    {
        smaller = secondNumber;
        bigger = firstNumber;
    }
    else
    {
        smaller = firstNumber;
        bigger = secondNumber;
    }

    cout << "The smaller number is: " << smaller << endl;
    cout << "The bigger number is: " << bigger << endl;

    return 0;
}
