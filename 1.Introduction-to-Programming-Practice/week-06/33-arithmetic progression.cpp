/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 33
* @compiler GCC
*
* Assignment:
*  Да се състави програма, която извежда на екрана редица в аритметична прогресия,
*  по зададена начална стойност, стъпка и брой членове на редицата .
*/

#include <iostream>

int main()
{
    int d1, d, n;
    std::cout << "Enter d1, d and n \n";

    std::cin >> d1 >> d >> n;
    for (int i = 0; i < n; i++)
    {
        std::cout << d1 << "\n";
        d1 += d;
    }
}
