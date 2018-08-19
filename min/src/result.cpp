#include "../include/result.h"
#include <iostream>

const int * min( const int *first, const int *last) {
    const int *p_min(first);

    for (auto i(1); i < (last - first); ++i) {
        if (*(first + i) < *p_min) {
            p_min = first + i;
        }
    }
    
    return p_min;
}
