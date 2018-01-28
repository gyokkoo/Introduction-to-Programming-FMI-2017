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
*/

#include <iostream>

using std::cin;
using std::cout;

const int MAX_LENGTH = 100;

int getMatrixSum(int matrix[MAX_LENGTH][MAX_LENGTH], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
            {
                sum += matrix[i][j];
            }
        }
    }

    return sum;
}

int main()
{
    int n = 5;
    int matrix[MAX_LENGTH][MAX_LENGTH] =
    {
        {1,  2,  3,  4,  5},
        {6,  7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    cout << getMatrixSum(matrix, n);
    return 0;
}
