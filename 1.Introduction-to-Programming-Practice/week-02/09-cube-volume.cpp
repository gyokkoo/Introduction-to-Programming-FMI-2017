/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 9
* @compiler GCC
*
* Assignment:
*   Напишете програма, в която потребителят въвежда обема на куб,
*   а програмата изчислява дължината на страните му и ги извежда на екрана.
*/

#include <iostream>
#include <math.h>

int main()
{
    const double thirdRootDegree = 1.0 / 3.0;
    double volume = 0;
    double side = 0;

    std::cout << "Enter volume of a cube ";
    std::cin >> volume;

    side = pow (volume, thirdRootDegree);
    std::cout << "The side is " << side << "\n";

    return 0;
}
