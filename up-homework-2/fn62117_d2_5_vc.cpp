/**
*
* Solution to second homework task
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2017/2018
*
* @author Gyokan Syuleymanov
* @idnumber 62117
* @task 5
* @compiler VC
*
*/

#include <iostream>
#include <windows.h>
#include <time.h>

using std::cout;
using std::cin;

// Helper functions
void printMatrix();

void initializeMatrix();

void updateMatrix();

void generateNewStar();

void ShowConsoleCursor(bool flag);

// Variables
const int WIDTH = 80; // Console width
const int HEIGHT = 25; // Console height

const int MIN_STARS_COUNT = 3;
const int MAX_STARS_COUNT = 80;

const int DELAY_MILISECONDS = 220;

const char SKY_SYMBOL = ' '; // The empty cells

// Represent the console as 2D array
int matrix[HEIGHT][WIDTH];
int copyMatrix[HEIGHT][WIDTH];

// User input variables
char starSymbol;
int starsCount;

int main()
{
	cout << "Enter star symbol - char: \n";
	cin >> starSymbol;
	do
	{
		cout << "Enter star count - between 3 and 80 \n";
		if (!(cin >> starsCount))
		{
			cin.clear(); // Clear bad input flag
			cin.ignore(1000, '\n'); // Discard input
			cout << "Invalid input! Please re-enter.\n";
		}
	} while (starsCount < MIN_STARS_COUNT || MAX_STARS_COUNT < starsCount);

	// Remove the cursor
	ShowConsoleCursor(false);

	initializeMatrix();
	printMatrix();

	// Endless loop, press CTRL+C for exit
	while (true)
	{
		updateMatrix();

		printMatrix();

		Sleep(DELAY_MILISECONDS);
	}

	system("pause");
	return 0;
}

/**
Function that initialize 2D array with stars
number 6 means the star length so after 6 steps the cell will disappear
number between 1 and 6 means how much life the cell have
0 means empty symbol (matrix default value)
-1 means place where star disappear
*/
void initializeMatrix()
{
	int randomCol = 0;
	int randomRow = 0;
	srand(time(NULL));

	for (int i = 0; i < starsCount; i++)
	{
		// Random number between zero and WIDTH - 1
		randomCol = rand() % WIDTH - 1;

		// Set in first row a random col where the stars start falling
		matrix[0][randomCol] = 6;

		// Random number between 6 and 25
		randomRow = 6 + (rand() % (HEIGHT - 6));

		// Set in randomCol a random row where the star disappear
		matrix[randomRow][randomCol] = -1; // Mark star end;
	}
}

/**
Traverse the matrix and when find a cell with value 6 sets the next row to 6
and decrement the previous values with one e.g.
one star is represent as column 6 5 4 3 2 1 and after each step, set the next row to 6 and
decrement the previous one -> 5 4 3 2 1 0 and the moving effect is achieved
when the next cell is -1 it means that the star dies and a new random star will be generated
*/
void updateMatrix()
{
	for (int row = 0; row < HEIGHT; row++)
	{
		for (int col = 0; col < WIDTH; col++)
		{
			if (matrix[row][col] == 6 && row + 1 < HEIGHT)
			{
				if (matrix[row + 1][col] != -1)
				{
					// Set the next position
					copyMatrix[row + 1][col] = 6;
					for (int i = 0; i < 6; i++)
					{
						// Decrement the star tail
						if (row - i >= 0)
						{
							copyMatrix[row - i][col] = matrix[row - i][col] - 1;
						}
					}
				}
				else
				{
					copyMatrix[row + 1][col] = 0;
					generateNewStar();
				}

			}
		}
	}

	// Set the matrix values with the values of copyMatrix and delete copyMatrix values
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			if (matrix[i][j] != -1)
			{
				matrix[i][j] = copyMatrix[i][j];
			}

			copyMatrix[i][j] = 0;
		}
	}
}

/**
With rand() generate a new star from the first row and in a random col
generate a random row between 6th and 25th row where the star will disappear
and mark the cell in copyMatrix
*/
void generateNewStar()
{
	// srand(time(NULL));

	// Random number between 0 and 79
	int randomCol = rand() % WIDTH - 1;
	copyMatrix[0][randomCol] = 6; // Means after 6 steps the cell will disappear

	// Random number between 5 and 24
	int randomRow = 5 + (rand() % (HEIGHT - 6));
	copyMatrix[randomRow][randomCol] = -1; // Mark star end;
}

/**
The console is represent as 2D array so traverse the array
and print SKY_SYMBOL if there is no star, or the star symbol otherwise
Cleans the console before printing
*/
void printMatrix()
{
	system("cls");

	for (int row = 0; row < HEIGHT; row++)
	{
		for (int col = 0; col < WIDTH; col++)
		{
			if (1 <= matrix[row][col] && matrix[row][col] <= 6)
			{
				cout << starSymbol;
			}
			else
			{
				cout << SKY_SYMBOL;
			}
		}
	}
}

/**
A function that removes the cursor visibiliy
@see https://stackoverflow.com/questions/18028808/blinking-underscore-with-console
*/
void ShowConsoleCursor(bool showFlag)
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = showFlag; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}
