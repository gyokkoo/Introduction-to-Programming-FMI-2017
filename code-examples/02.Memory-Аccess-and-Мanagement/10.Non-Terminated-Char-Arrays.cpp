#include<iostream>

using namespace std;

int main()
{
    // NOTE: line1 is actually terminated - when using array initializer, all uninitialized values are set to their
    // default values. Since we've explicitly stated the size of line1 as 4, and have initialized 3 items in it, the
    // last item will get default-initialized. line2, however doesn't state size explicitly, so it gets size 3 due to
    // the 3 items in the initializer list - and they don't have a null-terminator
    char line1[4] = {'a', 'b', 'c'};
    char line2[] = {'d', 'e', 'f'};

    cout << line1 << endl;
    cout << line2 << endl;

    return 0;
}
