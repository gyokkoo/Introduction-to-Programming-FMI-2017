/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 74
* @compiler VC
*
*/

#include <iostream>
#include <stdio.h>

int getOnesCount(unsigned n, unsigned i, unsigned onesCount)
{
	if (i == 0)
	{
		return onesCount;
	}

	if (n & i)
	{
		onesCount++;
	}

	return getOnesCount(n, i / 2, onesCount);
}

int main()
{
	int number = 10;
	int onesCount = getOnesCount(number, 1 << 31, 0);
	printf("In number: %u we have %d zeroes and %d ones!\n", number, 32 - onesCount, onesCount);
	
	system("pause");
	return 0;
}