#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include "../include/result.h"

using namespace std;

int main () {
    int A[] = {1,2,-3,-4,5,-6};
    int *result;
    
    // Deveria imprimir -6
    result = min( begin(A), end(A) );
    std::cout << ">>> " << *result << std::endl;
    
    // Deveria imprimir -4
    result = min( begin(A) + 1, begin(A) + 5 );
    std::cout << ">>> " << *result << std::endl;

    return 0;
}
