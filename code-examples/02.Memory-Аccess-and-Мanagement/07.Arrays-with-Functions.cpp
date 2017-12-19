#include<iostream>

using namespace std;

void print(int arr[], const int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void printMatrixCol3(int matrix[][3], const int arrRows)
{
    for (int row = 0; row < arrRows; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

//Want to be able to print any matrix? One approach is templates (will be covered later on).
//For a 3x7 matrix named someMatrix, call this like so: printMatrix<3, 7>(someMatrix);
//For now you can imagine that once the compiler sees the above it generates a printMatrix function by doing find-replace of R and C with 3 and 7
//TODO: knowing the above, can you think of how you can make something similar to this to work for any type, not just char?
template<unsigned int R, unsigned int C>
void printCharMatrix(char matrix[R][C])
{
    for (int row = 0; row < R; row++)
    {
        for (int col = 0; col < C; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int numbersLength = 3;
    int numbers[numbersLength] = {1,2,3};

    print(numbers, numbersLength);
    print(numbers, 3);

    const int rows = 4;
    const int cols = 3;
    int matrix[rows][cols] =
    {
        {11, 12, 13},
        {21, 22, 23},
        {31, 32, 33},
        {41, 42, 43}
    };

    printMatrixCol3(matrix, rows);

    const int charMatrixCols = 9;
    char charMatrix[][charMatrixCols] =
    {
        {' ', ' ', '_', '_', ' ', '_', '_', ' ', ' '},
        {' ', '/', ' ', ' ', 'V', ' ', ' ', '\\', ' '},
        {' ', '\\', ' ', ' ', ' ', ' ', ' ', '/', ' '},
        {' ', ' ', '\\', ' ', ' ', ' ', '/', ' ', ' '},
        {' ', ' ', ' ', '\\', ' ', '/', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', 'V', ' ', ' ', ' ', ' '}, //NOTE: having a comma after the last element (1D array in this case) is ok
    };

    printCharMatrix<6, charMatrixCols>(charMatrix);

    return 0;
}
