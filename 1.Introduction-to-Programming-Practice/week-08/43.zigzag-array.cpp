/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 43
* @compiler VC
*
* Assignment:
*   Една редица от естествени числа ще наричаме зигзагообразна нагоре, 
*   ако за елементите й са изпълняват условията: N1 < N2 > N3 < N4 > N5 <.. 
*   Съставете програма (C++), която проверява дали въведени в едномерен масив 
*   редица от числа изпълняват горните изисквания.
*/

#include <iostream>

const int MAX_SIZE = 1024;

bool isZigZagArray(int* arr, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0)
		{
			if (arr[i] >= arr[i + 1])
			{
				return false;
			}
		}
		else if (i % 2 == 1)
		{
			if (arr[i] <= arr[i + 1])
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	int n = 0;
	int arr[MAX_SIZE];

	std::cout << "Enter n and n numbers: \n";
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	if (isZigZagArray(arr, n))
	{
		std::cout << "The array is zig zag\n";
	}
	else
	{
		std::cout << "The array is not zig zag\n";
	}

	system("pause");
	return 0;
}