#include <iostream>

int main () {
    int m;
    int n;
    int sum (0);   
 
    std::cout << "Entre com um par de valores inteiros positivos (Ctrl+d p/ encerrar): " << std::endl;

// Ler um numero nao determinado de pares de inteiros positivos "m n"
    while (std::cin >> m >> n) {

// Calcular a soma dos n primeiros inteiros consecutivos a partir de m (inclusive)
        for (auto i(0); i < n; i++) {
            sum += m++;
        }

// Mostrar o resultado
        std::cout << sum << std::endl;

// Resetar sum
        sum = 0;
    }

    return 0;
}
