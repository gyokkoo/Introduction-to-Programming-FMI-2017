/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 35
* @compiler GCC
*
* Assignment:
*   Да се напише програма с функции,  които определят
*     1. дали точка (x, y) лежи в първата оцветената област от фигурата.
*     2. дали точка (x, y) лежи във втората оцветената област от фигурата.
*   https://prnt.sc/hecmxd
*/

#include <iostream>
#include <cmath>

bool isInsideCircle(double x, double y, double xCenter, double yCenter, double radius)
{
    double deltaX = (x - xCenter);
    double deltaY = (y - yCenter);
    double distanceToCenter = pow(deltaX, 2) + pow(deltaY, 2);

    return distanceToCenter <= pow(radius, 2);
}

bool isInsideSmallerCircle(double x, double y)
{
    return isInsideCircle(x, y, 0, 3, 1);
}

bool isInsideBiggerCircle(double x, double y)
{
    return isInsideCircle(x, y, 0, 0, 2);
}

int main()
{
    double x = 0, y = 0;
    std::cout << "Enter X and Y for a point: ";
    std::cin >> x >> y;

    std::cout << "The point x = " << x << " y = " << y << "\n";
    std::cout << (isInsideSmallerCircle(x, y) ?
        "Is inside smaller circle" :
        "Is outside smaller circle") << "\n";
    std::cout << (isInsideBiggerCircle(x, y) ?
        "Is inside bigger circle" :
        "Is outside bigger circle") << "\n";

    return 0;
}
