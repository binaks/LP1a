#include <iostream>
#include "../include/swap.h"

int main () {
    int a(3), b(10);
    float x(1.3), y(5.6);
    std::string s1("teste"), s2("palavra");

    std::cout << ">>> Before: " << a << ", " << b << std::endl;
    lp1::swap (a,b);
    std::cout << ">>> After:: " << a << ", " << b << std::endl;

    std::cout << ">>> Before: " << x << ", " << y << std::endl;
    lp1::swap (x,y);
    std::cout << ">>> After:: " << x << ", " << y << std::endl;

    std::cout << ">>> Before: " << s1 << ", " << s2 << std::endl;
    lp1::swap (s1,s2);
    std::cout << ">>> After:: " << s1 << ", " << s2 << std::endl;

    return 0;
}
