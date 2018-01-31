#pragma once
#ifndef HEADER_H
#define HEADER_H
//Gyokan Syuleymanov 62117

/*
Helper function to calculate the length of string:
Counts the symbols of given string
size_t is unsigned int and is used when representing size or indexes
@param str Given string
@return length the length of string
*/
size_t myStrLen(const char* str)
{
	size_t length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}

/*
@param arr1 First sorted arr
@param arr2 Second sorted arr
@return Char array with result of first and second, sorted too
*/
char* stringcon(char arr1[], char arr2[])
{
	// get the length of the strings
	size_t firstArrSize = myStrLen(arr1);
	size_t secondArrSize = myStrLen(arr2);

	// The user must delete the dynamic memory!!!
	// here is + 1 because we need 1 place for '\0'
	char *result = new char[firstArrSize + secondArrSize + 1];
	size_t i = 0; // Index for the first array
	size_t j = 0; // Index for the second array
	size_t index = 0; // Index for result array
	bool firstArrTraversed = false;
	bool secondArrTraversed = false;

	// Loop while 
	while (!firstArrTraversed && !secondArrTraversed)
	{
		// The firs symbol is before the second one in the ASCII table
		if (arr1[i] - arr2[j] <= 0)
		{
			result[index] = arr1[i];
			i++;
		}
		else
		{
			result[index] = arr2[j];
			j++;
		}
		index++;

		if (i > firstArrSize - 1)
		{
			firstArrTraversed = true;
		}
		if (j > secondArrSize - 1)
		{
			secondArrTraversed = true;
		}
	}

	if (firstArrTraversed)
	{
		while (j < secondArrSize)
		{
			result[index] = arr2[j];
			index++;
			j++;
		}
	}
	if (secondArrTraversed)
	{
		while (i < firstArrSize)
		{
			result[index] = arr1[i];
			index++;
			i++;
		}
	}

	// Mark the end of the char array with null terminating char
	result[index] = '\0';
	return result;
}

/*
Check if given string exists in another string
@param symbols The another string
@param word The string that must be checked
@return true if it contains, false otherwise
*/
bool doExist(char* symbols, char* word)
{
	size_t symbolsLength = myStrLen(symbols);
	size_t wordLength = myStrLen(word);

	// word is bigger than symbols so cannot exist in less length
	if (symbolsLength < wordLength)
	{
		return false;
	}

	int index = 0;
	for (int i = 0; i <= symbolsLength - wordLength; i++)
	{
		bool doWordExists = true;
		for (int j = 0; j < wordLength; j++)
		{
			if (word[j] != symbols[i])
			{
				doWordExists = false;
				break;
			}
			else
			{
				i++;
			}
		}

		// if this is true it means that the symbols contains word!
		if (doWordExists)
		{
			return true;
		}
	}

	return false;
}


/*
Loop sequence and check if it contains three consecutive elements
@param seq Array of numbers
@param length The Length of seq
@return True if it contains three equal elements in sequence, false otherwise
*/
bool doExist(int seq[], int length)
{
	if (length < 3)
	{
		return false;
	}

	// length - 2 because we don't want to leave the boundaries of seq
	for (int i = 0; i < length - 2; i++)
	{
		if (seq[i] == seq[i + 1] && seq[i + 1] == seq[i + 2])
		{
			// Such numbers exists
			return true;
		}
	}

	// No numbers found;
	return false;
}

#endif // !1
