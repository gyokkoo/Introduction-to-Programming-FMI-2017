#include <iostream>

using namespace std;

int main()
{
    int arr[12], n = 0, evenCount = 0, oddCount = 0;
    double sum = 0;

    cout << "Enter n, between 5 and 12" << endl;
    cin >> n;

    cout << "Enter n numbers between 1 and 100" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else if(arr[i] % 2 != 0)
        {

            oddCount++;
        }
    }


    cout << "Even numbers count: " << evenCount << endl;
    cout << "Odd numbers count: " << oddCount << endl;
    cout << "Average of the sum: "<< sum / n << endl;

    return 0;
}
