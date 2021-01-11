#include "swap.h"
#include <iostream>

int main() {
    int a = 42;
    int b = 153;

    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;

   swap(a, b);

    std::cout << std::endl << "Swap" << std::endl;
    std::cout << "a:" << a << std::endl;
    std::cout << "b:" << b << std::endl;

    return 0;
}