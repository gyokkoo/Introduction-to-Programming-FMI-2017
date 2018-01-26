#include<iostream>

int main() 
{
    bool sizesGuarantees =
    sizeof(char)	<=sizeof(short) &&
    sizeof(short)	<=sizeof(int) &&
    sizeof(int)		<=sizeof(long) &&
    sizeof(long) 	<=sizeof(long long) &&
    sizeof(char) == 1; //in bytes

    std::cout << sizesGuarantees << std::endl;

    // All of these do the same thing (on a 32-bit system or a Windows system):
    //signed negative = -200;
    //signed long negative = -200;
    //signed long int negative = -200;
    int signed long negative = -200;
    std::cout << negative << std::endl;

    std::cout << sizeof(signed) << std::endl;
    std::cout << sizeof(signed long) << std::endl;
    std::cout << sizeof(signed long int) << std::endl;
    std::cout << sizeof(int signed long) << std::endl;
}
