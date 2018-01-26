#include<iostream>
using namespace std;

int main() 
{
    int a = 5;
    int b = a % 3;
    // What will happen if we initializa b like this?
    // int b = a % 5;

    if (a = b) 
	{
        cout << "equal" << endl;
    } 
	else 
	{
        cout << "not equal" << endl;
    }

    return 0;
}
