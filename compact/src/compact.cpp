#include <iostream>
#include "../include/compact.h"

int* compact( int* first, int* last ) {

    int Aux[(last - first)];

    auto n(0);

    for (auto i(first); i != last; ++i) {
        if (*i > 0) {
            Aux[n++] = *i;
        }
    }

    for (auto i(0); i < n; i++) {
        *(first + i) = Aux[i];
    }

    return (first + n);

}
