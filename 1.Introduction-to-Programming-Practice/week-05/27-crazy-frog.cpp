/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 27
* @compiler GCC
*
* Assignment:
*    Една жаба живеела на дъното на кладенец. Гледайки непрекъснато светлото петно
*    над себе си решила да се покачи и да го разгледа. Всеки ден тя се изкачвала по
*    2 метра нагоре, но през нощта се разколебавала и слизала по 1 метър надолу.
*    Да се състави програма, която чрез цикъл while описва движението на жабата.
*    Дълбочината на кладенеца се въвежда от клавиатурата.
*
*    Пример:
*      при 20 метра дълбочина на кладенеца жабата се изкачва на 19-тия ден.
*/

#include <iostream>

int main()
{
    int depth = 0, currentDepth = 0;
    int daysCounter = 0;

    std::cout << "Enter depth\n";
    std::cin >> depth;

    while (currentDepth < depth)
    {
        currentDepth += 2;
        daysCounter++;
        if (currentDepth >= depth)
        {
            break;
        }

        currentDepth -= 1;
    }

    std::cout << daysCounter << "\n";
    return 0;
}
