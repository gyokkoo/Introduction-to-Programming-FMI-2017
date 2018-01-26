#include<iostream>

using namespace std;

int main() 
{
    int numbersCount;

    cin >> numbersCount;

    double sum = 0;
    for (int i = 0; i < numbersCount; i++) 
	{
        double currentNum;
        cin >> currentNum;

        sum += currentNum;
    }

    cout << sum << endl;

    return 0;
}
