#include <iostream>

using namespace std;

/*
    Проверете верността на булевите изрази,
    !1||0&&1
    false&&true||false
    !(1||0&&1)
    false&&(true||false)
    (!1||0&&1)||(false&&true||false)
    !(!1||0&&1)||(false&&true||false)
*/

int main()
{
    bool firstExpression = !1 || 0 && 1;
    cout << firstExpression << endl; // false

    bool secondExpression = false && true || false;
    cout << secondExpression << endl; // false

    bool thirdExpression = !(1 || 0 && 1);
    cout << thirdExpression << endl; // false

    bool fourthExpression = false && (true || false);
    cout << fourthExpression << endl; // false

    bool fifthExpression = (!1 || 0 && 1) || (false && true || false);
    cout << fifthExpression << endl; // false

    bool sixthExpression = !(!1 || 0 && 1) || (false && true || false);
    cout << sixthExpression << endl; // true

    return 0;
}
