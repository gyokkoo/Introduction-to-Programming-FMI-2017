/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 7
* @compiler GCC
*
* Assignment:
*   Проверете верността на Вашите предположения, чрез кратка C++ програма.
*/

#include <iostream>

int main()
{
    bool firstExpression = !1 || 0 && 1;
    std::cout << firstExpression << "\n"; // false

    bool secondExpression = false && true || false;
    std::cout << secondExpression << "\n"; // false

    bool thirdExpression = !(1 || 0 && 1);
    std::cout << thirdExpression << "\n"; // false

    bool fourthExpression = false && (true || false);
    std::cout << fourthExpression << "\n"; // false

    bool fifthExpression = (!1 || 0 && 1) || (false && true || false);
    std::cout << fifthExpression << "\n"; // false

    bool sixthExpression = !(!1 || 0 && 1) || (false && true || false);
    std::cout << sixthExpression << "\n"; // true

    return 0;
}
