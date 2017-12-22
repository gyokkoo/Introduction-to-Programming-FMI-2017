#include <iostream>

using namespace std;

/*
    Дадени са две редици от числа. Да се напише програма, която определя
    колко пъти първата редица се съдържа във втората.
    Например редицата 1,2,3 се съдържа 2 пъти в
    редицата 2,1,2,3,4,5,1,2,3,1,2, а редицата 1,1,1 се съдържа 4 пъти в редицата 1,1,1,1,1,1.
*/
int main()
{
    int firstRow[3] = { 1, 2, 3 };
    int arr[11] = { 2, 1, 2, 3, 4, 5, 1, 2, 3, 1, 2 };

   // int firstRow[3] = { 1, 1, 1};
   // int arr[6] = { 1, 1, 1, 1, 1, 1 };

    int counter = 0;
    bool isEqual;

    for (int i = 0; i <= 11 - 3; i++)
    {
        isEqual = true;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i + j] != firstRow[j])
            {
                isEqual = false;
                break;
            }
        }

        if (isEqual)
        {
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
