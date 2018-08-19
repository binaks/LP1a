#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include "../include/result.h"

// using namespace std;

int main () {
    int A[] = {1,2,-3,-4,5,-6};
    
    // Deveria imprimir -6
    const int * result = min( const_cast <const int *> (std::begin(A)), const_cast <const int *> ( std::end(A) ));
    std::cout << ">>> " << *result << std::endl;
    
    // Deveria imprimir -4
    result = min( std::begin(A) + 1, std::begin(A) + 5 );
    std::cout << ">>> " << *result << std::endl;

    return 0;
}
