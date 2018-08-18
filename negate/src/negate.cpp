#include "../include/negate.h"

void negate (int *first, int *last) {
    for (auto i(0); i < (last - first); ++i) {
        (*(first + i)) = -(*(first + i));
    }
}
