#include<iostream>
#include<string>
#include<ctime>
#include<sstream>
#include<algorithm>

using namespace std;

void swapValues(int& a, int& b)
{
    int buffer = a;
    a = b;
    b = buffer;
}

int wordCount(const string& text)
{
    //NOTE: this isn't exactly a robust implementation
    int words = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (isalpha(text[i])
            && (i == 0 || !isalpha(text[i - 1])))
        {
            words++;
        }
    }

    return words;
}

bool isNegative(int number)
{
    return number < 0;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

bool notTrue(int number)
{
    return false;
}

int sumOf(int numbers[], int numbersLength, bool (&shouldIncludeInSum)(int))
{
    int sum = 0;
    for (int i = 0; i < numbersLength; i++)
    {
        if (shouldIncludeInSum(numbers[i]))
        {
            sum += numbers[i];
        }
    }

    return sum;
}

void printArr(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

bool numbersCompareReverse(int a, int b)
{
    return b < a;
}

int main()
{
    int num1 = 13, num2 = 42;
    swapValues(num1, num2);
    cout << num1 << " " << num2 << endl;

    string text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    cout << "Lorem ipsum words: " << wordCount(text) << endl;

    int numbers[9] = {1, -5, 4, 3, 13, 2, 36, -7, -1};
    cout << sumOf(numbers, 9, isNegative) << endl;
    cout << sumOf(numbers, 9, isEven) << endl;
    cout << sumOf(numbers, 9, notTrue) << endl;

    sort(numbers, numbers + 9);
    printArr(numbers, 9);

    bool (&comp)(int a, int b) = numbersCompareReverse;
    sort(numbers, numbers + 9, comp);
    printArr(numbers, 9);

    return 0;
}
