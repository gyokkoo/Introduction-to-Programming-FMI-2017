#include <iostream>

using namespace std;

int main()
{
    int arr[1024], n = 0;

    cout << "Enter length of array n" << endl;
    cin >> n;

    cout << "Enter n integers in range [0..5000]" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << endl;
            }
        }
    }

    return 0;
}
