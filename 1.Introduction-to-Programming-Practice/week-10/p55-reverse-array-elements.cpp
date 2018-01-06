/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 55
* @compiler GCC
*
* Assignment:
*   Да се състави програма, чрез която предварително въведени N
* естествени числа от интервала [0..5000] в едномерен масив се
* разменят местата на елементите му в обратен ред.
*  Пример: 1,2,4,3,5,6,7 Изход: 7,6,5,3,4,2,1
*/
#include <iostream>

using namespace std;

const int MAX_SIZE = 1000;

int main()
{
    int arr[MAX_SIZE];
    int n = 0, tempElement = 0;

    cout << "Enter N, and N integer numbers" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reverse elements
    for (int i = 0; i < n / 2; i++)
    {
        tempElement = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = tempElement;
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
