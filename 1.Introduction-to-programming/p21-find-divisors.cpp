#include <iostream>
#include <math.h>

using namespace std;

/*
    Да се състави програма, в която потребителят въвежда естествено число
    и извежда неговите делители.
    Използвайте операторът за цикъл for.
*/
int main()
{
    int number = 0;

    cout << "Enter an integer number: " << endl;
    cin >> number;

    cout << "The numbers divisors are: " << endl;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}
