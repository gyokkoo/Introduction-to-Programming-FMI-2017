#include<iostream>

using namespace std;

int getMax(int a, int b) 
{
    if (a > b) 
	{
        return a;
    }

    return b;
}

int getMax(int a, int b, int c) 
{
    return getMax(a, getMax(b, c));
}

int main() 
{
    cout << getMax(5, 7) << endl;
    cout << getMax(5, 42, 7) << endl;

    return 0;
}
