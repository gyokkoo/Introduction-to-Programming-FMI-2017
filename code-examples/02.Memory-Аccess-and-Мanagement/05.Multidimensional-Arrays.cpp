#include<iostream>

using namespace std;

int main()
{
    const int charMatrixRows = 6;
    const int charMatrixCols = 9;
    char charMatrix[][charMatrixCols] =
    {
        {' ', ' ', '_', '_', ' ', '_', '_', ' ', ' '},
        {' ', '/', ' ', ' ', 'V', ' ', ' ', '\\', ' '},
        {' ', '\\', ' ', ' ', ' ', ' ', ' ', '/', ' '},
        {' ', ' ', '\\', ' ', ' ', ' ', '/', ' ', ' '},
        {' ', ' ', ' ', '\\', ' ', '/', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', 'V', ' ', ' ', ' ', ' '},
        //NOTE: having a comma after the last element (1D array in this case) is ok
    };

    for (int row = 0; row < charMatrixRows; row++)
    {
        for (int col = 0; col < charMatrixCols; col++)
        {
            cout << charMatrix[row][col];
        }
        cout << endl;
    }

    cout << "hearts don't look like that btw" << endl;

    int identityMatrix[][3] =
    {
        {1}, //, 0, 0
        {0, 1}, //, 0
        {0, 0, 1}
    };

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << identityMatrix[row][col] << " ";
        }
        cout << endl;
    }

    int cube[2][3][4] =
    {
        {
            {111, 112, 113, 114},
            {121, 122, 123, 124},
            {131, 132, 133, 134}
        },
        {
            {211, 212, 213, 214},
            {221, 222, 223, 224},
            {231, 232, 233, 234}
        }
    };

    int inputMatrixRows, inputMatrixCols;
    cin >> inputMatrixRows >> inputMatrixCols;

    int inputMatrix[inputMatrixRows][inputMatrixCols];
    for (int row = 0; row < inputMatrixRows; row++)
    {
        for (int col = 0; col < inputMatrixCols; col++)
        {
            cin >> inputMatrix[row][col];
        }
    }

    cout << "The matrix you typed in:" << endl;

    for (int row = 0; row < inputMatrixRows; row++)
    {
        for (int col = 0; col < inputMatrixCols; col++)
        {
            cout << inputMatrix[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
}
