#include <iostream>

// Imprimir B
void printB (int b[20]);

int main () {

    int n;
    int b[20];
    int tmp;

// Ler 20 inteiros
    for (auto i(0); i < 20; i++) {
        std::cout << "Entre com um inteiro (posicao " << i << "): " << std::endl;
        std::cin >> n;
// Armazenar os inteiros em um vetor B
        b[i] = n;
    }

    std::cout << std::endl;

    printB(b);

    for (auto i(0); i < 20; i++) {
        if ((i%2) == 1) {
            tmp = b[i];
            b[i] = b[i+1];
            b[i+1] = tmp;
        }
    }

// Imprimir o vetor modificado
    printB(b);

    return 0;
}

void printB (int b[20]) {
    for (auto i(0); i < 20; i++) {
        if (i == 0)
            std::cout << "B = [";
        if (i < 19)
            std::cout << b[i] << ",";
        if (i == 19)
            std::cout << b[i] << "]" << std::endl;
    }
}
