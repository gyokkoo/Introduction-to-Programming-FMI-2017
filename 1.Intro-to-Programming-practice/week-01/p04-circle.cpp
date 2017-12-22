/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 4
* @compiler GCC
*
* Assignment:
*   Да се напише програма, която:
*   А) Потребителят въвежда радиус на окръжност;
*   Б) Програмата изчислява дължината на окръжността;
*   В) Програмата изчислява лицето на окръжността при зададения радиус.
*   PI = 3,14159265
*/
#include <iostream>

const double PI = 3.14159265;

int main()
{
    double radius = 0;
    double perimeter = 0, area = 0;

    std::cout << "Enter circle radius: ";
    std::cin >> radius;

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";

	return 0;
}
