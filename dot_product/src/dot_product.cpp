#include "../include/dot_product.h"

int dot_product( const int *a_first, const int *a_last, const int *b_first ) {
    int result(0);

    for (auto i(0); i < a_last - a_first; ++i) {
        result += *(a_first + i) * *(b_first + i);
    }

    return result;
}
