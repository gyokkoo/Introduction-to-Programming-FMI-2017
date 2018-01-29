/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 73
* @compiler VC
*
*/

#include <iostream>

void printBinary(unsigned n, unsigned i)
{
	if (i == 0)
	{
		return;
	}

	std::cout << ((n & i) ? 1 : 0);
	printBinary(n, i / 2);
}

int main()
{
	printBinary(10, 1 << 31);
	std::cout << "\n";

	system("pause");
	return 0;
}