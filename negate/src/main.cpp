#include <iostream> // std::cout, std::endl
#include <iterator> // std::begin, std::end
#include "../include/negate.h"


int main () {
    int Vet[]={1,2,-3,-4,5,-6};

    std::cout << "V = [ ";
    
    for (auto i(0); i < 6; ++i) {
        std::cout << Vet[i] << " ";
    }
    
    std::cout << "]" << std::endl;

    // Nega todo o vetor
    negate( std::begin(Vet), std::end(Vet) );
    
    std::cout << "V = [ ";
    
    for (auto i(0); i < 6; ++i) {
        std::cout << Vet[i] << " ";
    }
    
    std::cout << "]" << std::endl;

    // Nega do 3o ate o ultimo elemento do vetor
    negate( std::begin(Vet) + 2, std::end(Vet) );
    
    std::cout << "V = [ ";
    
    for (auto i(0); i < 6; ++i) {
        std::cout << Vet[i] << " ";
    }
    
    std::cout << "]" << std::endl;
    // Nega apenas o 4o elemento do vetor
    negate( std::begin(Vet) + 3, std::begin(Vet) + 4);
    
    std::cout << "V = [ ";
    
    for (auto i(0); i < 6; ++i) {
        std::cout << Vet[i] << " ";
    }
    
    std::cout << "]" << std::endl;

    return 0;
}
