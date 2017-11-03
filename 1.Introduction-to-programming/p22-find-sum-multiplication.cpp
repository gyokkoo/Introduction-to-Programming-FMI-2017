#include <iostream>

using namespace std;
/*
    Напишете програма, която приема числа от клавиатурата,
    докато не срещне 0 и отпечатва сумата и произведението им.
*/
int main()
{
    double number;
    double sum = 0;
    double multiplication = 1;

    cout << "Enter numbers (0 for end loop)" << endl;
    cin >> number;
    while (number != 0)
    {
        sum += number;
        multiplication *= number;

        cin >> number;
    }

    cout << "The sum is: " << sum << endl;
    cout << "The multiplication is: " << multiplication << endl;

    return 0;
}
