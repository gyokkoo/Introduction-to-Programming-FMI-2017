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

int main() 
{
    cout << getMax(5, 7) << endl;

    return 0;
}
