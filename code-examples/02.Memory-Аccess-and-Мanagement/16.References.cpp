#include<iostream>
using namespace std;

int main()
{
    int number = 42;
    int& numberReference = number;
    numberReference = 13; //changes the value of number to 13

    //int& uninitializedReference; //this gives a compile-time error

    cout << numberReference << endl;
    cout << number << endl;

    return 0;
}
