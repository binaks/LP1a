#include <iostream>

int main () {

    float n;
    float vet[20];

    float min;
    float pos;

// Ler 20 numeros reais
    for (auto i (0); i < 20; i++) {
        std::cout << "Entre com um numero real (posicao " << i << "): " << std::endl;
        std::cin >> n; 

// Armazenar os numeros em um vetor Vet
        vet[i] = n;
    }

    std::cout << std::endl;

// Imprimir o vetor na tela
    for (auto i (0); i < 20; i++) {
        if (i == 0)
            std::cout << "Vet = [";
        if (i < 19)
            std::cout << vet[i] << ",";
        if (i == 19)
            std::cout << vet[i] << "]" << std::endl << std::endl;
    }

// Procurar o menor elemento de Vet
    min = vet[0];

    for (auto i (0); i < 20; i++) {
        if (vet[i] <= min) {
            min = vet[i];
            pos = i;
        }
    }

// Escrever o menor elemento de Vet e em que posicao ele se encontra

    std::cout << "O menor elemento de Vet eh " << min << " na posicao " << pos << "." << std::endl;

    return 0;
}
