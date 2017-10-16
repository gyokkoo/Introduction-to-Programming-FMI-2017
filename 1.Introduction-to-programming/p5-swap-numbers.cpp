#include <iostream>

using namespace std;

/*
    Напишете програма, която разменя стойностите на две числови променливи.
*/

int main()
{
    double firstNumber = 1.5;
    double secondNumber = 2.5;

    double thirdVariable = 0;

    cout << "First number is " << firstNumber << endl;
    cout << "Second number is " << secondNumber << endl;

    // using third variable
    /*
    thirdVariable = secondNumber;
    secondNumber = firstNumber;
    firstNumber = thirdVariable;
    */

    // without third variable
    firstNumber = firstNumber + secondNumber; // firstNumber now is 4
    secondNumber = firstNumber - secondNumber; // secondNumber now is 1.5
    firstNumber = firstNumber - secondNumber; // firstNumber now is 2.5

    cout << "After swapping:" << endl;
    cout << "First number is " << firstNumber << endl;
    cout << "Second number is " << secondNumber << endl;
	
	return 0;
}
