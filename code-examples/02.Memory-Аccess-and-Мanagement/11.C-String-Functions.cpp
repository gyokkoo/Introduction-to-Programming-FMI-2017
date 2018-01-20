#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char allLetters[44] = "";

    strcat(allLetters, "the ");
    strcat(allLetters, "quick ");
    strcat(allLetters, "brown ");
    strcat(allLetters, "fox ");
    strcat(allLetters, "jumps ");
    strcat(allLetters, "over ");
    strcat(allLetters, "the ");
    strcat(allLetters, "lazy ");
    strcat(allLetters, "dog");

    cout << allLetters << endl;
    cout << strlen(allLetters) << endl;

    char* foxAddress = strstr(allLetters, "fox");
    char* catAddress = strstr(allLetters, "cat");

    if (foxAddress)
    {
        cout << "fox found at index " << foxAddress - allLetters << endl;
    }
    else
    {
        cout << "No fox found" << endl;
    }

    if (catAddress)
    {
        cout << "cat found at index " << endl;
        cout << foxAddress - allLetters << endl;
    }
    else
    {
        cout << "No cat found" << endl;
    }

    return 0;
}
