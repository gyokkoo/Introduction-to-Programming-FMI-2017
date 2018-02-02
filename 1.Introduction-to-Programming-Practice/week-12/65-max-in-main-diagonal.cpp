/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 65
* @compiler GCC
*
*/

#include <iostream>
#include <limits>

const int ROWS = 4;
const int COLUMNS = 4;

int main()
{
    int maxElement = std::numeric_limits<int>::min();

    int matrix[ROWS][COLUMNS] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14 ,15, 16}
    };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (i == j && matrix[i][j] > maxElement)
            {
                std::cout << matrix[i][j] << " ";
                maxElement = matrix[i][j];
            }
        }
    }

    std::cout << "\nBiggest element in main diagonal:" << maxElement << "\n";

    return 0;
}
