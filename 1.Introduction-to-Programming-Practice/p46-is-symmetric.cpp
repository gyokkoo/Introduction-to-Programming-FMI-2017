#include <iostream>

using namespace std;

int main()
{
    char sequence[100]  = {};
    int length = 0;
    bool isSymmtetric = true;

    cout << "Enter sequence length: " << endl;
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cin >> sequence[i];
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (sequence[i] != sequence[length - i - 1])
        {
            isSymmtetric = false;
        }
    }

    cout << ((isSymmtetric) ? "Is Symetric" : "Is not symetric") << endl;

    return 0;
}
