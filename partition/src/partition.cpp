#include "../include/partition.h"
#include <utility>
#include <iostream>

void partition( int *first, int *last, int *pivot ) {
    auto a(0);
    auto b(last - first);

    int A[b];

    for (auto i(0) ; i < b ; ++i) {
        A[i] = *pivot;
    }

    for (auto i(0) ; i < b ; ++i) {
        std::cout << A[i] << " " ;
    }
        std::cout << std::endl;

    b--;

    for (auto i(first) ; i != last ; ++i) {
        if (*i < *pivot) {
            A[a++] = *i;
        } else if (*i > *pivot) {
            A[b--] = *i;
        }
    }

    for (auto i(0) ; i < (last - first) ; ++i) {
        *(first + i) = A[i];
    }

}
