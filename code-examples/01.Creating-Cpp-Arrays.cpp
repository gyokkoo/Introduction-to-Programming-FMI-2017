#include<cmath>

int defaultIninitialized[2];

int main()
{
    static int defaultInitializedLocal[2];
    int uninitialized[4];
    int numbers[3] = {13, 42, 69,}; //NOTE: having a comma after the last element is acceptable
    char abc[] = {'a', 'a' + 1, 99};
    char xyz[] = "xyz";
    float emptyArray[] = {};
    double arrayWithDefaults[3] = {3.14};
    int initList[] {13, 42, 69};

    return 0;
}
