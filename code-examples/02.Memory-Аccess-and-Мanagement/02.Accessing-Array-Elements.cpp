#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double vector2d[2] = {};
    cin >> vector2d[0] >> vector2d[1];

    double length = sqrt(vector2d[0] * vector2d[0] + vector2d[1] * vector2d[1]);
    vector2d[0] /= length;
    vector2d[1] /= length;

    cout << vector2d[0] << " " << vector2d[1] << endl;

    return 0;
}
