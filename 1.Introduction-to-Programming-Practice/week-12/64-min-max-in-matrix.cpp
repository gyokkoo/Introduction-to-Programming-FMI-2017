/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 64
* @compiler GCC
*
*/

#include <iostream>
#include <limits>

const int ROWS = 6;
const int COLUMNS = 5;

int main()
{
    int maxElement = std::numeric_limits<int>::min();
    int minElement = std::numeric_limits<int>::max();

    int matrix[ROWS][COLUMNS] =
    {
        {48,72,13,14,15},
        {21,22,53,24,75},
        {31,57,33,34,35},
        {41,95,43,44,45},
        {59,52,53,54,55},
        {61,69,63,64,65}
    };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
            }

            if (matrix[i][j] < minElement)
            {
                minElement = matrix[i][j];
            }
        }
    }

    std::cout << "Min element in matrix: " << minElement << "\n";
    std::cout << "Max element in matrix: " << maxElement << "\n";

    return 0;
}
