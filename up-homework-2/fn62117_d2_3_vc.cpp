/**
*
* Solution to second homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 3
* @compiler VC
*
*/

#include <iostream>
#include <cmath>

/**
@param number Input number
@return True if the number is between -4294967296 and 4294967296
*/
bool isValidNumber(long long number)
{
	return -pow(2, 32) <= number && number <= pow(2, 32);
}

int main()
{
	long long number = 0;
	int digit = 0;
	int digitCounts[10] = {};

	int biggestCount = 0;
	int biggestIndex = 0;
	int current = 0;

	std::cout << "Enter a number: \n";
	std::cin >> number;

	if (!isValidNumber(number))
	{
		std::cout << -1 << "\n";
		system("pause");
		return 0;
	}

	// ff negative remove the minus sign
	if (number < 1)
	{
		number *= -1;
	}

	while (number > 0)
	{
		digit = number % 10;
		// Store the occurrences in array
		digitCounts[digit]++;
		number /= 10;
	}

	// find biggest index
	for (int i = 0; i < 10; i++)
	{
		if (digitCounts[i] > biggestCount)
		{
			biggestCount = digitCounts[i];
			biggestIndex = i;
		}
	}

	// print result
	for (int i = 0; i < 10; i++)
	{
		if (digitCounts[i] == digitCounts[biggestIndex])
		{
			std::cout << i << " -> " << digitCounts[i] << "\n";
		}
	}

	system("pause");
	return 0;
}