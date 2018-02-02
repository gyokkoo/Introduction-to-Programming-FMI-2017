/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 61
* @compiler GCC
*
*/

#include <iostream>

bool isNumberInRange(int number, int a, int b)
{
    return a <= number && number <= b;
}

int main()
{
    int n = 0;
    int arrElement = 0;
    int indexToDelete = 0;

    std::cout << "Enter n and n elements in range [0..5000]:\n";
    std::cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arrElement;
        if (isNumberInRange(arrElement, 0, 5000))
        {
            arr[i] = arrElement;
        }
        else
        {
            std::cout << arrElement << " is not valid element, enter again:\n";
            i--;
        }

    }

    std::cout << "Enter element index to delete\n";
    std::cin >> indexToDelete;
    if (isNumberInRange(indexToDelete, 0, n - 1))
    {
        arr[indexToDelete] = 0;
    }
    else
    {
        std::cout << "Provided index is invalid\n";
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;

    return 0;
}
