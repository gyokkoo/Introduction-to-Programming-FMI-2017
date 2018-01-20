#include<iostream>
#include<sstream>

using namespace std;

int main() {
    cout << "Please enter a line of numbers to sum:" << endl;
    int sum = 0;

    bool successfulInput = false;
    while (!successfulInput)
    {
        ostringstream unparsedStrings;
        string inputLine;
        getline(cin, inputLine);

        istringstream inputStream(inputLine);
        int number = 0;
        successfulInput = true;
        while (inputStream)
        {
            if (inputStream >> number)
            {
                sum += number;
            }
            else
            {
                //we couldn't read the number - clear the error state and read it as a string
                inputStream.clear();
                string unparsed;
                inputStream >> unparsed;
                if (!unparsed.empty())
                {
                    successfulInput = false;
                    unparsedStrings << unparsed << " ";
                }
            }
        }

        if (!successfulInput)
        {
            cout << "Couldn't parse the following numbers, enter them again: " << endl;
            cout << unparsedStrings.str() << endl;
        }
    }

    cout << sum << endl;

    return 0;
}
