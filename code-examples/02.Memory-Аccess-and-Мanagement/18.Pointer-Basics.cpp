#include<iostream>

using namespace std;

int main()
{
    int number1 = 113;
    int number2 = 271;
    int * pointer = &number1;
    *pointer = 271;
    pointer = &number2;
    *pointer = 113;

    cout << number1 << "(" << &number1 << ")" << endl;
    cout << number2 << "(" << &number2 << ")" << endl;
    cout << pointer << endl;

    string s = "the quick brown fox jumps over the lazy dog";
    string * objPointer = &s;
    cout << objPointer->find("quick") << endl;

    int numbers[] = {13, 42, 69};
    int * arrPointer = &numbers[0];
    int * pointerIndex1 = arrPointer + 1;
    int * pointerIndex2 = arrPointer + 2;
    cout << *arrPointer << "(" << arrPointer << ")" << endl;
    cout << *pointerIndex1 << "(" << pointerIndex1 << ")" << endl;
    cout << *pointerIndex2 << "(" << pointerIndex2 << ")" << endl;

    int * arr = numbers;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    return 0;
}
