/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 67
* @compiler GCC
*
*/

#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrLength = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrLength; i++)
    {
        std::cout << arr[i] << "^2 = ";
        std::cout << arr[i] * arr[i] << "\n";
    }

    return 0;
}
