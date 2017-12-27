/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 32
* @compiler GCC
*
* Assignment:
*   Дадени са две редици от числа. Да се напише програма, която определя
*   колко пъти първата редица се съдържа във втората.
*   Например редицата 1,2,3 се съдържа 2 пъти в
*   редицата 2,1,2,3,4,5,1,2,3,1,2, а редицата 1,1,1 се съдържа 4 пъти в редицата 1,1,1,1,1,1.
*/

#include <iostream>

int main()
{
    int firstRowLength = 3;
    int arrLength = 11;
    int firstRow[firstRowLength] = { 1, 2, 3 };
    int arr[arrLength] = { 2, 1, 2, 3, 4, 5, 1, 2, 3, 1, 2 };

   // int firstRow[3] = { 1, 1, 1};
   // int arr[6] = { 1, 1, 1, 1, 1, 1 };

    int counter = 0;
    bool isEqual;

    for (int i = 0; i <= arrLength - firstRowLength; i++)
    {
        isEqual = true;
        for (int j = 0; j < firstRowLength; j++)
        {
            if (arr[i + j] != firstRow[j])
            {
                isEqual = false;
                break;
            }
        }

        if (isEqual)
        {
            counter++;
        }
    }

    std::cout << counter << "\n";

    return 0;
}
