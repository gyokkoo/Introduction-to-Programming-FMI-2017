/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 30+
* @compiler GCC
*
* Assignment:
*  Всяка редица от равни числа в едномерен сортиран масив се нарича площадка.
*  Да се напише програма, която намира началото и дължината на най-дългата площадка
*  в даден сортиран във възходящ ред масив.
*   Пример:
*    1, 2, 2, 3, 3, 4, 4, 4, 4 ,4 , 5, 5, 5 - > най – дългата площадка е 4 с дължина 5
*    1, 2, 3, 4, 5 -> няма най-дълга площадка
*/

#include <iostream>

const int MAX_LENGTH = 1024;

int main()
{
    int arr[MAX_LENGTH], length = 0;
    int mostOccurringElement = 0;
    int elementCount = 1, currentCount = 1;

    std::cout << "Enter array length and elements:\n";
    std::cin >> length;
    for (int i = 0; i < length; i++)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            currentCount++;
        }
        else
        {
            currentCount = 1;
        }

        if (currentCount > elementCount)
        {
            mostOccurringElement = arr[i];
            elementCount = currentCount;
        }
    }

    if (elementCount != 1)
    {
        std::cout << "Most occurring element is " << mostOccurringElement << "\n";
        std::cout << "The count is " << elementCount << "\n";
    }
    else
    {
        std::cout << "No most occurring element\n";
    }
}
