#include "../include/result.h"
#include <iostream>

int * min( int *first, int *last) {
    int *min = first;

    for (auto i(0); i < (last - first); ++i) {
        if (*(first + i) < *min) {
            min = (first + i);
        }
    }
    
    return min;
}
