/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 66
* @compiler GCC
*
*/

#include <iostream>

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7, 8};

    int arrLength = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < arrLength; i++)
    {
        std::cout << arr1[i] * arr2[i] << "\n";
    }

    return 0;
}
