#include<iostream>
using namespace std;

int main() 
{
    int fibonacciToCalculate = 5;

    /*int lastNum = 1;
    int currentNum = 1;
    for(int i = 2; i < fibonacciToCalculate; i++) {
        int newCurrent = lastNum + currentNum;
        lastNum = currentNum;
        currentNum = newCurrent;
    }*/

    // NOTE: this is equivalent to the above
    int currentNum = 1;
    for(int i = 2, lastNum = 1, newCurrent;
        i < fibonacciToCalculate;
        i++, newCurrent = lastNum + currentNum, lastNum = currentNum, currentNum = newCurrent) 
	{
    }

    cout << currentNum << endl;

    return 0;
}
