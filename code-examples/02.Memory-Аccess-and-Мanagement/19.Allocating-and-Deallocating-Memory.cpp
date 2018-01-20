#include<iostream>
#include<sstream>
#include<string>
using namespace std;

void copyArr(string source[], string destination[], int length)
{
    for (int i = 0; i < length; i++)
    {
        destination[i] = source[i];
    }
}

//NOTE: this will consider punctuation as a part of words
string * getWords(const string& text, int & resultWordsLength)
{
    istringstream textReader(text);

    int numWords = 0;
    string * words = new string[numWords];

    string word;
    while (textReader >> word)
    {
        numWords++;
        string * wordsExtended = new string[numWords];

        //NOTE: this re-allocation and copying on each word is horrible performance-wise, but it makes it easier to
        //illustrate the concept of freeing and allocating memory in a loop. A better solution would be to count the
        //words first and then make a single array large enough to fit them all, and then store them in that array
        copyArr(words, wordsExtended, numWords - 1);
        //store the current word as the last item
        wordsExtended[numWords - 1] = word;

        delete[] words;
        words = wordsExtended;
    }

    resultWordsLength = numWords;

    return words;
}

int main()
{
    string text = "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";

    int numWords;
    string * words = getWords(text, numWords);

    for (int i = 0; i < numWords; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}
