#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end()
#include "../include/rotate.h"

using namespace std;

int main() {

    int A[] = {1,2,3,4,5,6,7};

    // aplicar rotate, de mandeira que 3 passe a ser o novo "primeiro" elemento em A
    rotate( begin(A), begin(A) + 2, end(A) );

    // O comando abaixo deveria imprimir A com o conteudo 3, 4, 5, 6, 7, 1, 2
    for ( auto i( cbegin(A) ) ; i != cend(A) ; ++i )
        cout << *i << " ";
    cout << std::endl;

    return 0;
}
