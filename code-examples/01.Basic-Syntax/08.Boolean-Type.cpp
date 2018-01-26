#include<iostream>

using namespace std;

int main() 
{
    bool initializedWithKeyword = true;
    bool initializedWithKeywordCtor(false);
    bool initializedWithZero = 0;
    bool initializedWithNegativeNumber(-13);

    cout << initializedWithKeyword << endl
        << initializedWithKeywordCtor << endl
        << initializedWithZero << endl
        << initializedWithNegativeNumber << endl;

    return 0;
}
