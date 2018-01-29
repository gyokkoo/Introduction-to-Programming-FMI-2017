/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 77
* @compiler VC
*
*/

#include <iostream>
#include <math.h>

const int BASE = 10;

void printSequence(int counter, int k)
{
	if (counter == 0)
	{
		return;
	}
	std::cout << std::pow(BASE, k - counter + 1) << " ";
	printSequence(counter - 1, k);
	std::cout << std::pow(BASE, k - counter + 1) << " ";
}

int main()
{
	unsigned k = 3;

	printSequence(k, k);
	std::cout << "\n";

	system("pause");
	return 0;
}