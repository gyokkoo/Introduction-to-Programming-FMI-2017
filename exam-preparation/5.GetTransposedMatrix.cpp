/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 5
* @compiler GCC
*
*/

#include <iostream>

using std::cin;
using std::cout;

const int MAX_LENGTH = 100;

int** getTransponsedMatrix(int matrix[MAX_LENGTH][MAX_LENGTH], int n)
{
    int **transponsedMatrix = 0;
    transponsedMatrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        transponsedMatrix[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            transponsedMatrix[i][j] = matrix[j][i];
        }
    }

    return transponsedMatrix;
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

    int** transposedMatrix = getTransponsedMatrix(matrix, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << transposedMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "Cleaning up memory...\n";
    for (int i = 0; i < n; i++)
    {
        delete[] transposedMatrix[i];
    }
    delete[] transposedMatrix;
    cout << "Done! \n";
    return 0;
}
