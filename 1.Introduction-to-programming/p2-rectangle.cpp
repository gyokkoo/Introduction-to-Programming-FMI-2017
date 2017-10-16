#include <iostream>

using namespace std;

/*
   Да се напише програма, която изчислява
   параметъра и лицето на правоъгълник със страни 5,4 и 7,9.
*/

int main()
{
    double sideA = 5.4;
    double sideB = 7.9;

    double perimeter = 2 * (sideA + sideB);
    double area = sideA * sideB;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
	
	return 0;
}
