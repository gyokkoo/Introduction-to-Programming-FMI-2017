/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 72
* @compiler VC
*
*/

#include <iostream>
#include <math.h>

bool isPrime(int number, int i)
{
	if (number == 2)
	{
		return true;
	}
	if (number % i == 0 || number <= 1)
	{
		return false;
	}

	if (i >= sqrt(number))
	{
		return true;
	}

	isPrime(number, i + 1);
}

bool isPrimeWrapper(int number)
{
	return isPrime(number, 2);
}

int main()
{
	int n = 0;
	std::cout << "Enter n: ";
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		 std::cout << i << " -> " 
			<< ((isPrimeWrapper(i)) ? "Prime" : "Not Prime") << "\n";
	}
	
	system("pause");
	return 0;
}