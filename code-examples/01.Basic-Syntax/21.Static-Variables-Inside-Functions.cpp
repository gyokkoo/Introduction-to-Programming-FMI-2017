#include<iostream>

using namespace std;

double movingAverage(int nextNumber) 
{
    static int numbers = 0;
    static int total = 0;
    total += nextNumber;
    numbers++;
    return total / (double)numbers;
}

int main() 
{
    cout << movingAverage(1) << endl; //average 1
    cout << movingAverage(2) << endl; //average 1.5
    cout << movingAverage(12) << endl; //average 5
    cout << movingAverage(-5) << endl; //average 2.5

    return 0;
}
