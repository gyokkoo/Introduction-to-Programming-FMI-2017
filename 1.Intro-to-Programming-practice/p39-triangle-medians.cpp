/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 39
* @compiler GCC
*
* Assignment:
*  Да се напише програма с функция, която приема за параметри страни на триъгълник a, b и c.
*  Като се използва тази функция, програмата да извежда:
*   Дължините на медианите на всички триъгълници с връх медиценър т.G (GMc, GMb, GMa)
*   Периметъра на всички триъгълници с връх медицентър т.G
*  http://prntscr.com/heves9
*/
#include <iostream>
#include <cmath>

using namespace std;

double getMedian(double a, double b, double c)
{
    return sqrt(2 * b * b + 2 * c * c - a * a) / 2;
}

void printMediansLength(double a, double b, double c)
{
    double firstMedian = getMedian(a, b, c);
    double secondMedian = getMedian(b, a, c);;
    double thirdMedian = getMedian(c, a, b);
    cout << "--> The medians are: " << endl;
    cout << "----> " << firstMedian << endl;
    cout << "----> " << secondMedian << endl;
    cout << "----> " << thirdMedian << endl;
}

int main()
{
    double A = 0, B = 0, C = 0;
    double Ma = 0, Mb = 0, Mc = 0;

    // The six triangles with edge G
    double AMb = 0, AG = 0, GMb = 0;
    double CMb = 0, CG = 0; //GMb = 0
    double CMa = 0, GC = 0, GMa = 0;
    double BMa = 0, BG = 0; //GMa = 0
    double BMc = 0, GB = 0, GMc = 0;
    double AMc = 0, GA = 0; //GMc = 0


    cout << "Enter triangle sides:" << endl;
    cin >> A >> B >> C;

    // triangle sides validity check
    if ((A + B < C) || (A + C < B) || (B + C < A))
    {
        cout << "Invalid triangle sides!" << endl;
        return 0;
    }

    Ma = getMedian(A, B, C);
    Mb = getMedian(B, A, C);
    Mc = getMedian(C, A, B);

    cout << "The triangle {A Mb G}" << endl;
    AMb = B / 2;
    AG = (2 * Ma) / 3;
    GMb = Mb / 3;
    printMediansLength(AMb, AG, GMb);

    cout << "The triangle {G Mb C}" << endl;
    CMb = B / 2;
    CG = (2 * Mc) / 3;
    GMb = Mb / 3;
    printMediansLength(CMb, CG, GMb);

    cout << "The triangle {G Ma C}" << endl;
    CMa = A / 2;
    GC = (2 * Mc) / 3;
    GMa = Ma / 3;
    printMediansLength(CMa, GC, GMa);

    cout << "The triangle {G Ma B}" << endl;
    BMa = A / 2;
    BG = (2 * Mb) / 3;
    GMa = Ma / 3;
    printMediansLength(BMa, BG, GMa);

    cout << "The triangle {G Mc B}" << endl;
    BMc = C / 2;
    GB = (2 * Mb) / 3;
    GMc = Mc / 3;
    printMediansLength(BMc, GB, GMc);

    cout << "The triangle {G Mc A}" << endl;
    AMc = C / 2;
    GA = (2 * Ma) / 3;
    GMc = Mc / 3;
    printMediansLength(AMc, GA, GMc);

    return 0;
}
