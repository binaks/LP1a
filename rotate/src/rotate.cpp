#include "../include/rotate.h"

void rotate( int *first, int *n_first, int *last ) {
    int n = last - first; // tamanho do vetor
    int m = last - n_first; // tamanho de *n_first ate o final
    int p = n_first - first; // tamanho ate *n_first

    int Aux[n];

    for (auto i(0) ; i < m ; ++i) {
        Aux[i] = *(n_first + i);
    }

    for (auto i(0) ; i < p ; ++i) {
        Aux[m + i] = *(first + i);
    }

    for (auto i(0) ; i < n ; ++i) {
        *(first + i) = Aux[i];
    }
}
