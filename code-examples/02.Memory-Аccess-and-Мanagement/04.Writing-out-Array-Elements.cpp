#include<iostream>
#include<cmath>

using namespace std;

const int numRoots = 100;

int main()
{
    double squareRoots[numRoots] = {};

    for (int i = 0; i < numRoots; i++)
    {
        squareRoots[i] = sqrt(i);
    }

    for (int i = 0; i < numRoots; i++)
    {
        cout << squareRoots[i] << endl;
    }

    return 0;
}
