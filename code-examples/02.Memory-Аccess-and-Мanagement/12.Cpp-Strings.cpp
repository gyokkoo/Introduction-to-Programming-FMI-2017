#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string theFoxPart = "the quick brown fox";
    string theActionPart("jumps over");
    char dogPartCString[] = "the lazy dog";
    string sentence = theFoxPart + string("---") + theActionPart + string(3, '-') + dogPartCString;
    string sameSentance = "the quick brown fox---jumps over---the lazy dog";

    cout << sentence << " (length: )" << sentence.size() << endl;

    if (sentence == sameSentance) {
        cout << "sentence and sameSentence are equal" << endl;
    }

    cout << 'q' << " found at " << sentence.find('q') << endl;
    cout << "lazy" << " found at " << sentence.find("lazy") << endl;

    string cat("cat");
    int catIndex = sentence.find(cat);
    if (catIndex == string::npos) {
        cout << "cat not found" << endl;
    }
	else 
	{
        cout << "cat found at " << catIndex << endl;
    }

    string fox = sentence.substr(sentence.find("fox"), string("fox").size());

    sentence.replace(sentence.find(fox), cat.size(), cat);

    cout << "after replacing " << fox << " with " << cat << ":" << endl;
    cout << sentence << endl;
    for (int i = 0; i < sentence.size(); i++) 
	{
        //NOTE: toupper will return the same value if it can't convert to uppercase
        char upperCase = toupper(sentence[i]);
        sentence[i] = upperCase;
    }

    cout << "capitalized: " << sentence << endl;

    return 0;
}
