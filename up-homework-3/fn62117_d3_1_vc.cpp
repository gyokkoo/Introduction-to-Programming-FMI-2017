/**
*
* Solution to homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 1
* @compiler VC
*
*/

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;

// The maximum length of the string
const int MAX_LENGTH = 1024;

/*
Traverse given string and check if contains opening bracket '(' and closing bracket ')'
@param str Input string
@return True if str contains bracket
False if does not contain bracket
*/
bool containsBrackets(const char* str)
{
	size_t strLength = strlen(str);
	for (size_t i = 0; i < strLength; i++)
	{
		if (str[i] == '(' || str[i] == ')')
		{
			return true;
		}
	}

	return false;
}

/*
Recursive function that checks if given string is balanced
balanced string is "closed" and "correct"
closed means that after each opening bracket there is a closing bracket
correct means that each closed sub-string has an equal number of opening and closing brackets
@param str The given string
@param index Represent the position of current symbol
@param counter Integer counter that is incremented when opening bracket is met
and decremented when closing bracket is met
*/
bool isBalanced(const char* str, size_t index, int counter)
{
	// Recursion bottom 
	// Negative counter means that closing bracket does not close opening bracket
	// so the string is not closed
	if (counter < 0)
	{
		return false;
	}

	// Recursion bottom 
	// When the whole string is traversed
	// return true if counter is 0
	// return false otherwise
	if (index == strlen(str))
	{
		return counter == 0;
	}

	// Recursion calls
	if (str[index] == '(')
	{
		return isBalanced(str, index + 1, counter + 1);
	}
	else if (str[index] == ')')
	{
		return isBalanced(str, index + 1, counter - 1);
	}
	else
	{
		return isBalanced(str, index + 1, counter);
	}
}

/*
A wrapper function that calls the recrusive function with
initial values index = 0 and counter = 0
*/
bool isBalancedWrapper(const char* str)
{
	return isBalanced(str, 0, 0);
}

int main()
{
	char inputStr[MAX_LENGTH];
	bool isCorrect;
	cin.getline(inputStr, MAX_LENGTH);

	// If does not contain brackets the string is incorrect
	if (!containsBrackets(inputStr))
	{
		isCorrect = false;
	}
	else
	{
		isCorrect = isBalancedWrapper(inputStr);
	}

	// Print result
	cout << (isCorrect ? "correct" : "incorrect") << "\n";

	cout << "Press the Enter key to continue.";
	cin.get();

	return 0;
}