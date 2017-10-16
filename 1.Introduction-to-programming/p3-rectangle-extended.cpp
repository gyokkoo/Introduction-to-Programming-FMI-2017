#include <iostream>

using namespace std;

/*
   Да се напише програма, която изчислява параметъра
   и лицето на правоъгълник, при която потребителят
   последователно въвежда дължините на страните.
   Използвайте cin и cout.
*/

int main()
{
    double sideA = 0;
    double sideB = 0;

    cout << "Enter rectangle width: ";
    cin >> sideA;

    cout << "Enter rectangle height: ";
    cin >> sideB;

    double perimeter = 2 * (sideA + sideB);
    double area = sideA * sideB;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
	
	return 0;
}
