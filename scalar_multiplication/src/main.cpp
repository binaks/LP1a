#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include "../include/scalar_multiplication.h"

using namespace std;

int main () {
    int Vet[] = {1,2,-3,-4,5,-6};

    scalar_multiplication( begin(Vet), end(Vet), 3 );
    // O vetor resultante seria:
    // { 3, 6, -9, -12, 15, -18 }

    cout << "Vet = [ ";

    for (auto i(begin(Vet)); i < end(Vet); ++i) {
        cout << *i << " ";
    }

    cout << "]" << endl;

    return 0;
}
