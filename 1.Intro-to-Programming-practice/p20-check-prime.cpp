#include <iostream>
#include <math.h>

using namespace std;

/*
    Да се състави програма, в която потребителят въвежда естествено число
    и извежда на екрана дали то е просто.
    Използвайте операторът за цикъл for.
*/
int main()
{
    cout << "Enter integer number" << endl;
    int number = 0;
    cin >> number;

    bool isPrime = true;
    // достатъчно е да се провери до корен квадратен от числото
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break; // прекратява се изпълнението на цикъла
        }
    }

    cout << (isPrime ? "The number is prime" : "The number is not prime") << endl;

    return 0;
}
