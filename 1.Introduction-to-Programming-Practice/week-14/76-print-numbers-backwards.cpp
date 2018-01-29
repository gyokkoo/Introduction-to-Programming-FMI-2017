/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 76
* @compiler VC
*
*/

#include <iostream>

void printNumbers(unsigned n)
{
	if (n == 0)
	{
		return;
	}

	std::cout << n % 10 << " ";
	
	printNumbers(n / 10);
}

int main()
{
	unsigned n = 23453;

	printNumbers(n);
	std::cout << "\n";

	system("pause");
	return 0;
}