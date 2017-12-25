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
*   Да се напише целочислена функция с параметри n и k, която намира цялото число,
*   което се получава от положителното цяло число n, като се задраска k-тата му
*   отдясно наляво цифра.
*   Например, ако n е 31245 и
*   k е 4, функцията трябва да намери числото 3245,
*   ако k е 2, резултатът трябва да е 3125.
*   При стойности n = 5, а k=1, функцията трябва да връща стойност 0
*/

#include <iostream>
#include <cmath>

int deleteKthDigit(int n, int k);

int main()
{
    int n = 0, k = 0;
    int result = 0;

    std::cout << "Enter n and k:\n";
    std::cin >> n;
    std::cin >> k;

    result = deleteKthDigit(n, k);
    if (result == -1)
    {
        std::cout << "Invalid input!\n";
    }

    std::cout << result << "\n";
}

int deleteKthDigit(int n, int k)
{
    if (n == 0 || k > n)
    {
        return -1;
    }

    int digitsCount = (int)log10(n);

    int leftSideDecimal = round(pow(10, k - 1));
    int rightSideDecimal = round(pow(10, k));

    int rightSide = (n % leftSideDecimal);
    int leftSide = (n / rightSideDecimal);

    int result = leftSide * leftSideDecimal + rightSide;

    return result;
}
