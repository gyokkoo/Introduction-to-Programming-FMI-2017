/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 7
* @compiler GCC
*
*/
#include <iostream>
#include <math.h>

using namespace std;

// calculate the distance between two points
double getDistance(double x1, double y1, double x2, double y2)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;

    return sqrt(pow(deltaX, 2) + pow(deltaY, 2));
}

// check for valid triangle
bool isValidTriangle(double sideA, double sideB, double sideC)
{
    if (sideA + sideB > sideC && sideC + sideB > sideA && sideA + sideC > sideB)
    {
        return true;
    }

	return  false;
}

int main()
{
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0;
    double x4 = 0, y4 = 0, x5 = 0, y5 = 0, x6 = 0, y6 = 0;

    // the first Triangle is A, the second triangle is B
    bool isEquilateralA = false, isEquilateralB = false;
    bool isUprightA = false, isUprightB = false;

    cout << "Enter 6 points (x, y) for 2 triangles:" << endl;
    cout << "Enter three points x, y for first triangle A:" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << "Enter three points x, y for second triangle B:" << endl;
    cin >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;

    // The sides of first triangle
    double sideA = getDistance(x1, y1, x2, y2);
    double sideB = getDistance(x2, y2, x3, y3);
    double sideC = getDistance(x3, y3, x1, y1);

    // The sides of second triangle
    double sideD = getDistance(x4, y4, x5, y5);
    double sideE = getDistance(x5, y5, x6, y6);
    double sideF = getDistance(x6, y6, x4, y4);

    // check for valid triangle
    if (isValidTriangle(sideA, sideB, sideC))
    {
        cout << "The first triangle is invalid triangle" << endl;
        return 0;
    }

    if (isValidTriangle(sideD, sideE, sideF))
    {
        cout << "The first triangle is invalid triangle" << endl;
        return 0;
    }

    // check for equilateral first triangle
    if (sideA == sideB && sideA == sideC && sideB == sideC)
    {
        isEquilateralA = true;
        cout << "The first triangle is equilateral" << endl;
    }

    // check for equilateral second triangle
    if (sideD == sideE && sideD == sideF && sideE == sideF)
    {
        isEquilateralB = true;
        cout << "The second triangle is equilateral" << endl;
    }

    // check for upright first triangle
    if ((y1 == y2 && y3 > y1) ||
        (y2 == y3 && y1 > y2) ||
        (y3 == y1 && y2 > y3))
    {
        isUprightA = true;
        cout << "The first triangle is upright" << endl;
    }

    // check for upright second triangle
    if ((y4 == y5 && y6 > y4) ||
        (y5 == y6 && y4 > y5) ||
        (y6 == y4 && y5 > y6))
    {
        isUprightB = true;
        cout << "The second triangle is upright" << endl;
    }

    if (isEquilateralA && isEquilateralB && isUprightA && isUprightB)
    {
        cout << "Both triangles are equilateral and upright" << endl;
        // TODO:
            // check for intersection
            // find intersection area
    }
    else
    {
        cout << "The conditions are not met!" << endl;
        cout << (isEquilateralA ? "TriangleA is equilateral" : "TriangleA is not equilateral") << endl;
        cout << (isEquilateralB ? "TriangleB is equilateral" : "TriangleB is not equilateral") << endl;
        cout << (isUprightA ? "TriangleA is upright" : "TriangleB is not upright") << endl;
        cout << (isUprightB ? "TriangleB is upright" : "TriangleB is not upright") << endl;
    }

    return 0;
}
