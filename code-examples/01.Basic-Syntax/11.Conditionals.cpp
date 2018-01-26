#include<iostream>
using namespace std;

int main() 
{
    double value1 = 5 * 5 / 2.f;
    double value2 = 5 * 5 / 2;

    double difference;
    if (value1 > value2) 
	{
        cout << "value1 is larger" << endl;
        difference = value1 - value2;
    } 
	else if (value1 == value2) 
	{
        cout << "values are equal" << endl;
        difference = 0;
    } 
	else 
	{
        cout << "value2 is larger" << endl;
        difference = value2 - value1;
    }

    cout << "difference: " << difference << endl;

    return 0;
}
