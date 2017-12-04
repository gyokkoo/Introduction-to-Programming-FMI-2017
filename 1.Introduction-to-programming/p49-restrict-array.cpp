#include <iostream>

using namespace std;

int main()
{
    int arr[1000], length = 0;

    cout << "Enter array length" << endl;
    cin >> length;

    cout << "Fill the array with numbers [-100..+100]" << endl;
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < length; i++)
    {
        if (-25 <= arr[i] && arr[i] <= 25)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}

