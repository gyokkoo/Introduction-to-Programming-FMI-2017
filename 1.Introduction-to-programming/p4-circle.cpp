#include <iostream>

using namespace std;

/*
   Да се напише програма, която:
    А) Потребителят въвежда радиус на окръжност;
    Б) Програмата изчислява дължината на окръжността;
    В) Програмата изчислява лицето на окръжността при зададения радиус.
    PI = 3,14159265
*/

const double PI = 3.14159265;

int main()
{
    double radius = 0;

    cout << "Enter radius: ";
    cin >> radius;

    double perimeter = 2 * PI * radius;
    double area = PI * radius * radius;

    cout << "Perimeter = " << perimeter << endl;
    cout << "Area = " << area << endl;
	
	return 0;
}
