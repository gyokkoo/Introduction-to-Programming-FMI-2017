#include<iostream>
#include<sstream>
#include<limits>

using namespace std;

int main() {
    string inputData = "31   24 96 255 -1";

    istringstream inputStream(inputData);

    int maxNum = numeric_limits<int>::min();

    int currentNum = 0;
    while (inputStream >> currentNum)
    {
        if (currentNum > maxNum)
        {
            maxNum = currentNum;
        }
    }

    //note: we could also reuse the first inputStream, if we reset it
    istringstream readAgainStream(inputData);
    currentNum = 0;

    ostringstream outputStream;
    //note: <html><body> could be a single string here
    outputStream << "<html>" << "<body>";

    while (readAgainStream >> currentNum)
    {
        if (currentNum == maxNum)
        {
            outputStream << "<div style='color: red; font-size: 3em;'>"
                << currentNum << "</div>";
        }
        else
        {
            outputStream << "<div>" << currentNum << "</div>";
        }
    }

    outputStream << "</body>" << "</html>";

    cout << outputStream.str() << endl;

    return 0;
}
