/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 28
* @compiler GCC
*
* Assignment:
*    Да се състави програма, в която компютърът да генерира случайно целочислено число в интервала [1, 100],
*    а потребителят трябва да го познае, въвеждайки число. При всяко въвеждане на число програмта трябва да
*    изведе подходящо съобщение указващо дали въведеното число е по-мaлко или по-голямо от генерираното.
*    Програмата приключва, когато потребителят познае числото и трябва да изведе на екрана броят опити
*    неоходими за пазнаване на генерираното число.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int secretNumber = 0, userInput = 0;
    int attemptsCounter = 1;

    // Генерира произволно число между 1 и 100 включително
    srand((int) time(0));
    secretNumber = rand() % 100 + 1;

    std::cout << "Please enter your guess: ";
    std::cin >> userInput;
    while (userInput != secretNumber)
    {
        attemptsCounter++;
        if (userInput > secretNumber)
        {
            std::cout << "Your number is higher than target number\n";
        }
        else if (userInput < secretNumber)
        {
            std::cout << "Your number is lower than target number\n";
        }

        std::cout << "Please enter your guess: ";
        std::cin >> userInput;
    }

    std::cout << "You guessed the number, ";
    std::cout << "with " << attemptsCounter << " attempts! \n";
    return 0;
}
