#include<iostream>

int main() 
{
    std::cout << 42 << " " << 052 << " " << 0x2a << " " << 0x2A << std::endl
        << 0.42 << " " << .42f << " " << 42e-2 << std::endl
        << 2000000000 << std::endl
        << -2000000000 << std::endl
        << 4000000000UL << std::endl
        << 5000000000LL << std::endl //NOTE: LL is guaranteed in C++11
        << 'Z' << std::endl
        << true << std::endl;

    return 0;
}
