#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Note: this file needs to exist in the same directory as the compiled program, before running the code.
    //If it doesn't, no input will be read (and the sum will remain 0)
    ifstream fileInput("15-input.txt");
    int sum = 0;
    int number = 0;
    while (fileInput >> number)
    {
        sum += number;
    }

    //Note: this file will be created if it doesn't exist and overwritten if it does
    ofstream fileOutput("15-output.txt");
    fileOutput << sum << endl;

    return 0;
}
