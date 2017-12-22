/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 3
* @compiler GCC
*
* Assignment:
*   Да се напише програма, която изчислява параметъра и лицето на правоъгълник,
*   при която потребителят последователно въвежда дължините на страните.
*   Използвайте cin и cout.
*/
#include <iostream>

int main()
{
    double sideA = 0, sideB = 0;
    double perimeter = 0, area = 0;

    std::cout << "Enter rectangle width: ";
    std::cin >> sideA;

    std::cout << "Enter rectangle height: ";
    std::cin >> sideB;

    perimeter = 2 * (sideA + sideB);
    area = sideA * sideB;

    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";

	return 0;
}
