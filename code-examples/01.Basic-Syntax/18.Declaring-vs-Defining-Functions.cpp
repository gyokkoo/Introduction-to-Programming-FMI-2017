#include<iostream>

using namespace std;

int main() 
{
    int getMax(int, int);

    int undefinedFunctionNeverCalled(int); //no link error, since we don't call it
    int undefinedFunction(int);

    cout << getMax(5, 7) << endl;
    cout << undefinedFunction(42) << endl;

    return 0;
}

int getMax(int a, int b) 
{
    int maxValue;
    if (a > b) 
	{
        maxValue = a;
    } 
	else 
	{
        maxValue = b;
    }

    return maxValue;
}
