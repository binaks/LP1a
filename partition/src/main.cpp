#include <iostream>
#include <iterator>
#include "../include/partition.h"

int main() {
    int A[] = {-5,7,10,7,8,9,1,7,-2,3};
    
    partition ( std::begin(A), std::end(A), (std::begin(A) + 2) );

    for (auto i(0); i < (std::distance (std::begin(A),std::end(A))) ; ++i) {
        std::cout << A[i] << " ";
    }
        std::cout << std::endl;

    return 0;
}
