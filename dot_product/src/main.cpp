#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin(), std::end(), std::cbegin(), std::cend()
#include "../include/dot_product.h"

using namespace std;

int main() {
    // Desejamos multiplicar a=[1, 3, -5] b=[4, -2, -1]
    int Vet[] {1, 3, -5, 4, -2, -1}; // Os dois vetores armazenados no mesmo arranjo

    auto result = dot_product( cbegin(Vet), cbegin(Vet)+3, // Vetor a
                               cbegin(Vet)+3 );            // Vetor b

    // O comando abaixo deveria imprimir 3, se correto
    cout << ">>> O resultado eh: " << result << std::endl;
    // [1,3,-5] [4,-2,-1] = (1)(4)+(3)(-2)+(-5)(-1)
    //                    = 4 - 6 + 5
    //                    = 3

    return 0;
}
