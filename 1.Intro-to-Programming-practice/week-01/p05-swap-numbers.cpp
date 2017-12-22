/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 5
* @compiler GCC
*
* Assignment:
*   Напишете програма, която разменя стойностите на две числови променливи.
*/
#include <iostream>

int main()
{
    double firstNumber = 1.5;
    double secondNumber = 2.5;
    double thirdVariable = 0;

    std::cout << "First number is " << firstNumber << "\n";
    std::cout << "Second number is " << secondNumber << "\n";

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

    std::cout << "After swapping:\n";
    std::cout << "First number is " << firstNumber << "\n";
    std::cout << "Second number is " << secondNumber << "\n";

	return 0;
}
