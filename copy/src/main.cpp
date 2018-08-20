#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end(), std::cbegin, std::cend
#include "../include/copy.h"

using namespace std;

int main() {
    int A[] = {1,2,3,4,5}; // Vetor "fonte"
    int B[] = {0,0,0}; // Vetor "destino"

    // Copiar elementos 2, 3 e 4 para o inicio de B
    auto b_last = copy( cbegin(A)+1, cbegin(A)+4, begin(B) );

    // O comando abaixo deveria imprimir B com o conteudo 2, 3, 4
    for ( auto i( begin(B) ) ; i != b_last ; ++i)
        cout << *i << " ";
    cout << std::endl; 

    return 0;
}
