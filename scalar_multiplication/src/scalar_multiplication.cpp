#include "../include/scalar_multiplication.h"

void scalar_multiplication( int *first, int *last, int scalar) {
    for (auto i(0); i < (last - first); ++i) {
        *(first + i) *= scalar;
    }
}
