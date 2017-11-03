#include <iostream>

using namespace std;

/*
     Напишете програма, която приема цяло положително число и
     намира броя на цифрите му.
        Примери:
            1 -> 1
            1740784 -> 7
            875 -> 3
            0 -> 0

*/
int main()
{
    int number;
    int digitsCount = 0;

    cout << "Enter integer number" << endl;
    cin >> number;

    while (number != 0)
    {
        digitsCount++;
        number /= 10;
    }

    cout << "The digits count is: " << digitsCount << endl;
    return 0;
}
