#include <iostream>
#include <iterator> // first, last
#include <sstream>

// void filter (int v[], size_t sz) {
// void filter (int *v, size_t sz) {
void filter (int * first, int * last) {
#ifdef C_LIKE
//  auto sz = last - first;
    auto sz = std::distance (first, last);

    std::cout << ">>> [ ";
    for (auto i(0u); i< sz; ++i)
        std::cout << first[i] << " ";
    std::cout << "]\n";
#else

    std::cout << ">>> [ ";
    while (first != last) {
        std::cout << *first++ << " ";
    }
    std::cout << "]\n";

#endif
}

#define MAX_LEN 100 // Comprimento maximo de entrada`

int main () {
//  int A[] = {2, 4, -3, 0, 5, -12, -5, 8};
//  size_t len = sizeof (A) / sizeof (A[0]); // sizeof eh em bytes, seria o tamanho do vetor inteiro em bytes divido pelo tamanho de um elemento

    int A [MAX_LEN]; // Vetor que guarda os dados de entrada
    short n_cases(0); // Quantidade de casos de teste
    short len; // Comprimento (tamanho logico) da entrada do caso de teste
    std::string line; // guarda os dados de entrada    

    std::cin >> n_cases; //quantos casos para rodar

    // laco para ler cada um dos casos de teste
    for (auto i(0); i < n_cases; ++i) {
        std::cin >> len; // Captura o comprimento dos dados de entrada do i-esimo caso teste
        //Captura a linha com os dados
        std::getline (std::cin, line);
        std::istringstream iss(line);
        //Laco para extrair cada inteiro individual e armazenar no array
        for ( auto num(0) ; num < len ; num++ ) {
            iss >> A[num];
        }
        filter(std::begin(A), std::begin(A) + len);
    }

//  filter (A+2, A+5);
//  filter (A, len);
//  filter (A, A+len);
//  filter (std::begin(A), std::end(A));
//  filter (A, &A[len]);

    return 0;
}
