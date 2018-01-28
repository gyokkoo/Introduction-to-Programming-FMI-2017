/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 1
* @compiler GCC
*
*/

#include <iostream>

const int MAX_LENGTH = 10000;

int* mergeTwoArrays(int firstArr[], int secondArr[], int firstArrLength, int secondArrLength)
{
    int *result = new int[firstArrLength + secondArrLength];
    int index = 0;
    int i = 0, j = 0;
    bool firstArrTraversed = false;
    bool secondArrTraversed = false;

    while (index < firstArrLength + secondArrLength)
    {
        if (!firstArrTraversed && !secondArrTraversed)
        {
            if (firstArr[i] <= secondArr[j])
            {
                result[index] = firstArr[i];
                i++;
            }
            else if (secondArr[j] <= firstArr[i])
            {
                result[index] = secondArr[j];
                j++;
            }
        }
        else if (firstArrTraversed)
        {
            result[index] = secondArr[j];
            j++;
        }
        else if (secondArrTraversed)
        {
            result[index] = firstArr[i];
            i++;
        }

        if (j >= secondArrLength)
        {
            secondArrTraversed = true;
        }
        if (i >= firstArrLength)
        {
            firstArrTraversed = true;
        }

        index++;
    }

    return result;
}

int main()
{
    int firstArr[MAX_LENGTH];
    int secondArr[MAX_LENGTH];

    int firstArrLength = 0;
    int secondArrLength = 0;
    int resultArrLength = 0;

    std::cout << "Enter two SORTED arrays!\n";
    std::cout << "Enter first array length: ";
    std::cin >> firstArrLength;
    for (int i = 0; i < firstArrLength; i++)
    {
        std::cout << "Enter array[" << i << "]= ";
        std::cin >> firstArr[i];
    }

    std::cout << "Enter second array length: ";
    std::cin >> secondArrLength;
    for (int i = 0; i < secondArrLength; i++)
    {
        std::cout << "Enter array[" << i << "]= ";
        std::cin >> secondArr[i];
    }

    std::cout << "The result array: \n";
    resultArrLength = firstArrLength + secondArrLength;
    int *thirdArr = mergeTwoArrays(firstArr, secondArr, firstArrLength, secondArrLength);
    for (int i = 0; i < resultArrLength; i++)
    {
        std::cout << thirdArr[i] << "\n";
    }

    delete[] thirdArr;

    return 0;
}
