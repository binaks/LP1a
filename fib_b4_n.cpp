#include <iostream>

int main () {
    int n;
    int fibAtual (0);
    int proxFib (1);
    int tmp;

// Recebe um valor inteiro positivo n
    std::cout << "Entre com um valor inteiro positivo: " << std::endl;
    std::cin >> n;

// Calcula Fibonacci ate n
    
    while (fibAtual <= n) {

        std::cout << fibAtual << " ";

        tmp = proxFib;
        proxFib += fibAtual;
        fibAtual = tmp;
        
    }

    std::cout << std::endl;

    return 0;
}
