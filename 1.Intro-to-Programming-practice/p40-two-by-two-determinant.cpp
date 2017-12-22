/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 40
* @compiler GCC
*
* Assignment:
*  Да се напише програма с функция, която приема за параметри
*  елементите на матрица от втори ред.
*  Програмата да връща като резултат детерминантата на матрицата.
*/
#include <iostream>

using namespace std;

double getDeterminant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

int main()
{
    double a1 = 0, a2 = 0;
    double b1 = 0, b2 = 0;
    cout << "Enter 2x2 matrix four elements):" << endl;
    cin >> a1 >> a2 >> b1 >> b2;

    cout << "The determinant of the matrix is:" << endl;
    cout << getDeterminant(a1, a2, b1, b2) << endl;

    return 0;
}
