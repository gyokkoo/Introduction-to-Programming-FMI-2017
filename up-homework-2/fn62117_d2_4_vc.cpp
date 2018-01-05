/**
*
* Solution to second homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 4
* @compiler VC
*
*/

#include <iostream>

// Helper functions
void setSubstring(const char* text, char* substring, size_t startIndex, size_t endIndex);

bool isPalindrome(const char* text, size_t textLength);

size_t myStrlen(char* str);

int myStrcmp(const char* text1, const char* text2);

struct palindrome
{
	char* text;
	int occurrence = 0;
};

const size_t MAX_LENGTH = 50;

int main()
{
	char text[MAX_LENGTH + 1];
	size_t textLength = 0;

	char tempSubstring[MAX_LENGTH + 1];
	char* substring;

	// Array of struck palindrome, store the palindroems
	palindrome palindromes[MAX_LENGTH];
	// The index of last palindrome
	size_t pIndex = 0;

	// Array of char arrays
	char ** palindromePtr = new (std::nothrow) char*[MAX_LENGTH];
	if (!palindromePtr)
	{
		std::cout << "Memory problem!\n";
		system("pause");
		return 1;
	}

	// The index of last elelement
	int cIndex = 0;

	// Read input
	std::cout << "Enter input string up to 50 symbols!\n";
	std::cin.getline(text, MAX_LENGTH);
	textLength = myStrlen(text);

	for (size_t i = 0; i < textLength; i++)
	{
		for (size_t j = i + 1; j < textLength; j++)
		{
			// tempSubstring is char array
			setSubstring(text, tempSubstring, i, j);
			if (isPalindrome(tempSubstring, myStrlen(tempSubstring)))
			{
				// Use dynammic memory
				palindromePtr[cIndex] = new (std::nothrow) char[textLength];
				substring = palindromePtr[cIndex];
				setSubstring(text, substring, i, j);

				bool hasAdded = false;
				for (int p = 0; p < pIndex; p++)
				{
					// If find existing palindrome
					if (myStrcmp(palindromes[p].text, substring) == 0)
					{
						palindromes[p].occurrence++;
						hasAdded = true;
					}
				}
				
				// No needed new palindrome
				if (!hasAdded)
				{
					palindromes[pIndex].text = substring;
					palindromes[pIndex].occurrence++;
					pIndex++;
				}
				cIndex++;
			}
		}
	}
	
	// Print result
	for (size_t i = 0; i < pIndex ; i++)
	{
		std::cout << palindromes[i].text << " -> " << palindromes[i].occurrence << "\n";
	}

	// Delete used memory
	delete[] palindromePtr;

	system("pause");
	return 0;
}

/**
Traverse from startIndex to endIndex and set values to substring
@param text The read string
@param substring The write string
@param startIndex Start index
@param endIndex End index
*/
void setSubstring(const char* text, char* substring, size_t startIndex, size_t endIndex)
{
	size_t j = 0;
	for (size_t i = startIndex; i <= endIndex; i++, j++)
	{
		substring[j] = text[i];
	}

	// Mark the end
	substring[j] = '\0';
}

/** 
Traverse given string and checks if it is valid palindrome
@param text Given string
@param textLength The string length
@return true if is palindrome, false otherwise
*/
bool isPalindrome(const char* text, size_t textLength)
{
	for (size_t i = 0; i < textLength / 2; i++)
	{
		if (text[i] != text[textLength - i - 1])
		{
			return false;
		}
	}

	return true;
}

/**
Compare two strings lexicographically
@param str1 First string
@param str2 Second string
@return 0 if equal, negative if the second string is bigger, 
positive if first is bigger
*/
int myStrcmp(const char* str1, const char* str2)
{
	while (*str1 && *str1 == *str2)
	{
		++str1;
		++str2;
	}
	return *str1 - *str2;
}

/**
Finds the length of string
@param str The input string
@return The length of str
*/
size_t myStrlen(char* str)
{
	size_t length = 0;
	while (str[length])
	{
		length++;
	}

	return length;
}