#include <iostream>

// Imprimir A
void printA (int a[20]);

int main () {

    int n;
    int a[20];
    int tmp;

// Ler 20 inteiros
    for (auto i(0); i < 20; i++) {
        std::cout << "Entre com um inteiro (posicao " << i << "): " << std::endl;
        std::cin >> n;
// Armazenar os inteiros em um vetor A
        a[i] = n;
    }

    std::cout << std::endl;

    printA(a);

// Trocar o ultimo elemento de A com o 1o, o penultimo pelo 2o, ...
    for (auto i(0); i < 10; i++) {
        tmp = a[i];
        a[i] = a[19 - i];
        a[19 - i] = tmp;
    }

// Imprimir o vetor modificado
    printA(a);

    return 0;
}

void printA (int a[20]) {
    for (auto i(0); i < 20; i++) {
        if (i == 0)
            std::cout << "A = [";
        if (i < 19)
            std::cout << a[i] << ",";
        if (i == 19)
            std::cout << a[i] << "]" << std::endl;
    }
}
