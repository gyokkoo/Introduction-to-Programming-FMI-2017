/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 36
* @compiler GCC
*
* Assignment:
*   Да се напише програма с функция за изчисляване на числата на Фибоначи.
*   Като аргумент на функцията се предава номерът на числото, в редицата,
*   а функцията връща като резултат самото число.
*/

#include <iostream>

int getNthFibonacci(int n)
{
    int fib1 = 0, fib2 = 1, nextFib = 0;

    if (n == 0)
    {
        return fib1;
    }

    if (n == 1)
    {
        return fib2;
    }

    for (int i = 2; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }

    return fib2;
}

int main()
{
    int n = 0;
    std::cout << "Find n-th fibonacci, n = ";
    std::cin >> n;

    std::cout << getNthFibonacci(n) << "\n";
    return 0;
}
