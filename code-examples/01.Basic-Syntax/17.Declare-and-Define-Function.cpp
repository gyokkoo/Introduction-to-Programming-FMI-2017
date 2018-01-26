#include<iostream>

using namespace std;

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

int main() 
{
    cout << getMax(5, 7) << endl;

    return 0;
}
