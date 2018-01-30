/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 70
* @compiler GCC
*
*/

#include <iostream>

const int MAX_LENGTH = 100;

int main()
{
    int n = 10;
    int matrix[MAX_LENGTH][MAX_LENGTH];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }

            std::cout << matrix[i][j] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}
