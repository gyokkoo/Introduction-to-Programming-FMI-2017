/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 68
* @compiler GCC
*
*/

#include <iostream>

const int MAX_LENGTH = 100;

void transposeMatrix(int matrix[][MAX_LENGTH], int n)
{
    int copyMatrix[MAX_LENGTH][MAX_LENGTH];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            copyMatrix[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = copyMatrix[j][i];
        }
    }
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

    transposeMatrix(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
