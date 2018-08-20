#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include "../include/compact.h"

int main () {

    int A[] = {-2,-8,2,7,-3,10,1,0,-3,7};

    auto last( compact( std::begin(A), std::end(A) ) );

    for (auto i(std::begin(A)); i != last; ++i ) {
        if (i == std::begin(A))
            std::cout << ">>> A = [ ";
        std::cout << *i << " ";
        if (i == (last - 1))
            std::cout << "]" << std::endl;
    }

    return 0;
}
