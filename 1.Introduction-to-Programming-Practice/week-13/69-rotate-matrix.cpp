/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 69
* @compiler GCC
*
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_LENGTH = 100;

void fillWithRandomNumber(int matrix[][MAX_LENGTH], int n)
{
	srand(time(0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j] = rand() % 100 + 1;
        }
    }

}

void rotateMatrix(int matrix[][MAX_LENGTH], int n)
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

void printMatrix(int matrix[][MAX_LENGTH], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    int n = 5;
    int matrix[MAX_LENGTH][MAX_LENGTH];

    fillWithRandomNumber(matrix, n);

    printMatrix(matrix, n);

    rotateMatrix(matrix, n);

    std::cout << "After 90 angle rotation: \n";
    printMatrix(matrix, n);

    return 0;
}
