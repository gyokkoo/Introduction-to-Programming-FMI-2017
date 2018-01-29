/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 71
* @compiler VC
*
*/

#include <iostream>

unsigned long long getFactorial(int n)
{
	if (n < 0)
	{
		return -1;
	}
	if (n == 0)
	{
		return 1;
	}

	return n * getFactorial(n - 1);
}

int main()
{
	int n = 0;
	std::cout << "Enter n: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		std::cout << i << "! = " << getFactorial(i) << "\n";
	}

	system("pause");
	return 0;
}