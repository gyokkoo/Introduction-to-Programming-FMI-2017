/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 37
* @compiler GCC
*
* Assignment:
*   Да се напише програма, която намира разстоянието между две точки в равнината,
*   зададени чрез координатите си (x1 y1) и (x2 y2). Като се използва тази функция,
*   да се напише програма, която чете координатите на n точки (n>1) от равнината,
*   и извежда разстоянието между всеки две от тях.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

const int MaxCount = 100;

double getDistance(double x1, double y1, double x2, double y2)
{
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    double squareSum = pow(deltaX, 2) + pow(deltaY, 2);

    return sqrt(squareSum);
}

int main()
{
    double Xs[MaxCount]; // stores the X coordinates
    double Ys[MaxCount]; // stores the Y coordinates
    double x = 0, y = 0;
    int n;

    std::cout << "Enter the count of the points: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> x >> y;
        Xs[i] = x;
        Ys[i] = y;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            std::cout << "Distance between {" << Xs[i] << " " << Ys[i]<< "} and {";
            std::cout << Xs[j] << " " << Ys[j]<< "} is: ";
            std::cout << getDistance(Xs[i], Ys[i], Xs[j], Ys[j]) << "\n";
        }
    }

    return 0;
}
