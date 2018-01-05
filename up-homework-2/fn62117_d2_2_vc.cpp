/**
*
* Solution to second homework task
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
#include <cstring>

// Helper functions
size_t myStrlen(char* str);

bool isSplitter(char c);

void printCharNTimes(char c, int n);

int getLongestWordCount(char* text);

// Variables
char punctuationMarks[15] = { ' ', '.', '!', '?', '-', '/', '*', ';', ',', ':', '(', ')', '\0'};

const size_t MAX_LENGTH = 100;

void printFormattedWords(char* text)
{
	size_t textLength = myStrlen(text);
	size_t punctuationMarksLength = myStrlen(punctuationMarks);
	size_t currentWordLength = 0;
	int longestWordCount = 0;
	char* token = NULL;
	char* context = NULL;

	longestWordCount = getLongestWordCount(text);

	token = strtok_s(text, punctuationMarks, &context);
	printCharNTimes('-', longestWordCount + 2);
	while (token != NULL)
	{
		std::cout << "\n|";
		std::cout << token;
		currentWordLength = myStrlen(token);
		printCharNTimes(' ', longestWordCount - currentWordLength);
		std::cout << "|";
		token = strtok_s(NULL, punctuationMarks, &context);
	}
	std::cout << "\n";
	printCharNTimes('-', longestWordCount + 2);	
	std::cout << "\n";
}

int main()
{
	char input[MAX_LENGTH + 1];

	std::cout << "Enter input string:\n";
	std::cin.getline(input, MAX_LENGTH, '\n');

	printFormattedWords(input);

	system("pause");
	return 0;
}

/*
Traverse char array and checks if it containts the symbol
@param c Input c
@return true if exists, false otherwise
*/
bool isSplitter(char c)
{
	for (int i = 0; i < 15; i++)
	{
		if (punctuationMarks[i] == c)
		{
			return true;
		}
	}

	return false;
}

/**
Traverse an array of characters and finds the longest word size
@param text Input char array
@return biggestCount The count of the largest word in the input
*/
int getLongestWordCount(char* text)
{
	int currentCount = 0;
	int biggestCount = 0;
	size_t length = myStrlen(text);
	for (size_t i = 0; i < length; i++)
	{
		if (!isSplitter(text[i]))
		{
			currentCount++;
		}
		else
		{
			if (biggestCount < currentCount)
			{
				biggestCount = currentCount;
			}
			currentCount = 0;
		}
	}

	if (biggestCount < currentCount)
	{
		biggestCount = currentCount;
	}

	return biggestCount;
}

/**
Prints a character n times in the console
@param c The character
@param n The length of output
*/
void printCharNTimes(char c, int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << c;
	}
}

/**
Finds the length of given char array
traverse the array and counts the symbols until '\0'
@param str The input string
@return The length of str
*/
size_t myStrlen(char* str)
{
	size_t length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}
