/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 44
* @compiler VC
*
*/

#include <iostream>

const int MAX_SIZE = 1024;
const int NUMBER_SET_SIZE = 3;

int main()
{
	int numberSet[]= { 1, 3, 5 };
	int inputNumbers[MAX_SIZE] = {};
	int n = 0;
	bool isSubset = true;
	bool currentExist = true;

	std::cout << "Enter n and n integer numbers\n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> inputNumbers[i];
	}
	
	for (int i = 0; i < NUMBER_SET_SIZE; i++)
	{
		currentExist = false;
		for (int j = 0; j < n; j++)
		{
			if (numberSet[i] == inputNumbers[j])
			{
				currentExist = true;
			}
		}
		if (!currentExist)
		{
			isSubset = false;
		}
	}

	std::cout << (isSubset ? "Is subset" : "Is not subset") << "\n";

	system("pause");
	return 0;
}