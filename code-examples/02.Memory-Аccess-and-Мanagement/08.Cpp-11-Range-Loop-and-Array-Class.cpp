#include<iostream>
#include<array>

using namespace std;

int main()
{
    int numbers[] = {13, 42, 69};

    for (auto number : numbers)
    {
        cout << number << endl;
    }

    int matrix[][3] =
    {
        {1,2,3},
        {4,5,6}
    };

    for (auto &row : matrix)
    {
        for (auto element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    array<double, 5> arr = {0.13, 0.42, 0.69};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
