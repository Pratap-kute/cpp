#include <iostream>
#include "Log.cpp"

int main()
{
    Log("Hello World!");
    unsigned int veriable =8;
    char a=65;
    std::cout << sizeof(a) << std::endl;
    veriable = 10;
    std::cout << veriable << std::endl;
    std::cin.get();
}