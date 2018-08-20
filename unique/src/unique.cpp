#include "../include/unique.h"
#include <iterator> // std::begin, std::end()

bool isElementOf (int e, int* first, int* last) {
    for (auto i(first); i != last; ++i) {
        if (*i == e) return true;
    }
    
    return false;
}

int* unique( int* first, int* last ) {
    int A[(last - first)];
    int* b = A;
    int n = 0;

    for (auto i(0); i < (last - first); ++i) {
        if (!isElementOf (*(first + i), b, (b + n))) {
            A[n] = *(first + i);
            n++;
        }
    }

    for (auto i(0); i < (last - first); ++i) {
        *(first + i) = *(b + i);
    }

    return (first + n);
}
