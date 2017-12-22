/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 2
* @compiler GCC
*
* Assignment:
*   Да се напише програма, която изчислява
*   параметъра и лицето на правоъгълник със страни 5,4 и 7,9.
*/
#include <iostream>

int main()
{
    const double sideA = 5.4;
    const double sideB = 7.9;

    double perimeter = 2 * (sideA + sideB);
    double area = sideA * sideB;

    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";

	return 0;
}
