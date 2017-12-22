#include <iostream>

using namespace std;

/*
Да се напише програма, която:
    а) чете числа от клавиатурата и прави сума на тези от тях,
които са по-малки или равни на 30, докато тази сума не надхвърли 100.
    б) чете числа от клавиатурата и ги сумира, докато сумата им не надхвърли 100.
*/
int main()
{
    int sum = 0;
    double number;

    cout << "Enter numbers:" << endl;
    cin >> number;

    // a)
    while (sum <= 100)
    {
        // b) without the if
        if (number <= 30)
        {
            sum += number;
        }

        cin >> number;
    }

    sum -= number;
    cout << "The target sum is: " << sum;
}
