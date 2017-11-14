#include <iostream>

using namespace std;

int main()
{
    int d1, d, n;
    cout << "Enter first d1, d and n" << endl;

    cin >> d1;
    cin >> d;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << d1 << " " << endl;
        d1 += d;
    }
}
