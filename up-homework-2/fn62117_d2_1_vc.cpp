/**
*
* Solution to second homework task
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
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;

// Helper functions
char* getRandomWord();

void initializeGuessWord();

char toLowerCase(char letter);

bool isValidLetter(char letter);

bool isCorrectMatch(char letter);

bool hasWon();

void findAndReplace(char letter);

size_t myStrlen(char* str);

const int WORDS_COUNT = 30;
const int MAX_WORDS_LENGTH = 15;
const char EMPTY_LETTER_SYMBOL = '_';

// Initialize 2D array
char words[WORDS_COUNT][MAX_WORDS_LENGTH] =
{
	"student", "refrigerator", "challenge", "noir", "channel",
	"bland", "helicopter", "hideous", "degenerate", "fatality",
	"afterlife", "reversal", "dazzling", "consumption", "detonator",
	"crispy", "action", "battle", "accessories", "bear",
	"condo", "pony", "ambidextrous", "goofball", "circle",
	"courageous", "sponge", "brown", "handlebars", "levitating"
};

// The word that is hidden from the player
char* secretWord;

// The word that the player see
char guessWord[MAX_WORDS_LENGTH];

// The length of the secret word
size_t wordLength;

int main()
{	
	int livesCount = 0;
	char guessLetter = '\0';

	// Choose a random secret word
	secretWord = getRandomWord();
	wordLength = myStrlen(secretWord);

	do
	{
		cout << "Enter lives count\n";
		if (!(cin >> livesCount) || livesCount <= 0)
		{
			cin.clear(); // Clear bad input flag
			cin.ignore(1000, '\n'); // Discard input
			cout << "Invalid input! Please re-enter.\n";
		}
	} while (livesCount <= 0);

	// Shows the first and last letter
	initializeGuessWord();

	cout << guessWord << "\n";
	cout << "Attempts left: " << livesCount << "\n";

	while (true)
	{
		cout << "Guess a letter: ";
		cin >> guessLetter;

		// Check if the input is valid english letter
		if (!isValidLetter(guessLetter))
		{
			cout << "The input char is not valid letter!\n";
			continue;
		}

		// Transfrom upper case to lower case
		guessLetter = toLowerCase(guessLetter);

		if (isCorrectMatch(guessLetter))
		{
			findAndReplace(guessLetter);

			if (hasWon())
			{
				cout << "Congratulations, you win!\n";
				cout << "The word is '" << secretWord << "'.\n";
				break;
			}

			cout << "Success!\n";
			cout << guessWord << "\n";
			cout << "Attempts left: " << livesCount << "\n";
		}
		else
		{
			livesCount--;

			if (livesCount <= 0)
			{
				cout << "Your loose!\n";
				cout << "The word is '" << secretWord << "'.\n";
				break;
			}
			
			cout << "Mismatch!\n";
			cout << guessWord << "\n";
			cout << "Attempts left: " << livesCount << "\n";
		}
	}

	system("pause");
	return 0;
}


/**
Initialize the guessWord with EMPTY_LETTER_SYMBOL
Marks the end of the string
Makes the first letter and last letter visible
*/
void initializeGuessWord()
{
	char firstLetter = secretWord[0];
	char lastLetter = secretWord[wordLength - 1];

	for (size_t i = 0; i < wordLength; i++)
	{
		// Sets all symbols to '_'
		guessWord[i] = EMPTY_LETTER_SYMBOL;
	}

	// Mark the end of the string
	guessWord[wordLength] = '\0';

	findAndReplace(firstLetter);
	findAndReplace(lastLetter);
}

/**
Transform letter to lower case
Traverse the secret word and replace guess word
if the letter is correct
@param letter The user input letter
*/
void findAndReplace(char letter)
{
	for (size_t i = 0; i < wordLength; i++)
	{
		if (secretWord[i] == letter)
		{
			guessWord[i] = letter;
		}
	}
}

/**
Transforms from upper to lower case and
checks each letter from the word if it
contains the letter and if guess word has empty symbol
@param letter input guess letter
@return ttrue when correct, false if is not valid or not correct
*/
bool isCorrectMatch(char letter)
{
	letter = toLowerCase(letter);
	if (!isValidLetter(letter))
	{
		return false;
	}
	
	// Check if the word containts the letter
	for (size_t i = 0; i < wordLength; i++)
	{
		if (secretWord[i] == letter && guessWord[i] == EMPTY_LETTER_SYMBOL)
		{
			return true;
		}
	}

	return false;
}

/**
Upper case and lower case english letters are valid
@param c The input char
@return True if char is valid letter, False otherwise
*/
bool isValidLetter(char c)
{
	return  ('A' <= c && c <= 'Z')
		|| ('a' <= c && c <= 'z');
}

/**
Check if given symbol is capital letter and transform it
to lower case, by adding to it the value of 'a' - 'A'
@param letter Input char symbol
@return letter The symbol
*/
char toLowerCase(char letter)
{
	if ('A' <= letter && letter <= 'Z')
	{
		letter = letter + ('a' - 'A');
	}

	return letter;
}

/**
Traverse the user word progress and checks
if it contains EMPTY_LETTER_SYMBOL
@return True if it does not contains empty letters,
False if it contains, so the game continuеs
*/
bool hasWon()
{
	for (size_t i = 0; i < wordLength; i++)
	{
		if (guessWord[i] == EMPTY_LETTER_SYMBOL)
		{
			return false;
		}
	}

	return true;
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

/**
Seeds the time for rand() function and
generates a random number between zero and words count - 1
the random number is an index from words array
@return A random word from the words array
*/
char* getRandomWord()
{
	srand((int)time(0));

	int randomIndex = (rand() % WORDS_COUNT);

	return words[randomIndex];
}