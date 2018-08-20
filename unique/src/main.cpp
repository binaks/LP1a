#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin, std::end()
#include "../include/unique.h"

using namespace std;

int main() {
    int A[] = {1,2,1,2,3,3,1,2,4,5,3,4,5};

    // aplicar unique sobre A
    auto last = unique( begin(A), end(A) );

    // O comando abaixo deveria imprimir A com o conteudo 1,2,3,4,5
    for( auto i( begin(A) ); i != last; ++i ) {
        cout << *i << " ";
    }
    cout << std::endl;

    // Mostra o novo tamanho de A, que seria 5
    std::cout << ">>> O comprimento (logico) de A apos unique eh: "
              << std::distance( begin(A), last) << "\n";

    return 0;
}
