/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 2
* @compiler VC
*
*/

#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::min;
using std::max;

/*
Finds the Greatest Common Divisor
@param firstNumber first input number
@param secondNumber second input number
@return the GCD of the two numbers
*/
int gcd(int firstNumber, int secondNumber)
{
	int r = 0;
	while (secondNumber != 0)
	{
		r = firstNumber % secondNumber;
		firstNumber = secondNumber;
		secondNumber = r;
	}

	return firstNumber;
}

/*
Pour recursive function that finds the count of steps 
needed to measure exactly k litres
@param from Represents the jug where the water is taken from
@param to Represents the jug where the water is poured
@param n The value of first jug
@param m The value of second jug
@param k The target value to be measured
@param counter The steps needed
@return counter The steps
*/
int pourWater(int from, int to, int n, int m, int k, int counter)
{
	if (from == k || to == k)
	{
		return counter;
	}

	int waterTransfer = min(from, m - to);
	counter++;
	if (from - waterTransfer == k || to + waterTransfer == k)
	{
		return counter;
	}

	if (from - waterTransfer == 0)
	{
		pourWater(n, to + waterTransfer, n, m, k, counter + 1);
	}
	else if (to + waterTransfer == m)
	{
		pourWater(from - waterTransfer, 0, n, m, k, counter + 1);
	}
	else
	{
		pourWater(from - waterTransfer, to + waterTransfer, from, m, k, counter + 1);
	}
}

int main()
{
	int n = 0, m = 0, k = 0;

	cout << "Please, enter m, n and k [1..20]\n";
	cin >> n;
	cin >> m;
	cin >> k;

	// k must be less than biggest jug and GCD(m, n) must divide k
	if (k <= max(m, n) && (k % gcd(m, n) == 0))
	{
		cout << min(pourWater(m, 0, m, n, k, 1), pourWater(n, 0, n, m, k, 1)) << "\n";
	}
	else
	{
		cout << -1 << "\n";
	}

	system("pause");
	return 0;
}