#include <iostream>

using std::cout;

double getEvenIndexesSum(double arr[], int length)
{
    double sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    double firstArr[] = { 1.5 };
    double secondArr[] = { 3.5, 8.53, 9};
    double thirdArr[] = { -1, 0, -45.34, 3.15, 120 };

    cout << "First array sum: ";
    cout << getEvenIndexesSum(firstArr, 1) << "\n";

    cout << "Second array sum: ";
    cout << getEvenIndexesSum(secondArr, 3) << "\n";

    cout << "Third array sum: ";
    cout << getEvenIndexesSum(thirdArr, 5) << "\n";

    return 0;
}
