#include <iostream>
#include <math.h>

using namespace std;

/*
    Напишете програма, в която потребителят въвежда обема на куб,
    а програмата изчислява дължината на страните му и ги извежда на екрана.
*/

int main()
{
    double volume = 0;
    double side = 0;

    cout << "Enter volume of a cube ";
    cin >> volume;

    side = pow (volume, 1.0 / 3.0);
    cout << "The side is " << side << endl;

    return 0;
}
