#include "../include/copy.h"

int* copy( const int *first, const int *last, int *d_first ) {
    auto p(d_first);

    for (auto i(0); i < (last - first); ++i) {
        *(d_first + i) = *(first + i);
        p++;
    }

    return p;
}
