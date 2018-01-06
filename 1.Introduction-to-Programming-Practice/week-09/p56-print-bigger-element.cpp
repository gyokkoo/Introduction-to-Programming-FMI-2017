/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 56
* @compiler GCC
*
* Assignment:
*   Дадени са два едномерни масива с естествени числа от интервала [0..299].
*   Да се състави програма, която сравнява всички числа с еднакви индекси
*   от двата масива и записва в трети масив, по-голямото от двете числа.
*   Да се изведе съдържанието и на трите масива
*   Пример:
*   18,19,32,1,3, 4, 5, 6, 7, 8
*   1, 2, 3,4,5,16,17,18,27,11
*   Изход:
*   18,19,32 ,4,5,16,17,18,27,11
*/
#include <iostream>

using namespace std;

const int MAX_COUNT = 1000;

int main()
{
    int n = 0;
    int firstArr[MAX_COUNT], secondArr[MAX_COUNT];
    int resultArr[MAX_COUNT];
    cout << "Enter N and two arrays with size N" << endl;
    cout << "N=";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> firstArr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> secondArr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (firstArr[i] >= secondArr[i])
        {
            resultArr[i] = firstArr[i];
        }
        else
        {
            resultArr[i] = secondArr[i];
        }

        cout << resultArr[i] << " ";
    }
    cout << endl;

    return 0;
}
