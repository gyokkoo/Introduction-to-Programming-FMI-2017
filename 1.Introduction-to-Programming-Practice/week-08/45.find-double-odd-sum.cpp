/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 45
* @compiler VC
*
* Assignment:
*   Да се напише програма, която въвежда редица от n (n<=n<=50) цели числа a0, a1…..an-1 
*   и намира и извежда сумата на тези елементи на редицата, които се явяват удвоени нечетни числа.
*/

#include <iostream>

const int MAX_SIZE = 50;

int main()
{
	int n = 0;
	int arr[MAX_SIZE];
	int sum = 0;

	std::cout << "Enter n, n <= 50 and n natural numbers: \n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] % 2 == 1)
			{
				if (arr[j] == 2 * arr[i])
				{
					std::cout << arr[j] << " ";
					sum += arr[j];
				}
			}
		}
	}

	std::cout << "\n";

	system("pause");
	return 0;
}