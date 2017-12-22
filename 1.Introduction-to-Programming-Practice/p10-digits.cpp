#include <iostream>
#include <math.h>

using namespace std;

/*
    Да се състави програма, в която потребителят въвежда
    цяло трицифрено число , а програмата извежда на екрана:

        А) сумата от цифрите му;
        Б) произведението от цифрите му;
        В) корен втори от последните две цифри;

*/

int main()
{
    int number;
    int ones, tens, hundreds;

    cout << "Enter three digit number ";
    cin >> number;

    ones = number % 10;
    tens = number / 10 % 10;
    hundreds = number / 100;

    // A)
    cout << "Sum of digits is " << ones + tens + hundreds << endl;

    // B)
    cout << "Multiplication of digits is " <<  ones * tens * hundreds << endl;

    // C)
    cout << "Sqrt from last two digits is " << sqrt (tens) << " and " << sqrt(ones) << endl;

    return 0;
}
