/**
*
* Solution to exercises
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 41
* @compiler VC
*
* Assignment:
*   Напишете програма, която умножава скаларно два n-мерни вектора. 
*	За целта прочетете n (1 <= n <= 100) и две редици от n реални числа, 
*	които са съответните координати на двата вектора.
*/

#include <iostream>

const int MAX_SIZE = 100;

int main()
{
	int n = 0;
	double firstArr[MAX_SIZE], secondArr[MAX_SIZE];
	double scalarProduct = 0;

	std::cout << "Enter n (1 <= n <= 100) length of two numbers array \n";
	do 
	{
		std::cout << "n = ";
		std::cin >> n;
	} while (n < 1 || n > MAX_SIZE);
	
	std::cout << "Enter the numbers of first array: \n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> firstArr[i];
	}

	std::cout << "Enter the numbers of second array: \n";
	for (int i = 0; i < n; i++)
	{
		std::cin >> secondArr[i];
	}

	for (int i = 0; i < n; i++)
	{
		scalarProduct += firstArr[i] * secondArr[i];
	}

	std::cout << "The scalar product is:\n" << scalarProduct << "\n";

	system("pause");
	return 0;
}