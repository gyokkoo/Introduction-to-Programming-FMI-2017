/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 78
* @compiler VC
*
*/

#include <iostream>

int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}

	return gcd(b, a % b);
}

int main()
{
	int a = 25;
	int b = 15;
	std::cout << gcd(a, b) << "\n";

	system("pause");
	return 0;
}