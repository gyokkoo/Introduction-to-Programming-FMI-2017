/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 62
* @compiler GCC
*
*/

#include <iostream>

void printMorseCode(int digit)
{
    switch (digit)
    {
        case 0:
            std::cout << "\"-----\"";
            break;
        case 1:
            std::cout << "\".... \"";
            break;
        case 2:
            std::cout << "\"...- \"";
            break;
        case 3:
            std::cout << "\"..-- \"";
            break;
        case 4:
            std::cout << "\"..--- \"";
            break;
        case 5:
            std::cout << "\".---- \"";
            break;
        case 6:
            std::cout << "\"-... \"";
            break;
        case 7:
            std::cout << "\"--.. \"";
            break;
        case 8:
            std::cout << "\"---.. \"";
            break;
        case 9:
            std::cout << "\"----. \"";
        default:
            std::cout << "Invalid digit provided\n";
            break;
    }
}

int main()
{
    int x = 0;
    int digit = 0;
    std::cout << "Enter an integer number: \n";
    std::cin >> x;

    while (x > 0)
    {
        digit = x % 10;
        printMorseCode(digit);
        std::cout << " ";
        x /= 10;
    }

    return 0;
}
