/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 42
* @compiler VC
*
*/

#include <iostream>

const int MAX_SIZE = 1024;

void shiftLeft(int* arr, int n, int startFrom, int position)
{
	int write = startFrom;
	int read = startFrom + position;

	while (read < n)
	{
		arr[write++] = arr[read++];
	}
}

int removeZeroes(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			shiftLeft(arr, n, i, 1);
			i--;
			arr[n-1] = 0;
			n--;
		}
	}

	return n;
}

int main()
{
	int n = 0;
	int arr[MAX_SIZE];

	std::cout << "Enter n and n natural number in range [0.. 5000]: \n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << "The array with removed zeroes in reversed order: \n";
	n = removeZeroes(arr, n);
	for (int i = n - 1; i > 0; i--)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";

	system("pause");
	return 0;
}
