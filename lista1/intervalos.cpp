#include <iostream>

// Calcular a porcentagem de valores dentro de cada um dos intervalos
float calcularPorcentagem ( int, int );

int main () {
    int x; // valores entrados
    int n(0); // quantidade de valores lidos
    int a(0); // quantidade de valores no intervalo [0,25)
    int b(0); // quantidade de valores no intervalo [25,50)
    int c(0); // quantidade de valores no intervalo [50,75)
    int d(0); // quantidade de valores no intervalo [75,100]

    std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << std::endl;

// Ler cada valor enquanto o usuario nao pressionar <Ctrl+d>
    while (std::cin >> x) {

// Iterar quantos valores foram lidos
        n++;

// Verficar quantos deles estao em cada um dos intervalos:
// [0,25)
        if (x >= 0 and x < 25)
            a++;

// [25,50)
        if (x > 25 and x < 50)
            b++;

// [50,75)
        if (x > 50 and x < 75)
            c++;

// [75,100]	
        if (x > 75 and x <= 100)
            d++;
    }

// Exibir contagem para os intervalos solicitados
    std::cout << calcularPorcentagem (a, n) << "\% dos valores entrados estao no intervalo [0,25)"   << std::endl;
    std::cout << calcularPorcentagem (b, n) << "\% dos valores entrados estao no intervalo [25,50)"  << std::endl;
    std::cout << calcularPorcentagem (c, n) << "\% dos valores entrados estao no intervalo [50,75)"  << std::endl;
    std::cout << calcularPorcentagem (d, n) << "\% dos valores entrados estao no intervalo [75,100]" << std::endl;

    return 0;
}

float calcularPorcentagem ( int quantidade, int total ) {
    return ((100. * quantidade) / total);
}
