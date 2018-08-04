#include <iostream>

int main () {
	int n;
	int count = 0;
// Ler 5 valores inteiros
	for (auto i (0); i < 5; ++i) {
		std::cin >> n;
// Verificar se eh negativo ou nao e incrementar caso positivo
		if (n < 0)
			count++;
	}

// Imprimir quantos sao negativos
	std::cout << count;

	return 0;
}