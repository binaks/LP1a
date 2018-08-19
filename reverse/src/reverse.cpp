#include <iostream> // std::swap
#include "../include/reverse.h"

void reverse( int *first, int *last ) {

    int mid = (last - first)/2;    

    for ( auto i(0); i < mid ; ++i) {
        std::swap(*(first +i), *((last - 1) - i));
    }
}
